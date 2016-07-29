/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapLaunchDetails, GEOPlaceActionDetails, NSString, GEORouteDetails, GEOMapsServerMetadata, GEOTransitAppLaunchDetails;

@interface GEOUserActionUsageLogMessage : PBCodable <NSCopying> {

	int _locationBucket;
	GEOMapLaunchDetails* _mapLaunchDetails;
	GEOPlaceActionDetails* _placeActionDetails;
	NSString* _providerId;
	GEORouteDetails* _routeDetails;
	GEOMapsServerMetadata* _serverMetadata;
	GEOTransitAppLaunchDetails* _transitAppLaunchDetails;
	int _uiTarget;
	NSString* _usageEventKey;
	NSString* _usageEventValue;
	SCD_Struct_GE7 _has;

}

@property (nonatomic,readonly) BOOL hasUsageEventKey; 
@property (nonatomic,retain) NSString * usageEventKey;                                          //@synthesize usageEventKey=_usageEventKey - In the implementation block
@property (nonatomic,readonly) BOOL hasUsageEventValue; 
@property (nonatomic,retain) NSString * usageEventValue;                                        //@synthesize usageEventValue=_usageEventValue - In the implementation block
@property (nonatomic,readonly) BOOL hasProviderId; 
@property (nonatomic,retain) NSString * providerId;                                             //@synthesize providerId=_providerId - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceActionDetails; 
@property (nonatomic,retain) GEOPlaceActionDetails * placeActionDetails;                        //@synthesize placeActionDetails=_placeActionDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteDetails; 
@property (nonatomic,retain) GEORouteDetails * routeDetails;                                    //@synthesize routeDetails=_routeDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasMapLaunchDetails; 
@property (nonatomic,retain) GEOMapLaunchDetails * mapLaunchDetails;                            //@synthesize mapLaunchDetails=_mapLaunchDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitAppLaunchDetails; 
@property (nonatomic,retain) GEOTransitAppLaunchDetails * transitAppLaunchDetails;              //@synthesize transitAppLaunchDetails=_transitAppLaunchDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasServerMetadata; 
@property (nonatomic,retain) GEOMapsServerMetadata * serverMetadata;                            //@synthesize serverMetadata=_serverMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasLocationBucket; 
@property (assign,nonatomic) int locationBucket;                                                //@synthesize locationBucket=_locationBucket - In the implementation block
@property (assign,nonatomic) BOOL hasUiTarget; 
@property (assign,nonatomic) int uiTarget;                                                      //@synthesize uiTarget=_uiTarget - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMapLaunchDetails:(GEOMapLaunchDetails *)arg1 ;
-(BOOL)hasTransitAppLaunchDetails;
-(GEOPlaceActionDetails *)placeActionDetails;
-(void)setProviderId:(NSString *)arg1 ;
-(void)setServerMetadata:(GEOMapsServerMetadata *)arg1 ;
-(BOOL)hasUsageEventValue;
-(BOOL)hasServerMetadata;
-(NSString *)usageEventKey;
-(BOOL)hasLocationBucket;
-(BOOL)hasProviderId;
-(int)locationBucket;
-(void)setUsageEventValue:(NSString *)arg1 ;
-(GEORouteDetails *)routeDetails;
-(int)uiTarget;
-(BOOL)hasPlaceActionDetails;
-(void)setUsageEventKey:(NSString *)arg1 ;
-(void)setUiTarget:(int)arg1 ;
-(void)setTransitAppLaunchDetails:(GEOTransitAppLaunchDetails *)arg1 ;
-(void)setLocationBucket:(int)arg1 ;
-(void)setPlaceActionDetails:(GEOPlaceActionDetails *)arg1 ;
-(BOOL)hasRouteDetails;
-(NSString *)usageEventValue;
-(GEOMapLaunchDetails *)mapLaunchDetails;
-(GEOMapsServerMetadata *)serverMetadata;
-(void)setHasUiTarget:(BOOL)arg1 ;
-(void)setHasLocationBucket:(BOOL)arg1 ;
-(void)setRouteDetails:(GEORouteDetails *)arg1 ;
-(BOOL)hasUsageEventKey;
-(BOOL)hasMapLaunchDetails;
-(BOOL)hasUiTarget;
-(GEOTransitAppLaunchDetails *)transitAppLaunchDetails;
-(NSString *)providerId;
-(BOOL)readFrom:(id)arg1 ;
@end
