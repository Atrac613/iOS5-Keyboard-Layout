//
//  MasterViewController.h
//  KeyBoardTest
//
//  Created by Osamu Noguchi on 10/15/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UIViewController {
    IBOutlet UITextView *textView;
    IBOutlet UIToolbar *toolBar;
}

@property (nonatomic, retain) IBOutlet UITextView *textView;
@property (nonatomic, retain) IBOutlet UIToolbar *toolBar;

- (void)keyboardChanged:(NSNotification*)notification;

@end
