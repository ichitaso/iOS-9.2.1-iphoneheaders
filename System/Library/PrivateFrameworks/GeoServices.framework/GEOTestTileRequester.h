/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOTileRequester.h>

@class NSTimer;

@interface GEOTestTileRequester : GEOTileRequester {

	NSTimer* _timer;

}
+(unsigned char)tileProviderIdentifier;
-(void)dealloc;
-(void)start;
-(void)_sendResults:(id)arg1 ;
@end
