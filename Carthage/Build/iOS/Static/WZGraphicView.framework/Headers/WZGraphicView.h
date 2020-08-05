//
//  WZGraphicView.h
//  WZGraphicView
//
//  Created by xiaobin liu on 2019/7/18.
//  Copyright © 2019 xiaobin liu. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


/**
 签名画板
 */
@interface WZGraphicView : UIView {
    
    CGPoint _start;//起始点
    CGPoint _move;//移动点
    CGMutablePathRef _path;//路径
    NSMutableArray * _pathArray;//保存路径信息
    CGFloat _lineWidth;//线宽
    UIColor * _lineColor;//线的颜色
    BOOL _isDrawLine;//是否有画线
}

/**
 *  线宽
 */
@property (nonatomic,assign) CGFloat  lineWidth;
/**
 *  线的颜色
 */
@property (nonatomic,strong) UIColor * lineColor;
/**
 *  画线路径
 */
@property (nonatomic,strong) NSMutableArray * pathArray;

/**
 *  是否开始绘制 和 清空绘制
 */
@property (copy,nonatomic) void(^beganGrapBlock)(BOOL isBegan);

/**
 *  获取画图
 */
-(UIImage*)getDrawingImg;

/**
 *  清空画板
 */
-(void)clearDrawBoard;

/**
 *  撤销上一次操作
 */
-(void)undoLastDraw;

@end

NS_ASSUME_NONNULL_END
