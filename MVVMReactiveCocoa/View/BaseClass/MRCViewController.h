//!
//  MRCViewController.h
//  MVVMReactiveCocoa
//
//  Created by leichunfeng on 14/12/27.
//  Copyright (c) 2014年 leichunfeng. All rights reserved.
//


/// 基类 1.导航栏标题的处理 2.pop手势 3.旋转方向 4.默认的状态栏样式 5.disAppear时保存快照

@interface MRCViewController : UIViewController

/// The `viewModel` parameter in `-initWithViewModel:` method.
@property (nonatomic, strong, readonly) MRCViewModel *viewModel;
@property (nonatomic, strong, readonly) UIPercentDrivenInteractiveTransition *interactivePopTransition;
@property (nonatomic, strong) UIView *snapshot;

/// Initialization method. This is the preferred way to create a new view.
///
/// viewModel - corresponding view model
///
/// Returns a new view.
- (instancetype)initWithViewModel:(MRCViewModel *)viewModel;

/// Binds the corresponding view model to the view.
- (void)bindViewModel;

@end
