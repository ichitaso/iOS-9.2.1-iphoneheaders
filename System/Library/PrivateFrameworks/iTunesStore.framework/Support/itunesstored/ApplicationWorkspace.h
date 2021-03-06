/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSLock, NSMutableDictionary, NSXPCConnection, NSMutableArray, NSCountedSet, ISOperationQueue;

@interface ApplicationWorkspace : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSLock* _lock;
	NSMutableDictionary* _odrProgress;
	NSXPCConnection* _odrXPCConnection;
	NSMutableArray* _operations;
	NSCountedSet* _pendingInstalls;
	ISOperationQueue* _placeholderIconOperationQueue;
	NSMutableDictionary* _waitBlocks;

}
+(id)defaultWorkspace;
-(void)applyWorkspaceChanges:(id)arg1 ;
-(id)sinfPathForBundleID:(id)arg1 ;
-(BOOL)isDownloadingOrInstallingForItemIdentifier:(id)arg1 ;
-(void)uninstallPlaceholderForDownloadIdentifier:(long long)arg1 bundleIdentifier:(id)arg2 ;
-(void)cancelOnDemandResourceDownloadsForDownloadIdentifier:(long long)arg1 bundleIdentifier:(id)arg2 ;
-(void)markFailedPlaceholder:(long long)arg1 bundleIdentifier:(id)arg2 ;
-(void)pauseOnDemandResourceDownloadsForDownloadIdentifier:(long long)arg1 bundleIdentifier:(id)arg2 ;
-(void)finishInstallOfDownloadIdentifier:(long long)arg1 bundleIdentifier:(id)arg2 ;
-(void)installPlaceholderForDownloadIdentifier:(long long)arg1 ;
-(void)updatePlaceholderForDownloadIdentifier:(long long)arg1 ;
-(BOOL)_hasThumbnailDownloadOperationForDownloadID:(long long)arg1 ;
-(void)_cancelPlaceholderThumbnailInstallForDownloadID:(long long)arg1 ;
-(void)_fireWaitBlocksIfNecessaryForDownloadWithIdentifier:(long long)arg1 ;
-(void)_removeODRProgressForDownloadIdentifier:(long long)arg1 ;
-(void)_removeOperationsForDownloadIdentifier:(long long)arg1 ;
-(void)_addOperationAtBeginning:(id)arg1 ;
-(void)_performNextOperation;
-(BOOL)_isInstallingForDownloadIdentifier:(long long)arg1 ;
-(void)_addProgressOperation:(id)arg1 ;
-(void)_addOnDemandOperationWithDownloadIdentifier:(long long)arg1 bundleIdentifier:(id)arg2 action:(long long)arg3 ;
-(void)_cleanupODR;
-(id)_odrXPCConnection;
-(void)_removeOperationsForDownloadIdentifier:(long long)arg1 operationClass:(Class)arg2 ;
-(id)_thumbnailDownloadOperationForDownloadID:(long long)arg1 ;
-(void)_observeODRProgress:(id)arg1 forDownloadIdentifier:(long long)arg2 ;
-(void)beginExternalInstallationForDownloadIdentifier:(long long)arg1 ;
-(void)addPlaceholderThumbnailOperation:(id)arg1 ;
-(void)endExternalInstallationForDownloadIdentifier:(long long)arg1 ;
-(void)restorePlaceholderForDownloadIdentifier:(long long)arg1 bundleIdentifier:(id)arg2 ;
-(void)replayIncompleteOperations;
-(void)setIconData:(id)arg1 forDownloadIdentifier:(long long)arg2 bundleIdentifier:(id)arg3 ;
-(void)updatePlaceholderWithApplicationProgress:(id)arg1 ;
-(void)waitForInstallOfDownloadIdentifier:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)downloadOnDemandResourceForDownloadIdentifier:(long long)arg1 bundleIdentifier:(id)arg2 ;
-(void)resumeOnDemandResourceDownloadsForDownloadIdentifier:(long long)arg1 bundleIdentifier:(id)arg2 ;
-(BOOL)shouldResumeOnDemandResourceDownloadsForDownloadIentifier:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

