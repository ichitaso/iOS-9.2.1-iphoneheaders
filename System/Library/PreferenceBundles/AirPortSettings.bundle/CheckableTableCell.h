/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class WiFiNetwork;

@interface CheckableTableCell : PSTableCell {

	WiFiNetwork* _network;

}

@property (nonatomic,retain) WiFiNetwork * network;              //@synthesize network=_network - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(WiFiNetwork *)network;
-(void)setNetwork:(WiFiNetwork *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
@end

