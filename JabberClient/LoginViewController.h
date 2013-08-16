//
//  LoginViewController.h
//  JabberClient
//
//  Created by wufulin on 13-8-16.
//  Copyright (c) 2013年 netease. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController {
    __weak UITextField *loginField;
    __weak UITextField *passwordField;
}

@property (weak, nonatomic) IBOutlet UITextField *loginField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
- (IBAction)hideLogin:(id)sender;
- (IBAction)login:(id)sender;

@end
