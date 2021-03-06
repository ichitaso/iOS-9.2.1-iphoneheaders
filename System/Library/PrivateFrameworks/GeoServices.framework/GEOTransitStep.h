/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTransitArrivalInfo, NSMutableArray, GEOInstructionSet, GEOLatLng, GEOPBTransitRoutingIncidentMessage;

@interface GEOTransitStep : PBCodable <NSCopying> {

	SCD_Struct_GE52* _routeDetailsPrimaryArtworkIndexs;
	SCD_Struct_GE52* _steppingArtworkIndexs;
	unsigned _accessPointZilchIndex;
	GEOTransitArrivalInfo* _arrivalInfo;
	unsigned _defaultVehicleInfoIndex;
	unsigned _departureFrequency;
	unsigned _distanceInMeters;
	unsigned _endingStopIndex;
	NSMutableArray* _enterExitInfos;
	GEOInstructionSet* _instructions;
	unsigned _listTransitIncidentMessageIndex;
	GEOLatLng* _location;
	int _maneuverType;
	unsigned _routeDetailsSecondaryArtworkIndex;
	int _significanceForEndNode;
	unsigned _startingStopIndex;
	unsigned _startingTime;
	unsigned _steppingTransitIncidentMessageIndex;
	NSMutableArray* _transferInfos;
	GEOPBTransitRoutingIncidentMessage* _transitIncidentMessage;
	NSMutableArray* _vehicleInfos;
	unsigned _walkingIndex;
	unsigned _zilchIndex;
	BOOL _prioritizeTilesPreloading;
	SCD_Struct_GE69 _has;

}

