/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOAutomobileOptions, NSString, GEOTransitOptions, GEOWalkingOptions;

@interface GEORouteAttributes : PBCodable <NSCopying> {

	SCD_Struct_GE1* _additionalTransportTypes;
	SCD_Struct_GE61 _timepoint;
	SCD_Struct_GE1* _uiContexts;
	GEOAutomobileOptions* _automobileOptions;
	int _basicPointsToBeIncluded;
	int _mainTransportType;
	NSString* _phoneticLocaleIdentifier;
	int _trafficType;
	GEOTransitOptions* _transitOptions;
	unsigned _walkingLimitMeters;
	GEOWalkingOptions* _walkingOptions;
	BOOL _includeContingencyRoutes;
	BOOL _includeHistoricTravelTime;
	BOOL _includeLaneGuidance;
	BOOL _includeManeuverIcons;
	BOOL _includePhonetics;
	BOOL _includeSubsteps;
	BOOL _includeTrafficAlongRoute;
	BOOL _includeTrafficIncidents;
	BOOL _includeZilchPoints;
	SCD_Struct_GE58 _has;

}

@property (assign,nonatomic) BOOL hasMainTransportType; 
@property (assign,nonatomic) int mainTransportType;                                           //@synthesize mainTransportType=_mainTransportType - In the implementation block
@property (assign,nonatomic) BOOL hasIncludePhonetics; 
@property (assign,nonatomic) BOOL includePhonetics;                                           //@synthesize includePhonetics=_includePhonetics - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeManeuverIcons; 
@property (assign,nonatomic) BOOL includeManeuverIcons;                                       //@synthesize includeManeuverIcons=_includeManeuverIcons - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeZilchPoints; 
@property (assign,nonatomic) BOOL includeZilchPoints;                                         //@synthesize includeZilchPoints=_includeZilchPoints - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeContingencyRoutes; 
@property (assign,nonatomic) BOOL includeContingencyRoutes;                                   //@synthesize includeContingencyRoutes=_includeContingencyRoutes - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeLaneGuidance; 
@property (assign,nonatomic) BOOL includeLaneGuidance;                                        //@synthesize includeLaneGuidance=_includeLaneGuidance - In the implementation block
@property (assign,nonatomic) BOOL hasBasicPointsToBeIncluded; 
@property (assign,nonatomic) int basicPointsToBeIncluded;                                     //@synthesize basicPointsToBeIncluded=_basicPointsToBeIncluded - In the implementation block
@property (assign,nonatomic) BOOL hasTrafficType; 
@property (assign,nonatomic) int trafficType;                                                 //@synthesize trafficType=_trafficType - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticLocaleIdentifier; 
@property (nonatomic,retain) NSString * phoneticLocaleIdentifier;                             //@synthesize phoneticLocaleIdentifier=_phoneticLocaleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeTrafficAlongRoute; 
@property (assign,nonatomic) BOOL includeTrafficAlongRoute;                                   //@synthesize includeTrafficAlongRoute=_includeTrafficAlongRoute - In the implementation block
@property (assign,nonatomic) BOOL hasTimepoint; 
@property (assign,nonatomic) SCD_Struct_GE64 timepoint;                                       //@synthesize timepoint=_timepoint - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) BOOL includeHistoricTravelTime;                                  //@synthesize includeHistoricTravelTime=_includeHistoricTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeSubsteps; 
@property (assign,nonatomic) BOOL includeSubsteps;                                            //@synthesize includeSubsteps=_includeSubsteps - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeTrafficIncidents; 
@property (assign,nonatomic) BOOL includeTrafficIncidents;                                    //@synthesize includeTrafficIncidents=_includeTrafficIncidents - In the implementation block
@property (assign,nonatomic) BOOL hasWalkingLimitMeters; 
@property (assign,nonatomic) unsigned walkingLimitMeters;                                     //@synthesize walkingLimitMeters=_walkingLimitMeters - In the implementation block
@property (nonatomic,readonly) unsigned long long additionalTransportTypesCount; 
@property (nonatomic,readonly) int* additionalTransportTypes; 
@property (nonatomic,readonly) BOOL hasAutomobileOptions; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                        //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions;                              //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasWalkingOptions; 
@property (nonatomic,retain) GEOWalkingOptions * walkingOptions;                              //@synthesize walkingOptions=_walkingOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long uiContextsCount; 
@property (nonatomic,readonly) int* uiContexts; 
+(id)defaultRouteAttributes;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPhoneticLocaleIdentifier:(NSString *)arg1 ;
-(BOOL)hasPhoneticLocaleIdentifier;
-(NSString *)phoneticLocaleIdentifier;
-(void)setIncludePhonetics:(BOOL)arg1 ;
-(BOOL)includePhonetics;
-(void)setHasIncludePhonetics:(BOOL)arg1 ;
-(BOOL)hasIncludePhonetics;
-(BOOL)hasAutomobileOptions;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setWalkingOptions:(GEOWalkingOptions *)arg1 ;
-(SCD_Struct_GE64)timepoint;
-(void)setHasTimepoint:(BOOL)arg1 ;
-(BOOL)hasTimepoint;
-(GEOTransitOptions *)transitOptions;
-(void)setTimepoint:(SCD_Struct_GE64)arg1 ;
-(GEOWalkingOptions *)walkingOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setHasIncludeHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)includeHistoricTravelTime;
-(BOOL)hasIncludeHistoricTravelTime;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(BOOL)hasWalkingOptions;
-(void)setIncludeHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasTransitOptions;
-(unsigned long long)uiContextsCount;
-(unsigned long long)additionalTransportTypesCount;
-(void)addUiContext:(int)arg1 ;
-(BOOL)includeContingencyRoutes;
-(int)trafficType;
-(int)additionalTransportTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned)walkingLimitMeters;
-(void)setIncludeContingencyRoutes:(BOOL)arg1 ;
-(void)setTrafficType:(int)arg1 ;
-(BOOL)hasMainTransportType;
-(void)setHasTrafficType:(BOOL)arg1 ;
-(BOOL)hasTrafficType;
-(void)setHasIncludeContingencyRoutes:(BOOL)arg1 ;
-(void)setWalkingLimitMeters:(unsigned)arg1 ;
-(void)setHasMainTransportType:(BOOL)arg1 ;
-(void)addAdditionalTransportType:(int)arg1 ;
-(BOOL)hasIncludeContingencyRoutes;
-(void)clearAdditionalTransportTypes;
-(void)setHasWalkingLimitMeters:(BOOL)arg1 ;
-(void)clearUiContexts;
-(void)setUiContexts:(int*)arg1 count:(unsigned long long)arg2 ;
-(int)uiContextAtIndex:(unsigned long long)arg1 ;
-(BOOL)includeLaneGuidance;
-(BOOL)includeTrafficAlongRoute;
-(void)setMainTransportType:(int)arg1 ;
-(int*)uiContexts;
-(void)setIncludeSubsteps:(BOOL)arg1 ;
-(BOOL)includeSubsteps;
-(void)setIncludeLaneGuidance:(BOOL)arg1 ;
-(BOOL)hasWalkingLimitMeters;
-(int)mainTransportType;
-(void)setHasIncludeSubsteps:(BOOL)arg1 ;
-(void)setHasIncludeTrafficAlongRoute:(BOOL)arg1 ;
-(void)setIncludeManeuverIcons:(BOOL)arg1 ;
-(void)setHasIncludeManeuverIcons:(BOOL)arg1 ;
-(void)setHasIncludeLaneGuidance:(BOOL)arg1 ;
-(BOOL)hasIncludeLaneGuidance;
-(void)setIncludeTrafficAlongRoute:(BOOL)arg1 ;
-(BOOL)includeManeuverIcons;
-(BOOL)hasIncludeManeuverIcons;
-(BOOL)hasIncludeTrafficAlongRoute;
-(BOOL)includeTrafficIncidents;
-(int)basicPointsToBeIncluded;
-(BOOL)includeZilchPoints;
-(int*)additionalTransportTypes;
-(BOOL)hasIncludeSubsteps;
-(void)setIncludeZilchPoints:(BOOL)arg1 ;
-(void)setBasicPointsToBeIncluded:(int)arg1 ;
-(void)setHasBasicPointsToBeIncluded:(BOOL)arg1 ;
-(void)setIncludeTrafficIncidents:(BOOL)arg1 ;
-(void)setHasIncludeZilchPoints:(BOOL)arg1 ;
-(BOOL)hasIncludeTrafficIncidents;
-(BOOL)hasBasicPointsToBeIncluded;
-(BOOL)hasIncludeZilchPoints;
-(void)setHasIncludeTrafficIncidents:(BOOL)arg1 ;
-(void)setAdditionalTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
@end

