/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, HKValueRange;

@interface HKGraphSeriesDataBlock : NSObject {

	NSArray* _chartPoints;
	HKValueRange* _yValueRange;

}

@property (nonatomic,copy) NSArray * chartPoints;                       //@synthesize chartPoints=_chartPoints - In the implementation block
@property (nonatomic,readonly) HKValueRange * yValueRange;              //@synthesize yValueRange=_yValueRange - In the implementation block
-(NSArray *)chartPoints;
-(void)setChartPoints:(NSArray *)arg1 ;
-(HKValueRange *)yValueRange;
@end
