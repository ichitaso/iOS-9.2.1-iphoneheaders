/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, NSMutableDictionary, NSMutableArray;

@interface MPClusterSlide : NSObject <NSCopying> {

	NSDate* mCaptureDate;
	NSString* mPath;
	long long mReferenceCounter;
	NSMutableDictionary* mUsageCounterPerLayer;
	NSMutableArray* mUsableSlideClusters;
	long long mIndex;

}

@property (copy) NSDate * captureDate; 
@property (copy) NSString * path; 
@property (assign) long long referenceCounter; 
@property (assign) long long index; 
@property (retain) NSMutableDictionary * usageCounterPerLayer; 
@property (retain) NSMutableArray * usableSlideClusters; 
-(long long)overallUsageCounter;
-(void)setUsableSlideClusters:(NSMutableArray *)arg1 ;
-(void)setUsageCounterForLayer:(id)arg1 to:(long long)arg2 ;
-(void)resetAllUsageCounters;
-(id)usageCountDescription;
-(NSMutableArray *)usableSlideClusters;
-(void)setUsageCounterPerLayer:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)usageCounterPerLayer;
-(long long)usageCounterForLayer:(id)arg1 ;
-(void)increaseUsageCounterForLayer:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)index;
-(void)setPath:(NSString *)arg1 ;
-(void)setIndex:(long long)arg1 ;
-(void)setCaptureDate:(NSDate *)arg1 ;
-(NSDate *)captureDate;
-(long long)referenceCounter;
-(void)setReferenceCounter:(long long)arg1 ;
@end

