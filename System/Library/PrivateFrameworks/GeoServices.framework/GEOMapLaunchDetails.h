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

@class NSString;

@interface GEOMapLaunchDetails : PBCodable <NSCopying> {

	NSString* _launchUri;
	NSString* _sourceAppId;

}

@property (nonatomic,readonly) BOOL hasSourceAppId; 
@property (nonatomic,retain) NSString * sourceAppId;              //@synthesize sourceAppId=_sourceAppId - In the implementation block
@property (nonatomic,readonly) BOOL hasLaunchUri; 
@property (nonatomic,retain) NSString * launchUri;                //@synthesize launchUri=_launchUri - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)launchUri;
-(void)setSourceAppId:(NSString *)arg1 ;
-(BOOL)hasLaunchUri;
-(NSString *)sourceAppId;
-(void)setLaunchUri:(NSString *)arg1 ;
-(BOOL)hasSourceAppId;
-(BOOL)readFrom:(id)arg1 ;
@end

