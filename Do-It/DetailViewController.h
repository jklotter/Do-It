//
//  DetailViewController.h
//  Do-It
//
//  Created by Dan Brajkovic on 1/27/14.
//  Copyright (c) 2014 Dan Brajkovic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
