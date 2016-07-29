/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HKAbstractMinimumRangeScalingRule.h>

@class HKQuantity, NSDictionary, HKUnit;

@interface HKQuantityMinimumRangeScalingRule : HKAbstractMinimumRangeScalingRule {

	HKQuantity* _defaultYAxisRangeQuantity;
	NSDictionary* _axisRangeQuantityOverrides;
	HKUnit* _unit;

}

@property (nonatomic,retain) HKUnit * unit;              //@synthesize unit=_unit - In the implementation block
+(id)ruleWithDefaultYAxisRange:(id)arg1 axisRangeOverrides:(id)arg2 ;
-(BOOL)isCompatibleWithQuantityType:(id)arg1 ;
-(void)_convertQuantities;
-(HKUnit *)unit;
-(void)setUnit:(HKUnit *)arg1 ;
@end
