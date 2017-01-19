//!
//  MRCTableViewModel.h
//  MVVMReactiveCocoa
//
//  Created by leichunfeng on 14/12/27.
//  Copyright (c) 2014年 leichunfeng. All rights reserved.
//

#import "MRCViewModel.h"

@interface MRCTableViewModel : MRCViewModel

/// The data source of table view.
@property (nonatomic, copy) NSArray *dataSource;

/// The list of section titles to display in section index view.
@property (nonatomic, copy) NSArray *sectionIndexTitles;

@property (nonatomic, assign) NSUInteger page;
@property (nonatomic, assign) NSUInteger perPage;
/// 下拉刷新
@property (nonatomic, assign) BOOL shouldPullToRefresh;
/// 上拉刷新
@property (nonatomic, assign) BOOL shouldInfiniteScrolling;

/// searchbar的代理方法中 根据输入改变keyword
@property (nonatomic, copy) NSString *keyword;

/// 选择cell
@property (nonatomic, strong) RACCommand *didSelectCommand;

/// 请求数据
@property (nonatomic, strong, readonly) RACCommand *requestRemoteDataCommand;

- (id)fetchLocalData;

- (BOOL (^)(NSError *error))requestRemoteDataErrorsFilter;

- (NSUInteger)offsetForPage:(NSUInteger)page;

/// return [RACSignal empty]; requestRemoteDataCommand执行会调用这个方法
- (RACSignal *)requestRemoteDataSignalWithPage:(NSUInteger)page;

@end
