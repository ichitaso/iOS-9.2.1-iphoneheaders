/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDate;

@interface ABLEBSMBatteryPrediction : NSObject <NSCoding> {

	NSDate* predictionDate;
	NSDate* occurrenceDate;
	double occurrenceBatteryLevel;
	double _batteryLevel;

}

@property (retain) NSDate * predictionDate; 
@property (retain) NSDate * occurrenceDate; 
@property (assign) double batteryLevel;                        //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (assign) double occurrenceBatteryLevel; 
-(void)setPredictionDate:(NSDate *)arg1 ;
-(NSDate *)predictionDate;
-(void)setOccurrenceDate:(NSDate *)arg1 ;
-(void)setOccurrenceBatteryLevel:(double)arg1 ;
-(void)initImplAtDate:(id)arg1 atLevel:(double)arg2 forDate:(id)arg3 forLevel:(double)arg4 ;
-(double)occurrenceBatteryLevel;
-(id)initAtLevel:(double)arg1 forDate:(id)arg2 forLevel:(double)arg3 ;
-(id)initAtDate:(id)arg1 atLevel:(double)arg2 forDate:(id)arg3 forLevel:(double)arg4 ;
-(void)setBatteryLevel:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)batteryLevel;
-(NSDate *)occurrenceDate;
@end
