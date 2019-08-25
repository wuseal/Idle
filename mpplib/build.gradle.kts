plugins {
    id("org.jetbrains.kotlin.multiplatform")
    id("org.jetbrains.kotlin.native.cocoapods")
    id("com.android.library")
    id("kotlinx-serialization")
}

// CocoaPods requires the podspec to have a version.
version = "1.0.7"
group = "wu.seal.idle.library"

val coroutineVersion: String by project
val serializationVersion: String by project
val ktorVersion: String by project
val napierVersion: String by project

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
        val release by getting {
            isMinifyEnabled = false
        }
    }
}

dependencies {
    implementation(fileTree("dir" to "libs", "include" to arrayOf("*.jar")))
    androidTestImplementation("com.android.support.test:runner:1.0.2")
}

kotlin {
    android()
    // Add a platform switching to have an IDE support.
    val buildForDevice = project.findProperty("kotlin.native.cocoapods.target") == "ios_arm"
    if (buildForDevice) {
        iosArm64("iOS64")
        iosArm32("iOS32")
        val iosMain by sourceSets.creating
        sourceSets["iOS64Main"].dependsOn(iosMain)
        sourceSets["iOS32Main"].dependsOn(iosMain)
    } else {
        iosX64("ios")
    }
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
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-runtime-common:$serializationVersion")
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core-common:$coroutineVersion")
                implementation("io.ktor:ktor-client-core:$ktorVersion")
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
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-runtime:$serializationVersion")
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

        val commonMain by getting
        val commonTest by getting
        val iosMain by getting {
            dependsOn(commonMain)
            dependencies {
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-runtime-native:$serializationVersion")
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core-native:$coroutineVersion")
                implementation("io.ktor:ktor-client-ios:$ktorVersion")
            }
        }
    }

}
