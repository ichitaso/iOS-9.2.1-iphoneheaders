/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
@class NSMutableDictionary;

@interface VoiceOverBluetoothManager : NSObject {

	BTLocalDeviceImplRef _localDevice;
	BTSessionImplRef _session;
	int _available;
	unsigned _authorizedServices;
	BOOL _audioConnected;
	BOOL _scanningEnabled;
	BTDiscoveryAgentImplRef _discoveryAgent;
	BTPairingAgentImplRef _pairingAgent;
	NSMutableDictionary* _btAddrDict;
	NSMutableDictionary* _btDeviceDict;

}

@property (assign,nonatomic) unsigned authorizedServices;              //@synthesize authorizedServices=_authorizedServices - In the implementation block
+(id)sharedInstance;
+(int)lastInitError;
-(unsigned)authorizedServicesForDevice:(id)arg1 ;
-(unsigned)authorizedServices;
-(void)setAuthorizedServices:(unsigned)arg1 ;
-(id)deviceForAddressString:(id)arg1 ;
-(BOOL)enabled;
-(void)dealloc;
-(id)init;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(BOOL)setEnabled:(BOOL)arg1 ;
-(void)postNotification:(id)arg1 ;
-(void)setDevicePairingEnabled:(BOOL)arg1 ;
-(void)setDeviceScanningEnabled:(BOOL)arg1 ;
-(void)resetDeviceScanning;
-(id)pairedDevices;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(void)cancelPairing;
-(void)connectDevice:(id)arg1 ;
-(void)connectDevice:(id)arg1 withServices:(unsigned)arg2 ;
-(void)setPincode:(id)arg1 forDevice:(id)arg2 ;
-(void)unpairDevice:(id)arg1 ;
-(BOOL)_attach:(id)arg1 ;
-(void)_cleanup:(BOOL)arg1 ;
-(void)_postNotificationWithArray:(id)arg1 ;
-(BOOL)devicePairingEnabled;
-(id)addDeviceIfNeeded:(BTDeviceImplRef)arg1 ;
-(BOOL)_onlySensorsConnected;
-(void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3 ;
-(BOOL)isAnyoneScanning;
-(BOOL)deviceScanningEnabled;
-(void)_restartScan;
-(void)_discoveryStateChanged;
-(BOOL)connectable;
-(void)_connectedStatusChanged;
-(void)_connectabilityChanged;
-(BOOL)audioConnected;
-(void)setAudioConnected:(BOOL)arg1 ;
-(BOOL)connected;
-(BOOL)available;
-(int)powerState;
-(void)_postNotification:(id)arg1 ;
-(BOOL)setPowered:(BOOL)arg1 ;
-(BOOL)powered;
-(BOOL)isDiscoverable;
-(void)_powerChanged;
-(BOOL)wasDeviceDiscovered:(id)arg1 ;
-(void)_removeDevice:(id)arg1 ;
-(id)connectingDevices;
-(void)acceptSSP:(int)arg1 forDevice:(id)arg2 ;
-(void)setConnectable:(BOOL)arg1 ;
-(BOOL)_setup:(BTSessionImplRef)arg1 ;
-(void)setDiscoverable:(BOOL)arg1 ;
@end
