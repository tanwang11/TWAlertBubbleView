//
//  AlertBubbleFrame.h
//  TWAlertBubbleView_Example
//
//  Created by TW on 2021/3/16.
//  Copyright © 2021 tanwang11. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AlertBubbleHead.h"


NS_ASSUME_NONNULL_BEGIN


@class AlertBubbleView;
/*
 策略: bubbleView和boxView的superView相同.
 */
@interface AlertBubbleFrame : NSObject


+ (void)moveCustomView:(UIView *)customView // 中间显示的自定义view
            bubbleView:(UIView *)bubbleView // 自定义视图的气泡view
              baseView:(UIView *)baseView   // 自定义view和气泡view所在的view
            arroudRect:(CGRect)targetRect
       AlertBubbleView:(AlertBubbleView *)abView;


@end

NS_ASSUME_NONNULL_END
