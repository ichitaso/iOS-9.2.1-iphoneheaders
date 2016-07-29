/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEORouteManagerDelegate;
#import <GeoServices/GeoServices-Structs.h>
@interface GEORouteManager : NSObject {

	id<GEORouteManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GEORouteManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)setShouldRequestServerLatencyInfo:(BOOL)arg1 ;
-(void)setDelegate:(id<GEORouteManagerDelegate>)arg1 ;
-(id<GEORouteManagerDelegate>)delegate;
-(void)handleError:(id)arg1 problemDetail:(SCD_Struct_GE62*)arg2 forTicket:(id)arg3 ;
-(void)addedRoutesToRouteSet:(id)arg1 ;
-(void)handleResponse:(id)arg1 routeSet:(id)arg2 forTicket:(id)arg3 ;
-(void)fetchDirectionsForTicket:(id)arg1 routeSet:(id)arg2 networkActivity:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end
