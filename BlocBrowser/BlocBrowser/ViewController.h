//
//  ViewController.h
//  BlocBrowser
//
//  Created by YooJin Hong on 11/15/15.
//  Copyright © 2015 YooJin Hong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

/**
 Replaces the web view with a fresh one, erasing all history. Also updates the URL field and toolbar buttons appropriately.
 */

- (void) resetWebView;


@end

