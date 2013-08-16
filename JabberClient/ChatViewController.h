//
//  ChatViewController.h
//  JabberClient
//
//  Created by wufulin on 13-8-16.
//  Copyright (c) 2013年 netease. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ChatViewController : UIViewController {
    __weak UITextField *messageField;
    __weak UITableView *tView;
    __weak NSString *charWithUser;
    NSMutableArray *messages;
}

@property (weak, nonatomic) IBOutlet UITextField *messageField;
@property (weak, nonatomic) IBOutlet UITableView *tView;
@property (weak, nonatomic) NSString *charWithUser;

- (IBAction)closeChat:(id)sender;
- (IBAction)sendMessage:(id)sender;
- (id)initWithUser:(NSString *)userName;

@end
