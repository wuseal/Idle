import UIKit
import mpplib
import Flutter
import FlutterPluginRegistrant // Only if you have Flutter Plugins.

@UIApplicationMain
class AppDelegate: FlutterAppDelegate {
    var flutterEngine: FlutterEngine?;

    // Only if you have Flutter plugins.
    override func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        self.flutterEngine = FlutterEngine(name: "io.flutter", project: nil);
        self.flutterEngine?.run(withEntrypoint: nil);
        GeneratedPluginRegistrant.register(with: self.flutterEngine);
        return super.application(application, didFinishLaunchingWithOptions: launchOptions);
    }

//    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
//        return true
//    }

//    func applicationWillResignActive(_ application: UIApplication) {}
//
//    func applicationDidEnterBackground(_ application: UIApplication) {}
//
//    func applicationWillEnterForeground(_ application: UIApplication) {}
//
//    func applicationDidBecomeActive(_ application: UIApplication) {}
//
//    func applicationWillTerminate(_ application: UIApplication) {}
}
