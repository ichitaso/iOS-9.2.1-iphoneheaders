/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GameKitServices/GameKitServices-Structs.h>
@class GKSessionInternal, NSString, GKVoiceChatSessionInternal, NSObject, NSMutableArray, NSMutableDictionary;

@interface VoiceChatSessionRoster : NSObject {

	GKSessionInternal* _gkSession;
	NSString* _peerID;
	GKVoiceChatSessionInternal* _gkvs;
	NSObject*<OS_dispatch_queue> _sendQueue;
	NSMutableArray* _connectedPeers;
	NSMutableDictionary* _peerStateTable;
	opaque_pthread_mutex_t resMutex;
	BOOL _needsUpdateBeaconList;
	BOOL _waitingToCalculateFocus;
	unsigned _deviceRating;
	unsigned _focusRating;
	unsigned _chosenFocusRating;
	unsigned _focusID;
	BOOL _isBeaconUp;
	BOOL _hasFocus;

}
-(BOOL)hasFocus;
-(void)dealloc;
-(void)cleanup;
-(id)initWithGKSession:(id)arg1 peerID:(id)arg2 voiceChatSession:(id)arg3 sendQueue:(id)arg4 ;
-(void)startBeaconWrapper:(id)arg1 ;
-(unsigned)focusID;
-(id)subscribedPeers;
-(void)stopBeacon;
-(void)peer:(id)arg1 didChangeState:(int)arg2 ;
-(void)receivedBeacon:(id)arg1 fromPeer:(id)arg2 ;
-(BOOL)recalculateFocusRating;
-(void)updateBeacon;
-(void)configureDeviceRating;
-(void)startBeacon;
-(void)sendBeacons;
-(void)calculateFocus:(id)arg1 ;
-(void)sendBeacon:(tagVoiceChatBeacon*)arg1 ToPeer:(id)arg2 ;
-(void)processSubscribeBeacon:(tagVoiceChatBeacon*)arg1 beaconState:(id)arg2 fromPeer:(id)arg3 ;
-(void)processUnsubscribeBeacon:(tagVoiceChatBeacon*)arg1 beaconState:(id)arg2 fromPeer:(id)arg3 ;
@end
