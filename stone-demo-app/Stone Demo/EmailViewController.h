//
//  EmailViewController.h
//  Stone Demo
//
//  Created by Erika Bueno on 11/30/15.
//  Copyright © 2015 Stone. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StoneSDK/StoneSDK.h"

@interface EmailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

-(void)showErrorMessage: (NSString*) error;

@property (weak, nonatomic) IBOutlet UITableView *sendEmailTableView;
@property(strong,nonatomic) NSArray *transactions;
@property(strong,nonatomic) NSArray *data;

@end