/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PerformanceAnalysis/PACountedFrame.h>

@class PASampleFrame;

@interface PACountedSampleFrame : PACountedFrame {

	PASampleFrame* _sampleFrame;

}

@property (readonly) PASampleFrame * sampleFrame;              //@synthesize sampleFrame=_sampleFrame - In the implementation block
-(void)dealloc;
-(id)debugDescription;
-(PASampleFrame *)sampleFrame;
-(id)initWithSampleFrame:(id)arg1 ;
@end