@property (assign,nonatomic) BOOL hasManeuverType; 
@property (assign,nonatomic) int maneuverType;                                                         //@synthesize maneuverType=_maneuverType - In the implementation block
@property (assign,nonatomic) BOOL hasStartingStopIndex; 
@property (assign,nonatomic) unsigned startingStopIndex;                                               //@synthesize startingStopIndex=_startingStopIndex - In the implementation block
@property (assign,nonatomic) BOOL hasEndingStopIndex; 
@property (assign,nonatomic) unsigned endingStopIndex;                                                 //@synthesize endingStopIndex=_endingStopIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * vehicleInfos;                                            //@synthesize vehicleInfos=_vehicleInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * enterExitInfos;                                          //@synthesize enterExitInfos=_enterExitInfos - In the implementation block
@property (assign,nonatomic) BOOL hasPrioritizeTilesPreloading; 
@property (assign,nonatomic) BOOL prioritizeTilesPreloading;                                           //@synthesize prioritizeTilesPreloading=_prioritizeTilesPreloading - In the implementation block
@property (assign,nonatomic) BOOL hasWalkingIndex; 
@property (assign,nonatomic) unsigned walkingIndex;                                                    //@synthesize walkingIndex=_walkingIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * transferInfos;                                           //@synthesize transferInfos=_transferInfos - In the implementation block
@property (assign,nonatomic) BOOL hasStartingTime; 
@property (assign,nonatomic) unsigned startingTime;                                                    //@synthesize startingTime=_startingTime - In the implementation block
@property (nonatomic,readonly) BOOL hasArrivalInfo; 
@property (nonatomic,retain) GEOTransitArrivalInfo * arrivalInfo;                                      //@synthesize arrivalInfo=_arrivalInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location;                                                     //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasSignificanceForEndNode; 
@property (assign,nonatomic) int significanceForEndNode;                                               //@synthesize significanceForEndNode=_significanceForEndNode - In the implementation block
@property (nonatomic,readonly) BOOL hasInstructions; 
@property (nonatomic,retain) GEOInstructionSet * instructions;                                         //@synthesize instructions=_instructions - In the implementation block
@property (assign,nonatomic) BOOL hasZilchIndex; 
@property (assign,nonatomic) unsigned zilchIndex;                                                      //@synthesize zilchIndex=_zilchIndex - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceInMeters; 
@property (assign,nonatomic) unsigned distanceInMeters;                                                //@synthesize distanceInMeters=_distanceInMeters - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitIncidentMessage; 
@property (nonatomic,retain) GEOPBTransitRoutingIncidentMessage * transitIncidentMessage;              //@synthesize transitIncidentMessage=_transitIncidentMessage - In the implementation block
@property (nonatomic,readonly) unsigned long long routeDetailsPrimaryArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* routeDetailsPrimaryArtworkIndexs; 
@property (nonatomic,readonly) unsigned long long steppingArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* steppingArtworkIndexs; 
@property (assign,nonatomic) BOOL hasRouteDetailsSecondaryArtworkIndex; 
@property (assign,nonatomic) unsigned routeDetailsSecondaryArtworkIndex;                               //@synthesize routeDetailsSecondaryArtworkIndex=_routeDetailsSecondaryArtworkIndex - In the implementation block
@property (assign,nonatomic) BOOL hasAccessPointZilchIndex; 
@property (assign,nonatomic) unsigned accessPointZilchIndex;                                           //@synthesize accessPointZilchIndex=_accessPointZilchIndex - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultVehicleInfoIndex; 
@property (assign,nonatomic) unsigned defaultVehicleInfoIndex;                                         //@synthesize defaultVehicleInfoIndex=_defaultVehicleInfoIndex - In the implementation block
@property (assign,nonatomic) BOOL hasDepartureFrequency; 
@property (assign,nonatomic) unsigned departureFrequency;                                              //@synthesize departureFrequency=_departureFrequency - In the implementation block
@property (assign,nonatomic) BOOL hasSteppingTransitIncidentMessageIndex; 
@property (assign,nonatomic) unsigned steppingTransitIncidentMessageIndex;                             //@synthesize steppingTransitIncidentMessageIndex=_steppingTransitIncidentMessageIndex - In the implementation block
@property (assign,nonatomic) BOOL hasListTransitIncidentMessageIndex; 
@property (assign,nonatomic) unsigned listTransitIncidentMessageIndex;                                 //@synthesize listTransitIncidentMessageIndex=_listTransitIncidentMessageIndex - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOLatLng *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasLocation;
-(void)clearRouteDetailsPrimaryArtworkIndexs;
-(void)setRouteDetailsPrimaryArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)addRouteDetailsPrimaryArtworkIndex:(unsigned)arg1 ;
-(void)addSteppingArtworkIndex:(unsigned)arg1 ;
-(unsigned*)steppingArtworkIndexs;
-(void)setSteppingArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)routeDetailsPrimaryArtworkIndexs;
-(unsigned)steppingArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRouteDetailsSecondaryArtworkIndex;
-(unsigned)routeDetailsSecondaryArtworkIndex;
-(unsigned)routeDetailsPrimaryArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(void)clearSteppingArtworkIndexs;
-(void)setInstructions:(GEOInstructionSet *)arg1 ;
-(unsigned long long)routeDetailsPrimaryArtworkIndexsCount;
-(BOOL)hasInstructions;
-(void)setHasRouteDetailsSecondaryArtworkIndex:(BOOL)arg1 ;
-(unsigned long long)steppingArtworkIndexsCount;
-(GEOInstructionSet *)instructions;
-(void)setRouteDetailsSecondaryArtworkIndex:(unsigned)arg1 ;
-(void)setTransitIncidentMessage:(GEOPBTransitRoutingIncidentMessage *)arg1 ;
-(BOOL)hasTransitIncidentMessage;
-(GEOPBTransitRoutingIncidentMessage *)transitIncidentMessage;
-(int)maneuverType;
-(void)setManeuverType:(int)arg1 ;
-(void)setHasManeuverType:(BOOL)arg1 ;
-(BOOL)hasManeuverType;
-(BOOL)hasZilchIndex;
-(void)clearVehicleInfos;
-(void)setDepartureFrequency:(unsigned)arg1 ;
-(void)setZilchIndex:(unsigned)arg1 ;
-(GEOTransitArrivalInfo *)arrivalInfo;
-(BOOL)hasDefaultVehicleInfoIndex;
-(void)setHasWalkingIndex:(BOOL)arg1 ;
-(void)setEndingStopIndex:(unsigned)arg1 ;
-(unsigned)listTransitIncidentMessageIndex;
-(BOOL)hasSignificanceForEndNode;
-(BOOL)hasEndingStopIndex;
-(void)setHasEndingStopIndex:(BOOL)arg1 ;
-(unsigned long long)enterExitInfosCount;
-(void)setDefaultVehicleInfoIndex:(unsigned)arg1 ;
-(void)addTransferInfo:(id)arg1 ;
-(BOOL)hasWalkingIndex;
-(void)addVehicleInfo:(id)arg1 ;
-(BOOL)hasAccessPointZilchIndex;
-(void)setHasPrioritizeTilesPreloading:(BOOL)arg1 ;
-(id)enterExitInfoAtIndex:(unsigned long long)arg1 ;
-(void)setEnterExitInfos:(NSMutableArray *)arg1 ;
-(void)setStartingStopIndex:(unsigned)arg1 ;
-(void)setHasAccessPointZilchIndex:(BOOL)arg1 ;
-(void)setHasSignificanceForEndNode:(BOOL)arg1 ;
-(BOOL)hasListTransitIncidentMessageIndex;
-(unsigned)zilchIndex;
-(void)setWalkingIndex:(unsigned)arg1 ;
-(int)significanceForEndNode;
-(BOOL)hasStartingStopIndex;
-(void)setTransferInfos:(NSMutableArray *)arg1 ;
-(void)setHasListTransitIncidentMessageIndex:(BOOL)arg1 ;
-(id)transferInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned)distanceInMeters;
-(void)setHasStartingStopIndex:(BOOL)arg1 ;
-(void)clearEnterExitInfos;
-(void)setListTransitIncidentMessageIndex:(unsigned)arg1 ;
-(void)setAccessPointZilchIndex:(unsigned)arg1 ;
-(void)setSignificanceForEndNode:(int)arg1 ;
-(BOOL)hasPrioritizeTilesPreloading;
-(NSMutableArray *)vehicleInfos;
-(BOOL)hasArrivalInfo;
-(unsigned)endingStopIndex;
-(NSMutableArray *)enterExitInfos;
-(BOOL)hasSteppingTransitIncidentMessageIndex;
-(void)setHasSteppingTransitIncidentMessageIndex:(BOOL)arg1 ;
-(void)clearTransferInfos;
-(void)setPrioritizeTilesPreloading:(BOOL)arg1 ;
-(void)setHasDistanceInMeters:(BOOL)arg1 ;
-(unsigned)accessPointZilchIndex;
-(void)setHasDefaultVehicleInfoIndex:(BOOL)arg1 ;
-(BOOL)prioritizeTilesPreloading;
-(BOOL)hasDistanceInMeters;
-(unsigned)startingStopIndex;
-(void)setStartingTime:(unsigned)arg1 ;
-(unsigned long long)transferInfosCount;
-(id)vehicleInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned)walkingIndex;
-(void)setSteppingTransitIncidentMessageIndex:(unsigned)arg1 ;
-(void)addEnterExitInfo:(id)arg1 ;
-(void)setArrivalInfo:(GEOTransitArrivalInfo *)arg1 ;
-(void)setDistanceInMeters:(unsigned)arg1 ;
-(BOOL)hasDepartureFrequency;
-(void)setVehicleInfos:(NSMutableArray *)arg1 ;
-(BOOL)hasStartingTime;
-(NSMutableArray *)transferInfos;
-(void)setHasZilchIndex:(BOOL)arg1 ;
-(unsigned)defaultVehicleInfoIndex;
-(void)setHasDepartureFrequency:(BOOL)arg1 ;
-(unsigned)departureFrequency;
-(unsigned long long)vehicleInfosCount;
-(unsigned)steppingTransitIncidentMessageIndex;
-(void)setHasStartingTime:(BOOL)arg1 ;
-(unsigned)startingTime;
-(BOOL)readFrom:(id)arg1 ;
@end

