# 签名画板组件

## Requirements:
- **iOS** 9.0+
- Xcode 10.0+
- Swift 5.0+


## Installation Cocoapods
<pre><code class="ruby language-ruby">pod 'WZGraphicView', '~> 1.1.0'</code></pre>
<pre><code class="ruby language-ruby">pod 'WZGraphicView/Binary', '~> 1.1.0'</code></pre>

## Use
```swift
     /// 画板视图
    public lazy var graphicView: WZGraphicView = {
        let temView = WZGraphicView()
        temView.backgroundColor = UIColor.clear
        temView.beganGrapBlock = { [weak self] begin in
            guard let self = self else { return }
            self.confimButton.isEnabled = begin
        }
        return temView
    }()
```

## License
WZGraphicView is released under an MIT license. See [LICENSE](LICENSE) for more information.