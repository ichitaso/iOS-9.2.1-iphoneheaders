/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface DADownloadContext : NSObject {

	NSString* _attachmentUUID;
	NSString* _accountID;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;

}

@property (nonatomic,readonly) NSString * attachmentUUID;                       //@synthesize attachmentUUID=_attachmentUUID - In the implementation block
@property (nonatomic,readonly) NSString * accountID;                            //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) id progressBlock;                           //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;                         //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)completionBlock;
-(id)initWithAttachmentUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 downloadProgressBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)updateProgressDownloadedByteCount:(long long)arg1 totalByteCount:(long long)arg2 ;
-(void)finishedWithError:(id)arg1 ;
-(id)progressBlock;
-(NSString *)attachmentUUID;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)accountID;
@end

