plugins {
    id("com.android.library")
    kotlin("multiplatform")
    kotlin("native.cocoapods")
    kotlin("plugin.serialization") version "1.4.21"
    `maven-publish`
    id("com.chromaticnoise.multiplatform-swiftpackage") version "2.0.3"
}

// CocoaPods requires the podspec to have a version.
version = "1.0.7"
group = "wu.seal.idle.library"

val coroutineVersion: String by project
val serializationVersion: String by project
val ktorVersion: String by project

android {
    compileSdkVersion(30)
    defaultConfig {
        minSdkVersion(15)
        targetSdkVersion(30)
        versionCode = 1
        versionName = "1.0"
        testInstrumentationRunner = "android.support.test.runner.AndroidJUnitRunner"
    }
    buildTypes {
        val release by getting {
            isMinifyEnabled = false
        }
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }
}

dependencies {
    implementation(fileTree("dir" to "libs", "include" to arrayOf("*.jar")))
    androidTestImplementation("com.android.support.test:runner:1.0.2")
}


kotlin {
    android {
        publishLibraryVariants("release", "debug")
    }
    // Add a platform switching to have an IDE support.if run from xcode,then we only need to create one target to fast build
    if (project.hasProperty("fulliOS").not()) {
        val buildForDevice = project.findProperty("kotlin.native.cocoapods.target") == "ios_arm"
        if (buildForDevice) {
            iosArm64("ios")
        } else {
            iosX64("ios")
        }
    } else {
        //here will creat xcframework contains arm64&x64
        ios()
    }

    // This is for iPhone emulator
    // Switch here to iosArm64 (or iosArm32) to build library for iPhone device
    cocoapods {
        noPodspec()
        // Configure fields required by CocoaPods.
        summary = "Some description for a Kotlin/Native module"
        homepage = "Link to a Kotlin/Native module homepage"
        frameworkName = "mpplib"
        pod("AFNetworking", "~> 3.2.0")
    }
    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation(kotlin("stdlib-common"))
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:$serializationVersion")
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:$coroutineVersion")
                implementation("io.ktor:ktor-client-core:$ktorVersion")
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }
        val androidMain by getting {
            dependencies {
                implementation(kotlin("stdlib"))
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-android:$coroutineVersion")
                implementation("io.ktor:ktor-client-android:$ktorVersion")
            }
        }
        val androidTest by getting {
            dependencies {
                implementation(kotlin("test"))
                implementation(kotlin("test-junit"))
            }
        }
        val iosMain by getting {
            dependencies {
                implementation("io.ktor:ktor-client-ios:$ktorVersion")
            }
        }
    }

}
multiplatformSwiftPackage {
    swiftToolsVersion("5.0")
    targetPlatforms {
        iOS { v("9") }
    }
    buildConfiguration {
        release()
    }
}
//used to create XCFramework contains arm64 and x64
task("createFullXCFramework") {
    group = "multiplatform-swift-package"
    doLast {
        val rootProjectPath = rootProject.projectDir.absolutePath
        val swiftPackageDir = File(rootProjectPath, "mpplib/swiftpackage")
        swiftPackageDir.deleteRecursively()//clean origin created xcframework
        Runtime.getRuntime().exec("$rootProjectPath/gradlew createXCFramework -PfulliOS").run {
            inputStream.reader().forEachLine {
                println(it)
            }
            errorStream.reader().forEachLine {
                println(it)
            }
        }
    }
}