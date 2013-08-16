//
//  AppDelegate.h
//  JabberClient
//
//  Created by wufulin on 13-8-16.
//  Copyright (c) 2013年 netease. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XMPP.h"

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate> {
    NSString *password;
    BOOL isOpen;
    XMPPStream *xmppStream;
}

@property (readonly, nonatomic) XMPPStream *xmppStream;
@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) ViewController *viewController;

- (BOOL)connect;
- (void)disconnect;

@end
