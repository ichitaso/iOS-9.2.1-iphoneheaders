/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/TwitterSettings.bundle/TwitterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class ACAccount, PSTextFieldSpecifier, PSSpecifier, NSDictionary;

@interface SLTwitterAccountEditController : ACUIViewController {

	ACAccount* _account;
	BOOL _isAccountDirty;
	PSTextFieldSpecifier* _fullNameSpecifier;
	PSSpecifier* _findByEmailSpecifier;
	BOOL _didAttemptNameUpdate;
	NSDictionary* _userSettings;
	BOOL _shouldPushSettingsToServer;

}
-(void)_deleteButtonTapped:(id)arg1 ;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(void)_pushSettingsToServerIfNeeded;
-(id)_findByEmailSpecifiers;
-(void)_pushSettingsToServer;
-(void)_saveAccountChangesIfNecessary;
-(id)_descriptionSpecifier;
-(id)_findByEmailWithSpecifier:(id)arg1 ;
-(void)_setFindByEmail:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_fullNameWithSpecifier:(id)arg1 ;
-(void)_processUserSettings:(id)arg1 ;
-(id)_displayNameWithSpecifier:(id)arg1 ;
-(void)_handleSaveCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 wasVerifying:(BOOL)arg3 ;
-(void)_confirmDeleteAccount;
-(void)_setDisplayName:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_fetchUserSettings;
-(void)_updateFullNameIfNecessary;
-(id)_userNameSpecifier;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(id)_fullNameSpecifier;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)specifiers;
-(id)_passwordSpecifier;
@end

