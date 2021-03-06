/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/Phone.siriUIBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Phone/Phone-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface SiriPhoneEmergencyCallView : UIView {

	NSString* _countdownText;
	UILabel* _countdownLabel;

}

@property (nonatomic,copy) NSString * countdownText;                  //@synthesize countdownText=_countdownText - In the implementation block
@property (nonatomic,readonly) UILabel * countdownLabel;              //@synthesize countdownLabel=_countdownLabel - In the implementation block
-(void)setCountdownText:(NSString *)arg1 ;
-(NSString *)countdownText;
-(UILabel *)countdownLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

