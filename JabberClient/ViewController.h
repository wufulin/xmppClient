//
//  ViewController.h
//  JabberClient
//
//  Created by wufulin on 13-8-16.
//  Copyright (c) 2013年 netease. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDataSource,UITableViewDelegate> {
    __weak UITableView *tableView;
    NSMutableArray *onlineBuddies;
}

@property (weak, nonatomic) IBOutlet UITableView *tableView;
- (IBAction)showLogin:(id)sender;

@end
