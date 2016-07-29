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

@class GEOTransitDecoderData, NSData, GEORouteDisplayHints, NSMutableArray, GEOStyleAttributes, NSString, GEOPBTransitRoutingIncidentMessage;

@interface GEODirectionsResponse : PBCodable <NSCopying> {

	SCD_Struct_GE1* _supportedTransportTypes;
	SCD_Struct_GE61 _timepointUsed;
	unsigned long long _debugLatencyMs;
	SCD_Struct_GE62* _problemDetails;
	unsigned long long _problemDetailsCount;
	unsigned long long _problemDetailsSpace;
	GEOTransitDecoderData* _decoderData;
	NSData* _directionsResponseID;
	GEORouteDisplayHints* _displayHints;
	NSData* _graphV3;
	NSMutableArray* _incidentsOffRoutes;
	NSMutableArray* _incidentsOnRoutes;
	int _instructionSignFillColor;
	int _localDistanceUnits;
	NSMutableArray* _placeSearchResponses;
	NSMutableArray* _routes;
	unsigned _selectedRouteIndex;
	NSMutableArray* _serviceGaps;
	NSData* _sessionState;
	int _status;
	GEOStyleAttributes* _styleAttributes;
	NSMutableArray* _suggestedRoutes;
	NSString* _transitDataVersion;
	GEOPBTransitRoutingIncidentMessage* _transitIncidentMessage;
	BOOL _isNavigable;
	BOOL _routeDeviatesFromOriginal;
	SCD_Struct_GE63 _has;

}

