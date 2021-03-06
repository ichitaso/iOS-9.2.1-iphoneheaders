/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBridgeBaseController.h>

@interface TripleClickController : AccessibilityBridgeBaseController
-(id)enabledTripleClickSettings;
-(int)_optionFromSpecifierKey:(id)arg1 ;
-(void)_saveTripleClickOption:(int)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
@end

