/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOServiceRequester.h>

@interface GEOPlaceDataRequester : GEOServiceRequester
+(id)sharedInstance;
+(unsigned long long)_urlType;
+(id)_serviceTypeNumber;
+(BOOL)_shouldThrottleRequests;
+(long long)_experimentType;
+(int)_experimentDispatcherRequestTypeForRequest:(id)arg1 ;
-(id)_validateResponse:(id)arg1 ;
-(void)cancelRequest:(id)arg1 ;
-(void)startWithRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

