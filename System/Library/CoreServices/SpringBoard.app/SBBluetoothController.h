/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SBBluetoothController : NSObject {

	NSMutableArray* _devices;
	BOOL _tetheringConnected;

}
+(id)sharedInstance;
-(void)updateBattery;
-(void)startWatchingForDevices;
-(BOOL)tetheringConnected;
-(void)stopWatchingForDevices;
-(id)firstBTDeviceToReportBatteryLevel;
-(void)iapDeviceChanged:(id)arg1 ;
-(void)connectionChanged:(id)arg1 ;
-(void)addDeviceNotification:(id)arg1 ;
-(void)removeDeviceNotification:(id)arg1 ;
-(void)batteryChanged:(id)arg1 ;
-(void)bluetoothDeviceInitiatedVoiceControl:(id)arg1 ;
-(void)bluetoothDeviceEndedVoiceControl:(id)arg1 ;
-(void)noteDevicesChanged;
-(void)updateTetheringConnected;
-(BOOL)canReportBatteryLevel;
-(id)deviceForAudioRoute:(id)arg1 ;
-(void)dealloc;
-(int)batteryLevel;
@end

