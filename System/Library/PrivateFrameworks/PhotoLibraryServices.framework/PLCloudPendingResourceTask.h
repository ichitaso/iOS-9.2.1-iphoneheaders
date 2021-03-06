/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPLResourceTransferTask, NSMutableDictionary, NSDate;

@interface PLCloudPendingResourceTask : NSObject {

	CPLResourceTransferTask* _transferTask;
	NSMutableDictionary* _pendingTasks;
	NSDate* _lastUpdated;
	BOOL _completed;

}
-(void)dealloc;
-(id)lastUpdated;
-(void)setTransferTask:(id)arg1 ;
-(id)initWithProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 forTaskIdentifier:(id)arg3 ;
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(id)addProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)taskIDs;
-(void)reportCompletionWithError:(id)arg1 ;
-(void)keepAlive;
-(void)cancelAllTask;
-(void)reportProgress:(float)arg1 ;
@end

