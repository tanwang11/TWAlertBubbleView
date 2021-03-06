//
//  AlertBubbleLable.m
//  TWAlertBubbleView_Example
//
//  Created by TW on 2021/3/16.
//  Copyright © 2021 tanwang11. All rights reserved.
//

#import "AlertBubbleLable.h"
#import <TWUI/TWUI.h>

@implementation AlertBubbleLable

+ (UILabel *)text:(NSString *)text color:(UIColor *)textColor font:(UIFont *)textFont width:(float)textWidth {
    UILabel * textL  = ({
        UILabel * l = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, textWidth, 100)];
        l.text      = text;
        l.textColor = textColor;
        l.font      = textFont;
        l.backgroundColor = [UIColor clearColor];
        
        l;
    });
    
    textL.preferredMaxLayoutWidth = textWidth;
    [textL setContentHuggingPriority:UILayoutPriorityRequired forAxis:UILayoutConstraintAxisVertical];
    textL.numberOfLines = 0;
    
    // 设配frame
    [textL sizeToFit];
    textL.width = textWidth;
    return textL;
}

@end
