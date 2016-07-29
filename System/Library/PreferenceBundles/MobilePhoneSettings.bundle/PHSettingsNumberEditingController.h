/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobilePhoneSettings/MobilePhoneSettings-Structs.h>
#import <Preferences/PSListController.h>

@class NSString, PHSettingsNumberCell;

@interface PHSettingsNumberEditingController : PSListController {

	NSString* _previousStringSuggestionValue;
	PHSettingsNumberCell* cell;

}
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(SCD_Struct_Ph3)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(BOOL)shouldSelectResponderOnAppearance;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)specifiers;
@end
