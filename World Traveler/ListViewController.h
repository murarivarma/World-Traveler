//
//  ListViewController.h
//  World Traveler
//
//  Created by Murari Varma on 26/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ListViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITableView *tableView;

- (IBAction)refreshBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
