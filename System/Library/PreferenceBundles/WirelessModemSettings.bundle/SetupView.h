/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSMutableArray, UIImageView;

@interface SetupView : UIView {

	UILabel* _title;
	NSMutableArray* _setupSteps;
	UIImageView* _icon;
	long long _layoutDirection;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)title;
-(void)setIcon:(id)arg1 ;
-(id)icon;
-(void)addStep:(id)arg1 ;
-(id)_preferenceLabelWithText:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 shouldSetSize:(BOOL)arg2 ;
@end
