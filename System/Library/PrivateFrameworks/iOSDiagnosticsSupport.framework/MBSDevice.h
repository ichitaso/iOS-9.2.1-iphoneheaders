/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iOSDiagnosticsSupport.framework/iOSDiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSData, NSString;

@interface MBSDevice : NSObject {

	NSMutableDictionary* _deviceInfoDictionary;
	NSData* _logData;
	NSString* _logFileName;

}

@property (retain) NSMutableDictionary * deviceInfoDictionary;              //@synthesize deviceInfoDictionary=_deviceInfoDictionary - In the implementation block
@property (retain) NSData * logData;                                        //@synthesize logData=_logData - In the implementation block
@property (retain) NSString * logFileName;                                  //@synthesize logFileName=_logFileName - In the implementation block
-(void)dealloc;
-(NSMutableDictionary *)deviceInfoDictionary;
-(id)collectBasicDeviceData;
-(id)collectGasGaugeData;
-(id)collectAggdData;
-(void)setDeviceInfoDictionary:(NSMutableDictionary *)arg1 ;
-(BOOL)deviceHasStockholmChip;
-(id)getMaxMinAvgCapacityOfPowerLog;
-(BOOL)createTempDirectory:(unsigned long long)arg1 ;
-(BOOL)copyLogsToTempDirectory:(unsigned long long)arg1 ;
-(void)setLogFileName:(NSString *)arg1 ;
-(NSString *)logFileName;
-(void)setLogData:(NSData *)arg1 ;
-(BOOL)archiveLogFile:(id)arg1 toFile:(id)arg2 atDir:(id)arg3 ;
-(BOOL)copyPowerLogsToDir:(id)arg1 ;
-(BOOL)collectAllDeviceInformation;
-(BOOL)collectLogs:(unsigned long long)arg1 ;
-(NSData *)logData;
@end
