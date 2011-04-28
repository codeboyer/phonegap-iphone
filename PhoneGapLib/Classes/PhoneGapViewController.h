/*
 * PhoneGap is available under *either* the terms of the modified BSD license *or* the
 * MIT License (2008). See http://opensource.org/licenses/alphabetical for full text.
 * 
 * Copyright (c) 2005-2010, Nitobi Software Inc.
 */


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface PhoneGapViewController : UIViewController {
    IBOutlet UIWebView *webView;
	NSArray* supportedOrientations;
    UIImageView* launchImage;
}

@property (nonatomic, retain) 	NSArray* supportedOrientations;
@property (nonatomic, retain)	UIWebView* webView;
@property (nonatomic, retain)   UIImageView* launchImage;

- (void)setDisplayLaunchImage: (UIInterfaceOrientation)orientation;

@end
