/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSLinkDelegate.h>
#import <identityservicesd/IDSBTLinkManagerDelegate.h>
#import <identityservicesd/IDSWPLinkManagerDelegate.h>
#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@protocol OS_dispatch_source, IDSLinkDelegate;
@class NSMutableDictionary, NSDictionary, IDSBTLinkManager, IDSWPLinkManager, NSString, NSObject, IDSSockAddrWrapper;

@interface IDSLinkManager : NSObject <IDSLinkDelegate, IDSBTLinkManagerDelegate, IDSWPLinkManagerDelegate, IMSystemMonitorListener> {

	NSMutableDictionary* _deviceIDToLinks;
	NSMutableDictionary* _deviceIDToCurrentLink;
	NSDictionary* _deviceIDToUDPDestinations;
	IDSBTLinkManager* _btLinkManager;
	IDSWPLinkManager* _wpLinkManager;
	BOOL _isCentral;
	BOOL _mayBringUpWiFi;
	BOOL _isWiFiBroughtUp;
	BOOL _shouldBringWiFiDown;
	BOOL _shouldKeepWiFiUp;
	unsigned _handshakeCounter;
	unsigned _WiFiBringUpCounter;
	double _addressRetransmissionInterval;
	void* _wifiManager;
	void* _wifiDevice;
	BOOL _isWiFiAssociated;
	unsigned _WiFiAssociationCounter;
	double _rejectedPreferInfraWiFi;
	/*^block*/id _WiFiAssociationFailureHandler;
	long long _currentWiFiAutoJoinStatus;
	NSString* _currentWiFiSSID;
	id _WiFiPowerAssertion;
	double _WiFiAssociationStartTime;
	unsigned long long _totalBytesSent;
	unsigned long long _totalPacketsSent;
	unsigned long long _totalBytesReceived;
	unsigned long long _totalPacketsReceived;
	unsigned long long _totalPacketsDropped;
	unsigned long long _previousBytesSent;
	unsigned long long _previousPacketsSent;
	unsigned long long _previousBytesReceived;
	unsigned long long _previousPacketsReceived;
	unsigned long long _previousPacketsDropped;
	double _previousReportTime;
	char _reporterFile[32];
	int _reporterFd;
	BOOL _isInternalInstall;
	BOOL _demoMode;
	NSString* _fixedInterface;
	NSString* _fixedInterfaceDestination;
	BOOL _hasFixedDestination;
	NSObject*<OS_dispatch_source> _reporterTimer;
	SCDynamicStoreRef _dynamicStore;
	id<IDSLinkDelegate> _delegate;
	BOOL _doesDefaultDevicePreferInfraWiFi;
	BOOL _isDefaultDeviceUsingBTLink;
	BOOL _isDefaultDeviceNearby;
	BOOL _lastSentDefaultDeviceNearby;
	BOOL _lastSentDefaultDeviceConnectivity;
	BOOL _lastSentDefaultPeerConnectivity;
	BOOL _isDefaultDeviceOnPhoneCall;
	BOOL _hasDelayedNoConnectivityNotification;
	IDSSockAddrWrapper* _localWiFiAddressUsedForDefaultDevice;
	unsigned long long _currentDefaultDeviceLinkType;

}

