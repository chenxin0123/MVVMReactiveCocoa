//!
//  MRCTabBarController.h
//  MVVMReactiveCocoa
//
//  Created by leichunfeng on 15/1/9.
//  Copyright (c) 2015年 leichunfeng. All rights reserved.
//

#import "MRCViewController.h"

/// 作为一个容器存放一个UITabBarController 状态栏样式等返回tabBarController的样式

@interface MRCTabBarController : MRCViewController <UITabBarControllerDelegate>

@property (nonatomic, strong, readonly) UITabBarController *tabBarController;

@end
