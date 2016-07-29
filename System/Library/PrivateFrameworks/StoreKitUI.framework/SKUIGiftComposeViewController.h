/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIGiftStepViewController.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol OS_dispatch_source;
@class SKUIGiftAddressingSection, SKUIGiftAmountSection, UIDatePicker, UIImage, SKUIGiftItemView, SKUIGiftValidationResponse, UIView, NSMutableArray, SKUIGiftSendDateSection, NSIndexPath, UITableView, SKUIGiftTermsAndConditionsSection, NSObject, SKUIGiftValidator, UIPopoverController, NSString;

@interface SKUIGiftComposeViewController : SKUIGiftStepViewController <UIPopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {

	SKUIGiftAddressingSection* _addressingSection;
	SKUIGiftAmountSection* _amountSection;
	UIDatePicker* _datePicker;
	UIImage* _itemImage;
	SKUIGiftItemView* _itemView;
	SKUIGiftValidationResponse* _lastValidationResponse;
	UIView* _searchResultsView;
	NSMutableArray* _sections;
	SKUIGiftSendDateSection* _sendDateSection;
	NSIndexPath* _showDatePickerIndexPathAfterKeyboardDismiss;
	UITableView* _tableView;
	BOOL _tappedNextWhileValidating;
	SKUIGiftTermsAndConditionsSection* _termsSection;
	NSObject*<OS_dispatch_source> _validationTimer;
	SKUIGiftValidator* _validator;
	UIPopoverController* _datePickerPopover;
	UIPopoverController* _peoplePickerPopover;
	UIPopoverController* _searchResultsPopover;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(id)_headerView;
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(void)_keyboardChangeNotification:(id)arg1 ;
-(void)_recipientsDidChangeNotification:(id)arg1 ;
-(void)_textFieldChangeNotification:(id)arg1 ;
-(void)_textViewChangeNotification:(id)arg1 ;
-(void)_textViewDidEndEditingNotification:(id)arg1 ;
-(void)_reloadSections;
-(void)_nextAction:(id)arg1 ;
-(id)_itemView;
-(void)_setItemImage:(id)arg1 error:(id)arg2 ;
-(void)_validateGiftThrottled:(BOOL)arg1 ;
-(void)_removeDatePickerIfPossible;
-(void)_showDatePickerForRowAtIndexPath:(id)arg1 ;
-(void)_pushThemePickerOrShowInvalidAlert;
-(void)_validateGift;
-(id)_itemImage;
-(void)_amountControlAction:(id)arg1 ;
-(void)_datePickerAction:(id)arg1 ;
-(void)_showDatePickerPopoverForRowAtIndexPath:(id)arg1 ;
-(void)_finishValidationWithResponse:(id)arg1 error:(id)arg2 ;
-(void)tableView:(id)arg1 giftRecipientCellDidChangeRecipients:(id)arg2 ;
-(void)tableView:(id)arg1 giftRecipientCellDidChangeSize:(id)arg2 ;
-(void)tableView:(id)arg1 giftRecipientCell:(id)arg2 didUpdateSearchController:(id)arg3 ;
-(void)tableView:(id)arg1 giftRecipientCell:(id)arg2 dismissPeoplePicker:(id)arg3 ;
-(void)tableView:(id)arg1 giftRecipientCell:(id)arg2 presentPeoplePicker:(id)arg3 ;
-(void)_cancelAction:(id)arg1 ;
@end
