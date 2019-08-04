plugins {
    id("org.jetbrains.kotlin.multiplatform")
    id("org.jetbrains.kotlin.native.cocoapods")
    id("com.android.library")
}

repositories {
    maven { setUrl("https://maven.aliyun.com/repository/jcenter") }
    maven { setUrl("https://maven.aliyun.com/repository/google") }
    maven { setUrl("https://maven.aliyun.com/repository/central") }
}

// CocoaPods requires the podspec to have a version.
version = "1.0.1"
group = "wu.seal.idle.library"

android {
    compileSdkVersion(28)
    defaultConfig {
        minSdkVersion(15)
        targetSdkVersion(28)
        versionCode = 1
        versionName = "1.0"
        testInstrumentationRunner = "android.support.test.runner.AndroidJUnitRunner"
    }
    buildTypes {
        val release by getting{
            isMinifyEnabled = false
        }
    }
}

dependencies {
    //    implementation(fileTree(mapOf("dir" to "libs", "include" to ["*.jar"])))
    implementation("com.android.support:appcompat-v7:28.0.0")
    implementation("com.android.support.constraint:constraint-layout:1.1.3")
    androidTestImplementation("com.android.support.test:runner:1.0.2")
}

kotlin {
    android("android")
    iosArm32()
    iosArm64()
    iosX64()
    // This is for iPhone emulator
    // Switch here to iosArm64 (or iosArm32) to build library for iPhone device
    cocoapods {
        // Configure fields required by CocoaPods.
        summary = "Some description for a Kotlin/Native module"
        homepage = "Link to a Kotlin/Native module homepage"
        pod("AFNetworking", "~> 3.2.0")
    }
    sourceSets {
        commonMain {
            dependencies {
                implementation(kotlin("stdlib-common"))
            }
        }
        commonTest {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }
        val androidMain by getting {
            dependencies {
                implementation(kotlin("stdlib"))
            }
        }
        val androidTest by getting {
            dependencies {
                implementation(kotlin("test"))
                implementation(kotlin("test-junit"))
            }
        }

        val commonMain by getting
        val commonTest by getting
        val iosMain by creating {
            dependsOn(commonMain)
        }
        val iosTest by creating {
            dependsOn(commonTest)
        }

        iosArm32().compilations["test"].defaultSourceSet {
            dependsOn(iosTest)
        }
        iosArm32().compilations["main"].defaultSourceSet {
            dependsOn(iosMain)
        }
        iosArm64().compilations["test"].defaultSourceSet {
            dependsOn(iosTest)
        }
        iosArm64().compilations["main"].defaultSourceSet {
            dependsOn(iosMain)
        }
        iosX64().compilations["test"].defaultSourceSet {
            dependsOn(iosTest)
        }
        iosX64().compilations["main"].defaultSourceSet {
            dependsOn(iosMain)
        }
    }

}
