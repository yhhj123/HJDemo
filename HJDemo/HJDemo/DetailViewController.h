//
//  DetailViewController.h
//  HJDemo
//
//  Created by 黄浚 on 15/12/14.
//  Copyright © 2015年 黄浚. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

