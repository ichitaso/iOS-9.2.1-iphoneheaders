/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol ACXIDSSocketManagerDelegateProtocol, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;
@class NSObject, IDSService, ACXSocket, NSString;

@interface ACXIDSSocketManager : NSObject <IDSServiceDelegate> {

	int _socketInUseCount;
	BOOL _wiFiAsserted;
	id<ACXIDSSocketManagerDelegateProtocol> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _socketInUse;
	NSObject*<OS_dispatch_queue> _internalQueue;
	IDSService* _service;
	ACXSocket* _socket;
	NSObject*<OS_dispatch_source> _socketTeardownTimer;
	/*^block*/id _initiateCB;
	NSObject*<OS_dispatch_source> _socketSetupTimer;
	NSString* _currentSetupUUID;

}

@property (retain) id<ACXIDSSocketManagerDelegateProtocol> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_semaphore> socketInUse;                 //@synthesize socketInUse=_socketInUse - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> internalQueue;                   //@synthesize internalQueue=_internalQueue - In the implementation block
@property (readonly) IDSService * service;                                         //@synthesize service=_service - In the implementation block
@property (retain) ACXSocket * socket;                                             //@synthesize socket=_socket - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> socketTeardownTimer;              //@synthesize socketTeardownTimer=_socketTeardownTimer - In the implementation block
@property (copy) id initiateCB;                                                    //@synthesize initiateCB=_initiateCB - In the implementation block
@property (assign) BOOL wiFiAsserted;                                              //@synthesize wiFiAsserted=_wiFiAsserted - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> socketSetupTimer;                 //@synthesize socketSetupTimer=_socketSetupTimer - In the implementation block
@property (retain) NSString * currentSetupUUID;                                    //@synthesize currentSetupUUID=_currentSetupUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSocketManager;
-(void)setDelegate:(id<ACXIDSSocketManagerDelegateProtocol>)arg1 ;
-(id<ACXIDSSocketManagerDelegateProtocol>)delegate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSocket:(ACXSocket *)arg1 ;
-(ACXSocket *)socket;
-(IDSService *)service;
-(BOOL)wiFiAsserted;
-(void)setWiFiAsserted:(BOOL)arg1 ;
-(void)_waitForSocket;
-(void)_onInternalQueue_disarmSocketShutdownTimer;
-(void)_onInternalQueue_resetSocketBecauseOfError:(id)arg1 ;
-(void)_doneUsingSocket;
-(void)_onInternalQueue_beginUsingSocketAsDelegate:(id)arg1 onQueue:(id)arg2 tryWiFi:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_onInternalQueue_initiateConnectionWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_onInternalQueue_armSocketShutdownTimer;
-(BOOL)writeBytes:(const void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)writeDictionary:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)socketInUse;
-(NSObject*<OS_dispatch_source>)socketTeardownTimer;
-(void)setSocketTeardownTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setInitiateCB:(id)arg1 ;
-(void)setCurrentSetupUUID:(NSString *)arg1 ;
-(NSString *)currentSetupUUID;
-(void)_onQueue_startSocketSetupTimer;
-(id)_sendMessage:(id)arg1 messageDictionary:(id)arg2 error:(id*)arg3 ;
-(void)setSocketSetupTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)socketSetupTimer;
-(void)_onQueue_stopSocketSetupTimer;
-(id)initiateCB;
-(void)_readSourceReturnedDictionaryOrData:(id)arg1 error:(id)arg2 ;
-(void)handleIDSRelayConnection:(id)arg1 fromID:(id)arg2 UUID:(id)arg3 ;
-(void)handleIDSRelayConnectionResponse:(id)arg1 fromID:(id)arg2 UUID:(id)arg3 ;
-(void)beginUsingSocketAsDelegate:(id)arg1 onQueue:(id)arg2 tryWiFi:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)endUsingSocket;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)writeData:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
@end
