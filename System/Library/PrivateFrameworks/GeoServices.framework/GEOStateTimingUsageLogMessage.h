/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOStateTimingUsageLogMessage : PBCodable <NSCopying> {

	double _durationInOldState;
	NSMutableArray* _stateTransitionLogMessages;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,retain) NSMutableArray * stateTransitionLogMessages;              //@synthesize stateTransitionLogMessages=_stateTransitionLogMessages - In the implementation block
@property (assign,nonatomic) BOOL hasDurationInOldState; 
@property (assign,nonatomic) double durationInOldState;                                //@synthesize durationInOldState=_durationInOldState - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDurationInOldState:(double)arg1 ;
-(double)durationInOldState;
-(BOOL)hasDurationInOldState;
-(void)setHasDurationInOldState:(BOOL)arg1 ;
-(void)clearStateTransitionLogMessages;
-(void)setStateTransitionLogMessages:(NSMutableArray *)arg1 ;
-(void)addStateTransitionLogMessage:(id)arg1 ;
-(id)stateTransitionLogMessageAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)stateTransitionLogMessagesCount;
-(NSMutableArray *)stateTransitionLogMessages;
-(BOOL)readFrom:(id)arg1 ;
@end
