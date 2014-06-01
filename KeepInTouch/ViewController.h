//
//  ViewController.h
//  KeepInTouch
//
//  Created by Daniel Spokoyny on 6/1/14.
//  Copyright (c) 2014 Daniel Spokoyny. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>

@interface ViewController : UIViewController <ABPeoplePickerNavigationControllerDelegate>
@property (weak, nonatomic) IBOutlet UILabel *firstName;
@property (weak, nonatomic) IBOutlet UILabel *phoneNumber;
@property (weak, nonatomic) IBOutlet UILabel *frequencyLabel;
@property (weak, nonatomic) IBOutlet UITextField *frequencyText;
- (IBAction)showPicker:(id)sender;
- (IBAction)saveClicked:(id)sender;


@end
