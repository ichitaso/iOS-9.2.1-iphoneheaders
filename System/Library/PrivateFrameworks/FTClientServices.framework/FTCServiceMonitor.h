/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FTCServiceMonitor : NSObject {

	long long _availability;
	long long _type;
	int _token;

}

@property (nonatomic,readonly) long long serviceType; 
-(void)dealloc;
-(long long)serviceType;
-(long long)serviceAvailability;
-(void)updateAvailability;
-(void)_postAvailability:(long long)arg1 ;
-(void)handleActiveAccountsChanged:(id)arg1 ;
-(id)initWithServiceType:(long long)arg1 ;
-(void)_updateAvailability;
@end

