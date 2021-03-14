Pod::Spec.new do |spec|
    spec.name                     = 'mpplib'
    spec.version                  = '1.0.7'
    spec.homepage                 = 'Link to a Kotlin/Native module homepage'
    spec.source                   = { :git => "Not Published", :tag => "Cocoapods/#{spec.name}/#{spec.version}" }
    spec.authors                  = ''
    spec.license                  = ''
    spec.summary                  = 'Some description for a Kotlin/Native module'

    spec.static_framework         = true
    spec.vendored_frameworks      = "mpplib/swiftpackage/mpplib.xcframework"
    spec.libraries                = "c++"
    spec.module_name              = "#{spec.name}_umbrella"



    spec.dependency 'AFNetworking', '~> 3.2.0'
    spec.dependency 'CryptoSwift'
end