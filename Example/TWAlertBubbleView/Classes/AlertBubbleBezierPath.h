//
//  AlertBubbleBezierPath.h
//  TWAlertBubbleView_Example
//
//  Created by TW on 2021/3/16.
//  Copyright © 2021 tanwang11. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "AlertBubbleHead.h"


NS_ASSUME_NONNULL_BEGIN

@interface AlertBubbleBezierPath : NSObject

+ (UIBezierPath *)pathAtClipView:(UIView *)clipView
                       direction:(AlertBubbleViewDirection)direction
                           scale:(float)scale
                       triangleX:(float)triangleX
                       triangleY:(float)triangleY
                       triangleW:(float)triangleW
                       triangleH:(float)triangleH
                    cornerRadius:(float)cornerRadius;


@end

NS_ASSUME_NONNULL_END
