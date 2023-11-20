//
//  ViewController.h
//  zadanie6
//
//  Created by student on 20/11/2023.
//  Copyright © 2023 com.pb.wi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, weak) IBOutlet UIButton *informationButton;
- (IBAction)informationButtonTapped:(id)sender;

@property (nonatomic, weak) IBOutlet UIImageView *image;

@end

