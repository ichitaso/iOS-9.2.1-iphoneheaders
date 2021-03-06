/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPUI/CDPTableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol CDPDevicePickerDelegate;
@class NSArray, UIButton, NSString;

@interface CDPDevicePickerViewController : CDPTableViewController <UITableViewDataSource, UITableViewDelegate> {

	NSArray* _devices;
	id<CDPDevicePickerDelegate> _delegate;
	UIButton* _remoteApprovalButton;
	BOOL _shouldOfferRemoteApproval;

}

@property (assign,nonatomic) BOOL shouldOfferRemoteApproval;              //@synthesize shouldOfferRemoteApproval=_shouldOfferRemoteApproval - In the implementation block
@property (nonatomic,copy) NSArray * devices;                             //@synthesize devices=_devices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDevices:(NSArray *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)loadView;
-(id)initWithDevices:(id)arg1 delegate:(id)arg2 ;
-(void)setShouldOfferRemoteApproval:(BOOL)arg1 ;
-(void)approveFromAnotherDeviceTapped:(id)arg1 ;
-(BOOL)shouldOfferRemoteApproval;
-(NSArray *)devices;
@end

