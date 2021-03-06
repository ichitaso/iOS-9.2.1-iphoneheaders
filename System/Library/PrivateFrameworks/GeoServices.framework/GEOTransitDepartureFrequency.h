/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol GEOTransitDepartureFrequency <NSObject>
@property (nonatomic,readonly) NSDate * firstTimeInFrequency; 
@property (nonatomic,readonly) NSDate * lastTimeInFrequency; 
@property (nonatomic,readonly) double frequencyForSorting; 
@property (nonatomic,readonly) long long frequencyType; 
@property (nonatomic,readonly) BOOL isEstimate; 
@property (nonatomic,readonly) long long displayFrequency; 
@property (nonatomic,readonly) long long minFrequency; 
@property (nonatomic,readonly) long long maxFrequency; 
@required
-(BOOL)isValidAtDate:(id)arg1;
-(long long)frequencyType;
-(long long)maxFrequency;
-(NSDate *)lastTimeInFrequency;
-(NSDate *)firstTimeInFrequency;
-(long long)minFrequency;
-(double)frequencyForSorting;
-(BOOL)isEstimate;
-(long long)displayFrequency;

@end

