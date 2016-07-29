/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/MusicSettings.bundle/MusicSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSNumber, UIView;

@interface VolumeLimitController : PSListController {

	NSNumber* _limit;
	UIView* _disabledView;

}
+(BOOL)volumeLimitLockedByEU;
+(BOOL)volumeLimitLocked;
+(BOOL)volumeLimitLockedByPIN;
+(BOOL)volumeLimitLockedByRestrictions;
-(void)updateLockedStateWithReload:(BOOL)arg1 ;
-(void)disableVolumeLimitLock;
-(void)applyVolumeLimit;
-(void)setVolumeLimit:(id)arg1 specifier:(id)arg2 ;
-(void)setVolumeLimitLock:(id)arg1 ;
-(id)volumeLimitEU:(id)arg1 ;
-(void)setVolumeLimitEU:(id)arg1 specifier:(id)arg2 ;
-(void)toggleLock:(id)arg1 ;
-(id)volumeLimit:(id)arg1 ;
-(id)specifiers;
@end
