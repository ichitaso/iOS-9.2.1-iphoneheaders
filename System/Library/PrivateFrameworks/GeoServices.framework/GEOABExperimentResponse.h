/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOABExperimentResponse : PBCodable <NSCopying> {

	unsigned long long _refreshIntervalSeconds;
	double _timestamp;
	NSMutableArray* _assignments;
	NSString* _requestGuid;
	NSString* _sourceURL;
	BOOL _invalidatePoiCache;
	BOOL _invalidateTileCache;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) BOOL hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL; 
@property (nonatomic,readonly) BOOL hasRequestGuid; 
@property (nonatomic,retain) NSString * requestGuid;                                 //@synthesize requestGuid=_requestGuid - In the implementation block
@property (nonatomic,retain) NSMutableArray * assignments;                           //@synthesize assignments=_assignments - In the implementation block
@property (assign,nonatomic) BOOL hasInvalidateTileCache; 
@property (assign,nonatomic) BOOL invalidateTileCache;                               //@synthesize invalidateTileCache=_invalidateTileCache - In the implementation block
@property (assign,nonatomic) BOOL hasInvalidatePoiCache; 
@property (assign,nonatomic) BOOL invalidatePoiCache;                                //@synthesize invalidatePoiCache=_invalidatePoiCache - In the implementation block
@property (assign,nonatomic) BOOL hasRefreshIntervalSeconds; 
@property (assign,nonatomic) unsigned long long refreshIntervalSeconds;              //@synthesize refreshIntervalSeconds=_refreshIntervalSeconds - In the implementation block
-(id)_experimentAssignmentForServiceType:(int)arg1 placeRequestType:(int)arg2 ;
-(id)_querySubstringForServiceType:(int)arg1 placeRequestType:(int)arg2 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(NSString *)sourceURL;
-(BOOL)hasSourceURL;
-(void)setSourceURL:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasRefreshIntervalSeconds;
-(BOOL)hasInvalidateTileCache;
-(void)setRequestGuid:(NSString *)arg1 ;
-(BOOL)invalidatePoiCache;
-(void)setInvalidatePoiCache:(BOOL)arg1 ;
-(BOOL)invalidateTileCache;
-(unsigned long long)assignmentsCount;
-(void)setHasInvalidateTileCache:(BOOL)arg1 ;
-(id)assignmentAtIndex:(unsigned long long)arg1 ;
-(void)setHasRefreshIntervalSeconds:(BOOL)arg1 ;
-(void)addAssignment:(id)arg1 ;
-(void)setInvalidateTileCache:(BOOL)arg1 ;
-(BOOL)hasInvalidatePoiCache;
-(NSMutableArray *)assignments;
-(void)setAssignments:(NSMutableArray *)arg1 ;
-(BOOL)hasRequestGuid;
-(void)setRefreshIntervalSeconds:(unsigned long long)arg1 ;
-(void)clearAssignments;
-(void)setHasInvalidatePoiCache:(BOOL)arg1 ;
-(NSString *)requestGuid;
-(unsigned long long)refreshIntervalSeconds;
-(BOOL)readFrom:(id)arg1 ;
@end
