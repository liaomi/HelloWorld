//
//  AppDelegate.h
//  HelloWorld
//
//  Created by 小提莫 on 15-10-15.
//  Copyright __MyCompanyName__ 2015年. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
