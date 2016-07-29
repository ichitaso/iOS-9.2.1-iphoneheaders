/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, MFMailMessageLibrary, SGSuggestionsService, NSCache, NSMutableArray;

@interface MFSuggestionsDataProvider : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _suggestionsQueue;
	MFMailMessageLibrary* _library;
	SGSuggestionsService* _harvesterService;
	NSCache* _mailboxCache;
	NSObject*<OS_dispatch_semaphore> _scheduledDownloadSemaphore;
	NSMutableArray* _scheduledDownloadClients;
	BOOL _suspended;
	int _fullDownloadToken;

}
+(BOOL)isHarvestingSupported;
-(void)resumeFullDownloadProcessing;
-(void)refreshLostMessagesUntilDeferred:(/*^block*/id)arg1 ;
-(void)_libraryFinishedReconciliation:(id)arg1 ;
-(void)_libraryWillBecomeUnavailable:(id)arg1 ;
-(void)_registerXpcActivity;
-(void)_scheduleBackgroundDownload;
-(void)_processBackgroundDownload;
-(id)_libraryMessagesForSGMailMessageKeys:(id)arg1 ;
-(void)_unregisterXpcActivity;
-(id)_mailboxForMessageLikeObject:(id)arg1 ;
-(id)_messageFromMessageInfo:(id)arg1 ;
-(void)dealloc;
-(void)suspend;
-(void)resume;
-(id)initWithLibrary:(id)arg1 ;
-(void)setTargetQueue:(id)arg1 ;
-(BOOL)_protectedDataAvailable;
@end
