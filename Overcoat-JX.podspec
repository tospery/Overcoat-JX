Pod::Spec.new do |s|
  s.name     = 'Overcoat-JX'
  s.version  = File.read(File.join __dir__, 'Version').strip
  s.cocoapods_version = '>= 0.39'
  s.license  = 'MIT'
  s.summary  = 'Overcoat is a small but powerful library that makes creating REST clients simple and fun.'
  s.homepage = 'https://github.com/tospery/Overcoat-JX'
  s.authors  = { 'YangJianxiang' => 'tospery@gmail.com' }
  s.source   = { :git => 'https://github.com/tospery/Overcoat-JX.git', :tag => "#{s.version.to_s}" }
  s.requires_arc = true

  s.ios.deployment_target = '11.0'
  s.osx.deployment_target = '10.10'
  s.tvos.deployment_target = '9.0'
  s.watchos.deployment_target = '2.0'

  s.frameworks = 'Foundation'
  s.dependency 'Mantle', '2.1.1'
  s.dependency 'AFNetworking', '3.2.1'
  s.dependency 'ReactiveObjC', '3.1.1'

  s.source_files = 'Sources/Core/*.{h,m}', 'Sources/ReactiveCocoa/*.{h,m}'

end
