/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@interface MCProfileInfoCell : PSTableCell
+(float)desiredRowHeight;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)_scriptingInfo;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setDisplayName:(id)arg1 organization:(id)arg2 ;
-(void)setIsNearExpiration:(BOOL)arg1 ;
@end
