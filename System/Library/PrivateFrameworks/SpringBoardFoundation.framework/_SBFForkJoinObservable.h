/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFObservable.h>

@class NSArray, NSMutableArray;

@interface _SBFForkJoinObservable : SBFObservable {

	NSArray* _observables;
	NSMutableArray* _results;
	unsigned long long _uncompletedObservableCount;

}
-(void)dealloc;
-(id)subscribe:(id)arg1 ;
-(void)_setResult:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_observableFinishedForObserver:(id)arg1 ;
-(id)initWithWithObservables:(id)arg1 ;
@end
