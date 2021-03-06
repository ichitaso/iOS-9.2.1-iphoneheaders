/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _HKDataCollectorDelayedOperation : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	int _pendingRunCount;
	double _lastExecution;

}
-(void)invalidate;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)executeWithDelay:(double)arg1 ;
@end

