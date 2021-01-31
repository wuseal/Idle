# Idle
Kotlin multiplatform app (Android&amp;iOS) that providing entertainment content

使用Kotlin跨平台技术实现的休闲App

iOS|Android
-|-
![iOS Demo](art/iOS.png)|![Android Demo](art/Android.png)

## How to Run Project(如何运行本工程)
### Run Android App(安装Android应用到手机或是模拟器)
#### 1. Prepare Environment(环境准备)
Android App could be build and install on Windows&Linux&MacOS System, Before you install and run the app,make sure you OS have these configs. (Android应用的构建安装可以在Windows&Linux&MacOS上进行，在开始构建应用进行安装前，需要确保你的电脑开发环境有如下内容)
   * Installed JDK (成功安装了JDK)
   * Installed Android Studio or Android SDK (成功安装了Android Studio或是Android SDK)
   * Set ANDROID_SDK_ROOT Environment Variable (设置ANDROID_SDK_ROOT环境变量)
    
#### 2. Clone Project by git (Clone本工程到本地)
#### 3. Open terminal at the root dir of project (在Clone下来的工程根目录下打开终端)
#### 4. Install Android App (行安装Android应用)
Make sure your computer has connected to Android devices or simulator, then execute next command to install Android App: (确认当前有连接到Android设备或是已经打开Android模拟器,在终端中输入如下指令执行安装应用：)
    ```./gradlew installDebug```
   
### Run iOS app (安装运行iOS应用到iphone或是iOS模拟器)
#### 1. Prepare Environment (环境准备)
iOS install only could be execute on MacOS, Before you start execute build iOS app, make sure your OS has these configs: (iOS应用的安装运行仅能在MacOS系统上进行，在开始构建应用进行安装前,需要确保你的电脑开发环境有如下内容)
   * Installed JDK (成功安装了JDK)
     MacOS could install Java by brew: `brew install java` (MacOS可以执行下面命令安装JDK：`brew install java`)
     
   * Installed Cocoaspod (成功安装了cocoaspods)
   * Installed Xcode (成功安装了XCode并且可以打开一个正常的工程)
    
#### 2. Clone Project by git (Clone本工程到本地)
#### 3. Open project with XCode (使用Xcode打开本工程)
Open `iosApp/iosApp.xcworkspace` with XCode (找到工程中目录下的`iosApp/iosApp.xcworkspace`文件，使用Xcode打开)

#### 4. Install Pods
Open terminal at `iosApp` dir and execute `pod install` (在iosApp目录下打开终端，并执行`pod install`)

#### 5. Run iosApp (运行应用)
Click run button on Xcode, and wait for iOS application runs on devices or simulator show as above. (XCode选择对应的iphone设备或模拟器,然后点击Xcode上的运行按钮，稍等一段时间，即可看到iOS应用成功安装到手机上并打开，如上图所示。)


* Tips: It will take quite long time when first execute run iOSApp, and will be fast later (温馨提示：第一次运行时间会比较长，大约10分钟左右，需要下载相关依赖和配置环境，后面就快了)

* Tips: It often failed at first execute run iosApp, if it is, try to run next command to solve it (一般iOS第一运行会失败，会报找不到mpplib模块的错误)
Solution: (解决方案:)
Redo `pod install` and rerun app (再次执行一下`pod install`后重新运行)

## Others (其它需知事项)
1. [How to Debug(如何调试本工程)](./DEBUG.md)
2. [More About KMM(Kotlin multiplatform mobile)](https://kotlinlang.org/lp/mobile/)

## Special Try (特别尝试)
If you want to try the classes in mpplib in your current iOS project right now without any Environment setting(No need install Java), try to add next line to your pod file:

(如果你想在你的iOS工程中立马使用mpplib模块里的功能类，可以直接引入下面的代码到你的Pod文件里，而不用设置任何的前置环境设置，包括Java的安装都不需要)

```ruby
  pod 'mpplib', :git => 'https://github.com/wuseal/Idle.git'
```



