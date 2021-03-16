//
//  AlertBubbleLable.h
//  TWAlertBubbleView_Example
//
//  Created by TW on 2021/3/16.
//  Copyright © 2021 tanwang11. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AlertBubbleLable : NSObject

+ (UILabel *)text:(NSString *)text color:(UIColor *)textColor font:(UIFont *)textFont width:(float)textWidth;

@end

NS_ASSUME_NONNULL_END
