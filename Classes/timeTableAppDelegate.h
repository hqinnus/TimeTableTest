//
//  timeTableAppDelegate.h
//  timeTable
//
//  Created by HQ on 6/28/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class timeTableViewController;

@interface timeTableAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    timeTableViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet timeTableViewController *viewController;

@end

