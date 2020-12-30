buildscript {
    val kotlinVersion: String by project
    repositories {
        jcenter()
        google()
        mavenCentral()
    }
    dependencies {
        classpath("com.android.tools.build:gradle:4.0.1")
        classpath("org.jetbrains.kotlin:kotlin-gradle-plugin:$kotlinVersion")
    }
}

allprojects {
    repositories {
        jcenter()
        google()
        mavenCentral()
    }
}
