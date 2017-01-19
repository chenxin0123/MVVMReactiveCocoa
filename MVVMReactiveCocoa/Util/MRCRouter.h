//!
//  MRCRouter.h
//  MVVMReactiveCocoa
//
//  Created by leichunfeng on 14/12/27.
//  Copyright (c) 2014年 leichunfeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MRCViewController.h"


/// 通过VM的class与视图控制器的映射 返回对应视图控制器的实例
@interface MRCRouter : NSObject

/// Retrieves the shared router instance.
///
/// Returns the shared router instance.
+ (instancetype)sharedInstance;

/// Retrieves the view corresponding to the given view model.
///
/// viewModel - The view model
///
/// Returns the view corresponding to the given view model.
- (MRCViewController *)viewControllerForViewModel:(MRCViewModel *)viewModel;

@end