@property (nonatomic,readonly) unsigned long long currentDefaultDeviceLinkType;              //@synthesize currentDefaultDeviceLinkType=_currentDefaultDeviceLinkType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyLinkStatsDict;
-(void)startUDPGlobalLinkForDevice:(id)arg1 ;
-(void)createConnectionDataForDevice:(id)arg1 localPartyID:(id)arg2 dataReadyHandler:(/*^block*/id)arg3 ;
-(void)startConnectionForDevice:(id)arg1 isInitiator:(BOOL)arg2 remotePartyID:(id)arg3 ;
-(void)stopUDPGlobalLinkForDevice:(id)arg1 ;
-(void)processRemoteConnectionDataForDevice:(id)arg1 remoteConnectionData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)sendPacketBuffer:(SCD_Struct_ID16*)arg1 toDeviceID:(id)arg2 ;
-(BOOL)link:(id)arg1 fromDeviceID:(id)arg2 didReceivePacket:(SCD_Struct_ID16*)arg3 ;
-(void)link:(id)arg1 didConnectForDevice:(id)arg2 ;
-(void)link:(id)arg1 didDisconnectForDevice:(id)arg2 ;
-(void)link:(id)arg1 hostAwakeDidChange:(BOOL)arg2 ;
-(void)link:(id)arg1 hasSpaceAvailable:(BOOL)arg2 deviceID:(id)arg3 ;
-(void)manager:(id)arg1 didPowerStateChange:(BOOL)arg2 ;
-(void)manager:(id)arg1 linkDidConnect:(id)arg2 ;
-(void)manager:(id)arg1 linkDidDisconnect:(id)arg2 ;
-(void)obliterateConnectionInfo;
-(void)_startNetworkInterfaceListener:(BOOL)arg1 ;
-(void)_startReporter;
-(void)_bringUpWiFi:(BOOL)arg1 ;
-(id)_newUDPLinkForDevice:(id)arg1 IPVersion:(unsigned long long)arg2 port:(unsigned short)arg3 ;
-(void)_setBestLinkToCurrent:(id)arg1 ;
-(void)_nearbyChangedForDefaultDevice;
-(id)generateLinkReport:(double)arg1 forceReport:(BOOL)arg2 ;
-(BOOL)_startUDPLinkHandshakeForDefaultDevice:(BOOL)arg1 immediately:(BOOL)arg2 ;
-(void)_connectivityChangedForDefaultDevice:(BOOL)arg1 ;
-(void)_suspendBTLink:(BOOL)arg1 deviceID:(id)arg2 ;
-(void)_sendUDPLinkInterfaceAddresses:(id)arg1 toDeviceID:(id)arg2 isRetransmission:(BOOL)arg3 isReply:(BOOL)arg4 ;
-(void)_clearWiFiAssociationPowerAssertion;
-(void)_createWiFiAssociationPowerAssertion:(double)arg1 ;
-(void)_subscribeToWRMForLinkRecommendation;
-(void)_unsubscribeFromWRMForLinkRecommendation;
-(unsigned long long)_getWRMLinkTypeFromIDSLinkType:(unsigned long long)arg1 ;
-(id)_selectBestLink:(id)arg1 ;
-(void)_processLinkChangeForDefaultDeviceFrom:(id)arg1 to:(id)arg2 ;
-(void)startLinkForDeviceID:(id)arg1 ;
-(void)_removeAllLinksForDeviceID:(id)arg1 ;
-(id)_newUDPGlobalLinkForDevice:(id)arg1 ;
-(id)_newQuickRelayLinkForDevice:(id)arg1 ;
-(id)_linkKeyForLink:(id)arg1 ;
-(void)_removeLinkForDeviceID:(id)arg1 linkKey:(id)arg2 verifyWithLink:(id)arg3 ;
-(void)_processLMCommandPacket:(SCD_Struct_ID16*)arg1 link:(id)arg2 fromDeviceID:(id)arg3 ;
-(void)stopLinkForDeviceID:(id)arg1 disconnectWP:(BOOL)arg2 ;
-(id)_getIDSLinkTypeString:(unsigned long long)arg1 ;
-(unsigned long long)_getIDSLinkTypeFromWRMLinkType:(unsigned long long)arg1 ;
-(void)_handleWRMLinkRecommendation:(unsigned long long)arg1 ;
-(void)_handleWiFiAutoJoinStatusChange:(long long)arg1 WiFiSSID:(id)arg2 ;
-(BOOL)isConnectedToDeviceID:(id)arg1 ;
-(void)startQuickRelayLinkForDevice:(id)arg1 ;
-(void)stopQuickRelayLinkForDevice:(id)arg1 ;
-(void)connectWithDevice:(id)arg1 sessionInfo:(id)arg2 connectReadyHandler:(/*^block*/id)arg3 ;
-(void)disconnectWithDevice:(id)arg1 ;
-(void)setIsOnPhoneCall:(BOOL)arg1 forDeviceID:(id)arg2 ;
-(void)_handleNetworkChanges:(id)arg1 ;
-(unsigned long long)currentDefaultDeviceLinkType;
-(void)dealloc;
-(void)start;
-(id)initWithDelegate:(id)arg1 ;
-(void)startLocalSetup;
-(void)addPairedDevice:(id)arg1 ;
-(void)connectPairedDevice:(id)arg1 ;
-(void)deletePairedDevice:(id)arg1 ;
-(void)setPreferInfraWiFi:(BOOL)arg1 ;
-(void)setLinkPreferences:(id)arg1 ;
@end

