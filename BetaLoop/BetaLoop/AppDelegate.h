//
//  AppDelegate.h
//  BetaLoop
//
//  Created by Chaitanya Rathi on 11/14/13.
//  Copyright (c) 2013 Tavant. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ViewController;
@class LoginViewController;
@class AppListingViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>



@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) AppListingViewController *appListingViewController;
@property (strong, nonatomic) LoginViewController * loginView;

@end
