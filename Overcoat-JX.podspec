#
# Be sure to run `pod lib lint Overcoat-JX.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'Overcoat-JX'
  s.version          = '4.0.0-beta.2-v8'
  s.summary          = 'Overcoat is a small but powerful library that makes creating REST clients simple and fun.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
							Overcoat is a small but powerful library that makes creating REST clients simple and fun.
                       DESC

  s.homepage         = 'https://github.com/tospery/Overcoat-JX'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'YangJianxiang' => 'tospery@gmail.com' }
  s.source           = { :git => 'https://github.com/tospery/Overcoat-JX.git', :tag => s.version.to_s }

  s.ios.deployment_target = '11.0'

  s.source_files = 'Overcoat-JX/Classes/**/*'
  
  s.frameworks = 'UIKit'
  s.dependency 'ReactiveObjC', '3.1.1'
  s.dependency 'AFNetworking', '3.2.1'
  s.dependency 'Mantle', '2.1.1'
end
