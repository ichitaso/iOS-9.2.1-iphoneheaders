/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UITextView, NSString;

@interface _HKMedicalIDMultilineStringCell : UITableViewCell {

	UILabel* _titleLabel;
	UITextView* _textLabel;
	NSString* _stringValue;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
@end

