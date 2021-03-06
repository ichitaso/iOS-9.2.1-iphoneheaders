/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUProgress.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject;

@interface TSUProgressGroup : TSUProgress {

	NSArray* mChildren;
	NSArray* mChildrenProgressObservers;
	NSObject*<OS_dispatch_queue> mChildrenProgressObserversQueue;

}
-(void)dealloc;
-(double)value;
-(void)removeProgressObserver:(id)arg1 ;
-(BOOL)isIndeterminate;
-(double)maxValue;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)p_updateChildrenProgressObservers;
-(id)initWithChildren:(id)arg1 ;
@end

