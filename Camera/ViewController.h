//
//  ViewController.h
//  Camera
//
//  Created by Graeme Littlewood on 18/11/2013.
//  Copyright (c) 2013 Graeme Littlewood. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *imageView;

- (IBAction)tappedTakePhoto:(id)sender;
- (IBAction)tappedSelectPhoto:(id)sender;
    
@end
