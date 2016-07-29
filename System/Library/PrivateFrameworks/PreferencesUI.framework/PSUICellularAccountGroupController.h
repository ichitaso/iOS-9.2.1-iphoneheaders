/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSSpecifierGroupController.h>
#import <libobjc.A.dylib/PSUICellularAccountDetailDelegate.h>

@class PSListController, PSSpecifier, NSString;

@interface PSUICellularAccountGroupController : NSObject <PSSpecifierGroupController, PSUICellularAccountDetailDelegate> {

	PSListController* _listController;
	PSSpecifier* _groupSpecifier;

}

@property (assign,nonatomic,__weak) PSListController * listController;              //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * groupSpecifier;                   //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldShowAccountSpecificUsage;
-(PSSpecifier *)groupSpecifier;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(PSListController *)listController;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(id)usageSpecifiers;
-(id)lastUpdatedText;
-(void)openDataActivationURLForSelectedAccount;
-(void)otherButtonPressed:(id)arg1 ;
-(id)getPlanName:(id)arg1 ;
-(id)getCarrierName:(id)arg1 ;
-(id)getPlanStatus:(id)arg1 ;
-(id)getPlanStatusDataOnly:(id)arg1 ;
-(id)getPlanStatusDate:(id)arg1 ;
-(id)getPlanPurchaseDate:(id)arg1 ;
-(id)getPlanExpireDate:(id)arg1 ;
-(void)managePlanPressed:(id)arg1 ;
-(void)setupAccountPressed:(id)arg1 ;
-(void)openDataRoamingOptions;
-(id)getPlanDetailedStatus:(id)arg1 ;
-(id)getPlanICCID:(id)arg1 ;
-(void)setListController:(PSListController *)arg1 ;
-(id)specifiers;
@end
