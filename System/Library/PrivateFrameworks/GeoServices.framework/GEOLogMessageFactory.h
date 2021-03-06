/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOAppConfig, GEODeviceConfig, NSLock;

@interface GEOLogMessageFactory : NSObject {

	GEOAppConfig* _appConfig;
	GEODeviceConfig* _deviceConfig;
	unsigned long long _shortSessionUsageLogMessageCount;
	unsigned long long _debugLogMessageCount;
	NSLock* _lock;

}

@property (nonatomic,readonly) GEOAppConfig * appConfig;                    //@synthesize appConfig=_appConfig - In the implementation block
@property (nonatomic,readonly) GEODeviceConfig * deviceConfig;              //@synthesize deviceConfig=_deviceConfig - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(GEOAppConfig *)appConfig;
-(GEODeviceConfig *)deviceConfig;
-(void)_populateAppAndDeviceConfigInLogMessage:(id)arg1 ;
-(void)_populateAppConfig;
-(void)_populateDeviceConfig;
-(BOOL)_shouldVendoutDeviceAndAppConfigForLogMessageType:(int)arg1 logMessageCount:(unsigned long long)arg2 ;
-(id)logMessageForUserAction:(id)arg1 eventValue:(id)arg2 traits:(id)arg3 placeActionDetails:(id)arg4 routeDetails:(id)arg5 serverMetadata:(id)arg6 uiTarget:(int)arg7 ;
-(id)logMessageForDebugString:(id)arg1 ;
-(void)_populateAppAndDeviceStateInLogMessage:(id)arg1 withTraits:(id)arg2 ;
-(id)logMessageForUserAction:(id)arg1 eventValue:(id)arg2 traits:(id)arg3 placeActionDetails:(id)arg4 routeDetails:(id)arg5 serverMetadata:(id)arg6 userActionUsageLogMessage:(id)arg7 ;
@end

