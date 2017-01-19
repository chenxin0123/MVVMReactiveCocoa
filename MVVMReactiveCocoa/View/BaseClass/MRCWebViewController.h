//!
//  MRCWebViewController.h
//  MVVMReactiveCocoa
//
//  Created by leichunfeng on 15/1/24.
//  Copyright (c) 2015年 leichunfeng. All rights reserved.
//

#import "MRCViewController.h"

/// scheme http or https open in webView, otherwise call openURL:
@interface MRCWebViewController : MRCViewController <UIWebViewDelegate>

@property (nonatomic, weak, readonly) UIWebView *webView;

@end
