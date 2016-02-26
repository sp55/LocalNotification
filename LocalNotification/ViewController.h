//
//  ViewController.h
//  LocalNotification
//
//  Created by admin on 16/2/26.
//  Copyright © 2016年 AlezJi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
// 设置本地通知
+ (void)registerLocalNotification:(NSInteger)alertTime;
+ (void)cancelLocalNotificationWithKey:(NSString *)key;

@end