@property (assign,nonatomic) BOOL hasDebugLatencyMs; 
@property (assign,nonatomic) unsigned long long debugLatencyMs; 
@property (assign,nonatomic) int status;                                                               //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableArray * routes;                                                  //@synthesize routes=_routes - In the implementation block
@property (nonatomic,retain) NSMutableArray * placeSearchResponses;                                    //@synthesize placeSearchResponses=_placeSearchResponses - In the implementation block
@property (assign,nonatomic) BOOL hasLocalDistanceUnits; 
@property (assign,nonatomic) int localDistanceUnits;                                                   //@synthesize localDistanceUnits=_localDistanceUnits - In the implementation block
@property (assign,nonatomic) BOOL hasRouteDeviatesFromOriginal; 
@property (assign,nonatomic) BOOL routeDeviatesFromOriginal;                                           //@synthesize routeDeviatesFromOriginal=_routeDeviatesFromOriginal - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID;                                            //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (assign,nonatomic) BOOL hasIsNavigable; 
@property (assign,nonatomic) BOOL isNavigable;                                                         //@synthesize isNavigable=_isNavigable - In the implementation block
@property (assign,nonatomic) BOOL hasInstructionSignFillColor; 
@property (assign,nonatomic) int instructionSignFillColor;                                             //@synthesize instructionSignFillColor=_instructionSignFillColor - In the implementation block
@property (nonatomic,retain) NSMutableArray * incidentsOnRoutes;                                       //@synthesize incidentsOnRoutes=_incidentsOnRoutes - In the implementation block
@property (nonatomic,retain) NSMutableArray * incidentsOffRoutes;                                      //@synthesize incidentsOffRoutes=_incidentsOffRoutes - In the implementation block
@property (nonatomic,readonly) unsigned long long problemDetailsCount; 
@property (nonatomic,readonly) SCD_Struct_GE62* problemDetails; 
@property (nonatomic,readonly) unsigned long long supportedTransportTypesCount; 
@property (nonatomic,readonly) int* supportedTransportTypes; 
@property (assign,nonatomic) BOOL hasSelectedRouteIndex; 
@property (assign,nonatomic) unsigned selectedRouteIndex;                                              //@synthesize selectedRouteIndex=_selectedRouteIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * suggestedRoutes;                                         //@synthesize suggestedRoutes=_suggestedRoutes - In the implementation block
@property (assign,nonatomic) BOOL hasTimepointUsed; 
@property (assign,nonatomic) SCD_Struct_GE64 timepointUsed;                                            //@synthesize timepointUsed=_timepointUsed - In the implementation block
@property (nonatomic,readonly) BOOL hasDecoderData; 
@property (nonatomic,retain) GEOTransitDecoderData * decoderData;                                      //@synthesize decoderData=_decoderData - In the implementation block
@property (nonatomic,readonly) BOOL hasGraphV3; 
@property (nonatomic,retain) NSData * graphV3;                                                         //@synthesize graphV3=_graphV3 - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitDataVersion; 
@property (nonatomic,retain) NSString * transitDataVersion;                                            //@synthesize transitDataVersion=_transitDataVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceGaps;                                             //@synthesize serviceGaps=_serviceGaps - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitIncidentMessage; 
@property (nonatomic,retain) GEOPBTransitRoutingIncidentMessage * transitIncidentMessage;              //@synthesize transitIncidentMessage=_transitIncidentMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayHints; 
@property (nonatomic,retain) GEORouteDisplayHints * displayHints;                                      //@synthesize displayHints=_displayHints - In the implementation block
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes;                                     //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState;                                                    //@synthesize sessionState=_sessionState - In the implementation block
-(unsigned long long)debugLatencyMs;
-(BOOL)hasDebugLatencyMs;
-(void)setHasDebugLatencyMs:(BOOL)arg1 ;
-(void)setDebugLatencyMs:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(BOOL)hasDirectionsResponseID;
-(NSData *)directionsResponseID;
-(NSData *)sessionState;
-(void)setSessionState:(NSData *)arg1 ;
-(BOOL)hasSessionState;
-(void)setRoutes:(NSMutableArray *)arg1 ;
-(void)clearPlaceSearchResponses;
-(void)setTransitIncidentMessage:(GEOPBTransitRoutingIncidentMessage *)arg1 ;
-(void)setInstructionSignFillColor:(int)arg1 ;
-(void)setHasTimepointUsed:(BOOL)arg1 ;
-(void)setHasLocalDistanceUnits:(BOOL)arg1 ;
-(void)setIncidentsOffRoutes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)suggestedRoutes;
-(unsigned long long)serviceGapsCount;
-(void)setDecoderData:(GEOTransitDecoderData *)arg1 ;
-(id)serviceGapAtIndex:(unsigned long long)arg1 ;
-(void)setProblemDetails:(SCD_Struct_GE62*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasIsNavigable;
-(void)setTimepointUsed:(SCD_Struct_GE64)arg1 ;
-(BOOL)hasLocalDistanceUnits;
-(void)clearSuggestedRoutes;
-(unsigned long long)incidentsOnRoutesCount;
-(id)incidentsOnRoutesAtIndex:(unsigned long long)arg1 ;
-(SCD_Struct_GE64)timepointUsed;
-(int)instructionSignFillColor;
-(void)clearProblemDetails;
-(void)addServiceGap:(id)arg1 ;
-(BOOL)hasSelectedRouteIndex;
-(GEOTransitDecoderData *)decoderData;
-(void)setHasIsNavigable:(BOOL)arg1 ;
-(void)setGraphV3:(NSData *)arg1 ;
-(int)localDistanceUnits;
-(void)addProblemDetail:(SCD_Struct_GE62)arg1 ;
-(id)suggestedRouteAtIndex:(unsigned long long)arg1 ;
-(BOOL)isNavigable;
-(void)setHasSelectedRouteIndex:(BOOL)arg1 ;
-(unsigned long long)suggestedRoutesCount;
-(void)clearIncidentsOnRoutes;
-(BOOL)hasDisplayHints;
-(void)setLocalDistanceUnits:(int)arg1 ;
-(void)addSuggestedRoute:(id)arg1 ;
-(NSMutableArray *)routes;
-(void)setPlaceSearchResponses:(NSMutableArray *)arg1 ;
-(NSData *)graphV3;
-(void)clearRoutes;
-(BOOL)hasTransitIncidentMessage;
-(void)setIsNavigable:(BOOL)arg1 ;
-(void)addSupportedTransportType:(int)arg1 ;
-(void)clearIncidentsOffRoutes;
-(NSMutableArray *)placeSearchResponses;
-(void)setTransitDataVersion:(NSString *)arg1 ;
-(void)setSelectedRouteIndex:(unsigned)arg1 ;
-(SCD_Struct_GE62*)problemDetails;
-(NSString *)transitDataVersion;
-(void)clearSupportedTransportTypes;
-(SCD_Struct_GE62)problemDetailAtIndex:(unsigned long long)arg1 ;
-(void)setHasRouteDeviatesFromOriginal:(BOOL)arg1 ;
-(void)addIncidentsOnRoutes:(id)arg1 ;
-(NSMutableArray *)serviceGaps;
-(BOOL)hasTransitDataVersion;
-(unsigned long long)routesCount;
-(void)addPlaceSearchResponse:(id)arg1 ;
-(void)setSupportedTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)problemDetailsCount;
-(BOOL)hasStyleAttributes;
-(unsigned long long)incidentsOffRoutesCount;
-(BOOL)hasRouteDeviatesFromOriginal;
-(NSMutableArray *)incidentsOnRoutes;
-(void)setDisplayHints:(GEORouteDisplayHints *)arg1 ;
-(id)routeAtIndex:(unsigned long long)arg1 ;
-(id)incidentsOffRoutesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)placeSearchResponsesCount;
-(GEOPBTransitRoutingIncidentMessage *)transitIncidentMessage;
-(BOOL)hasGraphV3;
-(id)placeSearchResponseAtIndex:(unsigned long long)arg1 ;
-(void)setServiceGaps:(NSMutableArray *)arg1 ;
-(void)addRoute:(id)arg1 ;
-(void)setRouteDeviatesFromOriginal:(BOOL)arg1 ;
-(NSMutableArray *)incidentsOffRoutes;
-(void)setSuggestedRoutes:(NSMutableArray *)arg1 ;
-(BOOL)hasDecoderData;
-(void)addIncidentsOffRoutes:(id)arg1 ;
-(unsigned long long)supportedTransportTypesCount;
-(int)supportedTransportTypeAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTimepointUsed;
-(void)setHasInstructionSignFillColor:(BOOL)arg1 ;
-(void)setIncidentsOnRoutes:(NSMutableArray *)arg1 ;
-(GEORouteDisplayHints *)displayHints;
-(void)clearServiceGaps;
-(GEOStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(BOOL)hasInstructionSignFillColor;
-(int*)supportedTransportTypes;
-(unsigned)selectedRouteIndex;
-(BOOL)routeDeviatesFromOriginal;
-(BOOL)readFrom:(id)arg1 ;
@end
