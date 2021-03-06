/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIColor;

@interface UIScrubberTimeView : UIView {

	NSString* _time;
	UIColor* _timeColor;
	UIColor* _timeShadowColor;
	unsigned _align : 2;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setTimeColor:(id)arg1 ;
-(void)setTimeShadowColor:(id)arg1 ;
-(void)setTime:(id)arg1 ;
-(id)time;
@end

