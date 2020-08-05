Pod::Spec.new do |s|

  s.name             = 'WZGraphicView'
  s.version          = '1.1.0'
  s.summary          = 'WZGraphicView'

  s.description      = <<-DESC
    WZGraphicViewUI布局
                       DESC

  s.homepage         = 'https://github.com/WZLYiOS/WZGraphicView'
  s.license          = 'MIT'
  s.author           = { 'xiaobin liu'=> '327847390@qq.com' }
  s.source           = { :git => 'https://github.com/WZLYiOS/WZGraphicView.git', :tag => s.version.to_s }

  s.requires_arc = true
  s.static_framework = true
  s.swift_version         = '5.0'
  s.ios.deployment_target = '9.0'
  s.default_subspec = 'Source'

  s.subspec 'Source' do |ss|
    ss.source_files = 'WZGraphicView/Classes/*.{h,m}'
  end


  s.subspec 'Binary' do |ss|
    ss.vendored_frameworks = "Carthage/Build/iOS/Static/WZGraphicView.framework"
    ss.source_files = "Carthage/Build/iOS/Static/WZGraphicView.framework/Headers/*.h"
    ss.public_header_files = "Carthage/Build/iOS/Static/WZGraphicView.framework/Headers/*.h"
  end
end
