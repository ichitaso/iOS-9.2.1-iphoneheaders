/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOSentinelTile : PBCodable <NSCopying> {

	NSString* _resourceName;
	int _type;

}

@property (assign,nonatomic) int type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * resourceName;              //@synthesize resourceName=_resourceName - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setResourceName:(NSString *)arg1 ;
-(NSString *)resourceName;
-(BOOL)readFrom:(id)arg1 ;
@end

