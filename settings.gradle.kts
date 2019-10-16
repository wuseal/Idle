pluginManagement {
    repositories {
        maven { setUrl("https://maven.aliyun.com/repository/gradle-plugin") }
        maven { setUrl("https://maven.aliyun.com/repository/jcenter") }
        gradlePluginPortal()
    }

    resolutionStrategy {

        val kotlinVersion: String by settings
        eachPlugin {
            when {
                requested.id.id == "org.jetbrains.kotlin.native.cocoapods" ||
                        requested.id.id == "kotlin-native-cocoapods" ->
                    useModule("org.jetbrains.kotlin:kotlin-gradle-plugin:$kotlinVersion")
                requested.id.id.startsWith("org.jetbrains.kotlin") ->
                    useVersion(kotlinVersion)
                requested.id.id == "kotlinx-serialization" -> {
                    useModule("org.jetbrains.kotlin:kotlin-serialization:$kotlinVersion")
                }
            }
        }
    }
}
rootProject.name = "Idle"

include(":mpplib")
include(":androidapp")

enableFeaturePreview("GRADLE_METADATA")

apply { from("flutter_settings.gradle") }


