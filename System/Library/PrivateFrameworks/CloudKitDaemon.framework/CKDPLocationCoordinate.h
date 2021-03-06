/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPDate;

@interface CKDPLocationCoordinate : PBCodable <NSCopying> {

	double _altitude;
	double _course;
	double _horizontalAccuracy;
	double _latitude;
	double _longitude;
	double _speed;
	double _verticalAccuracy;
	CKDPDate* _timestamp;
	SCD_Struct_CK16 _has;

}

@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                         //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                        //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalAccuracy; 
@property (assign,nonatomic) double horizontalAccuracy;               //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasAltitude; 
@property (assign,nonatomic) double altitude;                         //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) BOOL hasVerticalAccuracy; 
@property (assign,nonatomic) double verticalAccuracy;                 //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasCourse; 
@property (assign,nonatomic) double course;                           //@synthesize course=_course - In the implementation block
@property (assign,nonatomic) BOOL hasSpeed; 
@property (assign,nonatomic) double speed;                            //@synthesize speed=_speed - In the implementation block
@property (nonatomic,readonly) BOOL hasTimestamp; 
@property (nonatomic,retain) CKDPDate * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setSpeed:(double)arg1 ;
-(CKDPDate *)timestamp;
-(void)setTimestamp:(CKDPDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)speed;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasSpeed:(BOOL)arg1 ;
-(void)setCourse:(double)arg1 ;
-(BOOL)hasAltitude;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(void)setHasAltitude:(BOOL)arg1 ;
-(BOOL)hasHorizontalAccuracy;
-(BOOL)hasCourse;
-(void)setVerticalAccuracy:(double)arg1 ;
-(void)setHasHorizontalAccuracy:(BOOL)arg1 ;
-(double)altitude;
-(void)setHasCourse:(BOOL)arg1 ;
-(double)course;
-(BOOL)hasVerticalAccuracy;
-(void)setHasVerticalAccuracy:(BOOL)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(BOOL)hasTimestamp;
-(void)setLatitude:(double)arg1 ;
-(BOOL)hasLongitude;
-(BOOL)hasLatitude;
-(void)setHasLatitude:(BOOL)arg1 ;
-(void)setHasLongitude:(BOOL)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(double)verticalAccuracy;
-(double)horizontalAccuracy;
-(double)latitude;
-(double)longitude;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasSpeed;
@end

