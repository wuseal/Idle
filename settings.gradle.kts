pluginManagement {

    resolutionStrategy {

        val kotlinVersion: String by settings
        eachPlugin {
            when {
                requested.id.id == "org.jetbrains.kotlin.native.cocoapods" ||
                        requested.id.id == "kotlin-native-cocoapods" ->
                    useModule("org.jetbrains.kotlin:kotlin-gradle-plugin:$kotlinVersion")
                requested.id.id.startsWith("org.jetbrains.kotlin") ->
                    useVersion(kotlinVersion)
            }
        }
    }
}
rootProject.name = "Idle"

include(":mpplib")
include(":androidapp")
