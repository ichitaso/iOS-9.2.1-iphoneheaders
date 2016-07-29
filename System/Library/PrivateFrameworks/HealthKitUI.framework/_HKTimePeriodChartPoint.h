/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class NSDate, NSNumber, NSString;

@interface _HKTimePeriodChartPoint : NSObject <HKChartPoint> {

	NSDate* _xValue;
	NSNumber* _yValue;
	id _userInfo;

}

@property (nonatomic,retain) NSDate * xValue;                       //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,retain) NSNumber * yValue;                     //@synthesize yValue=_yValue - In the implementation block
@property (nonatomic,retain) id userInfo;                           //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(NSNumber *)yValue;
-(id)minYValue;
-(id)maxYValue;
-(NSDate *)xValue;
-(id)allYValues;
-(id)yValueForKey:(id)arg1 ;
-(void)setYValue:(NSNumber *)arg1 ;
-(void)setXValue:(NSDate *)arg1 ;
@end
