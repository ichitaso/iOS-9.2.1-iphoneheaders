/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:21:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/MobileCal.axbundle/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class UIView;

@interface WeekAllDayLabelAccessibilityElement : UIAccessibilityElement {

	unsigned long long _dayIndex;
	UIView* _allDayView;

}

@property (assign,nonatomic) unsigned long long dayIndex;              //@synthesize dayIndex=_dayIndex - In the implementation block
@property (assign,nonatomic) UIView * allDayView;                      //@synthesize allDayView=_allDayView - In the implementation block
-(void)setAllDayView:(UIView *)arg1 ;
-(unsigned long long)dayIndex;
-(void)setDayIndex:(unsigned long long)arg1 ;
-(CGRect)accessibilityFrame;
-(UIView *)allDayView;
@end

