//
//  MRCTableViewController.h
//  MVVMReactiveCocoa
//
//  Created by leichunfeng on 14/12/27.
//  Copyright (c) 2014年 leichunfeng. All rights reserved.
//

#import "MRCViewController.h"

/// 1.无数据显示处理
/// 2.tableView代理方法 根据VM的内容返回
/// 3.searchBar代理方法
/// 4.CBStoreHouseRefreshControl
@interface MRCTableViewController : MRCViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, DZNEmptyDataSetSource, DZNEmptyDataSetDelegate>

/// The table view for tableView controller.
@property (nonatomic, strong, readonly) UISearchBar *searchBar;
@property (nonatomic, weak, readonly) UITableView *tableView;
/// self.tableView.contentInset  = self.contentInset;
@property (nonatomic, assign, readonly) UIEdgeInsets contentInset;

/// 默认实现 刷新tableView
- (void)reloadData;

/// [tableView dequeueReusableCellWithIdentifier:identifier forIndexPath:indexPath];
- (UITableViewCell *)tableView:(UITableView *)tableView dequeueReusableCellWithIdentifier:(NSString *)identifier forIndexPath:(NSIndexPath *)indexPath;

/// 空实现
- (void)configureCell:(UITableViewCell *)cell atIndexPath:(NSIndexPath *)indexPath withObject:(id)object;

@end
