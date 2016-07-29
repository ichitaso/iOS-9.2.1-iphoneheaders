/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreTime.framework/TimeSources/LinkSource.bundle/LinkSource
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol TMMonotonicClock, OS_dispatch_queue, TMLSTransportDelegate;
@class IDSService, NSObject, NSString;

@interface TMLSTransport : NSObject <IDSServiceDelegate> {

	id<TMMonotonicClock> _clock;
	IDSService* _idsService;
	NSObject*<OS_dispatch_queue> _queue;
	id<TMLSTransportDelegate> _delegate;

}

@property (nonatomic,retain) id<TMMonotonicClock> clock;                      //@synthesize clock=_clock - In the implementation block
@property (nonatomic,retain) IDSService * idsService;                         //@synthesize idsService=_idsService - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) id<TMLSTransportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 clock:(id)arg2 ;
-(void)sendData:(id)arg1 localOnly:(BOOL)arg2 nonWaking:(BOOL)arg3 queueOne:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)setDelegate:(id<TMLSTransportDelegate>)arg1 ;
-(void)dealloc;
-(id<TMLSTransportDelegate>)delegate;
-(id<TMMonotonicClock>)clock;
-(void)setClock:(id<TMMonotonicClock>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(IDSService *)idsService;
-(void)setIdsService:(IDSService *)arg1 ;
@end
