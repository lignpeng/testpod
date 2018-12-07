//
//  USViewController.h
//  testpod
//
//  Created by lignpeng on 2018/12/6.
//

/*
 展示数据控件
 */

#import <UIKit/UIKit.h>

@interface USViewController : UIViewController
    
//返回字符串数组
@property(nonatomic, copy) NSArray<NSString *>*(^actionBlock)();
    
@end
