//
//  NavigationController.h
//  newsyc
//
//  Created by Grant Paul on 3/29/11.
//  Copyright 2011 Xuzz Productions, LLC. All rights reserved.
//

// An orange navigation controller.

@interface NavigationController : UINavigationController {
    BOOL needToShow;
    UIViewController *toShow;
}

@property(nonatomic, assign) BOOL needToShow;
@property(nonatomic, retain) UIViewController *toShow;

@end
