//
//  ViewController.h
//  試し
//
//  Created by 加藤 周 on 2014/05/27.
//  Copyright (c) 2014年 mycompany. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Accounts/Accounts.h>
#import <Social/Social.h>
#import <AVFoundation/AVFoundation.h>
@interface ViewController : UIViewController{
    
    IBOutlet UISlider*slider;
    IBOutlet UIImageView*image;
    IBOutlet UIImageView*image1;
    IBOutlet UIImageView*yohaku;
    IBOutlet UIImageView*yohaku1;
    UIImageView*imag;
    float sl;
    IBOutlet UILabel*mozilabel;
    IBOutlet UIImageView *canvas;
    CGPoint touchPoint;
    UIImage*capure;
    UIImage*lineimage;
    int rgb;
        int c;
        UIImageView*tweetImageView;
    IBOutlet UIImageView*imageview;
    IBOutlet UIImageView*white21;
    IBOutlet UIImageView*white22;
    IBOutlet UIImageView*white23;
    int number1;
    int number2;
    int number3;
    int number4;
    int number5;
    int number6;
    IBOutlet UIImageView*back1;
    IBOutlet UIImageView*next1;
    IBOutlet UIImageView*imageview1;
    UIImage*uiimage;
    
    
    
    IBOutlet UIButton*face;
    IBOutlet UIButton*twitter;
    IBOutlet UIButton*LINE;
    IBOutlet UIButton*aback;
    IBOutlet UILabel*backhaikei;
    
    IBOutlet UIButton*red;
    IBOutlet UIButton*green;
    IBOutlet UIButton*blue;
    IBOutlet UIButton*yello;
    IBOutlet UIButton*black;
    IBOutlet UIButton*white;

    

    

}
- (void)postImageToLine:(NSString *)imageName imageType:(NSUInteger)imageType;
-(IBAction)red;
-(IBAction)green;
-(IBAction)blue;
-(IBAction)yellow;
-(IBAction)black;
-(IBAction)white;
-(IBAction)shou;
-(IBAction)dai;
-(IBAction)tweet;
-(IBAction)back;
-(IBAction)next;
@end
