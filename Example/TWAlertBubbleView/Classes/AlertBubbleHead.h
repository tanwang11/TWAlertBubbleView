//
//  AlertBubbleHead.h
//  TWAlertBubbleView_Example
//
//  Created by TW on 2021/3/16.
//  Copyright © 2021 tanwang11. All rights reserved.
//

#ifndef AlertBubbleHead_h
#define AlertBubbleHead_h




// 以targetRect为中心点
#define ABDArray @[@"NAN", @"上", @"下", @"左", @"右", @"Error"]
typedef NS_ENUM(int, AlertBubbleViewDirection) {
    AlertBubbleViewDirectionNone = 0,
    
    AlertBubbleViewDirectionTop, // 优先顺序
    AlertBubbleViewDirectionBottom,
    AlertBubbleViewDirectionLeft,
    AlertBubbleViewDirectionRight,
    
    AlertBubbleViewDirectionError,
};


#endif /* AlertBubbleHead_h */
