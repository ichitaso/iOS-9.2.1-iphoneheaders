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

@class NSString, NSMutableArray;

@interface GEOPDAttribution : PBCodable <NSCopying> {

	NSString* _actionUrlComponent;
	NSMutableArray* _attributionUrls;
	NSString* _externalComponentId;
	NSString* _externalItemId;
	NSString* _vendorId;

}

@property (nonatomic,readonly) BOOL hasVendorId; 
@property (nonatomic,retain) NSString * vendorId;                           //@synthesize vendorId=_vendorId - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalItemId; 
@property (nonatomic,retain) NSString * externalItemId;                     //@synthesize externalItemId=_externalItemId - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalComponentId; 
@property (nonatomic,retain) NSString * externalComponentId;                //@synthesize externalComponentId=_externalComponentId - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributionUrls;              //@synthesize attributionUrls=_attributionUrls - In the implementation block
@property (nonatomic,readonly) BOOL hasActionUrlComponent; 
@property (nonatomic,retain) NSString * actionUrlComponent;                 //@synthesize actionUrlComponent=_actionUrlComponent - In the implementation block
+(id)attributionForPlaceDataPhotos:(id)arg1 ;
+(id)attributionForPlaceDataEncyclopedia:(id)arg1 ;
+(id)attributionForPlaceDataEntity:(id)arg1 ;
+(id)attributionForPlaceDataReview:(id)arg1 ;
-(BOOL)_isYelp;
-(id)_attributionKey;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)externalComponentId;
-(BOOL)hasVendorId;
-(unsigned long long)attributionUrlsCount;
-(void)setExternalComponentId:(NSString *)arg1 ;
-(NSMutableArray *)attributionUrls;
-(void)setActionUrlComponent:(NSString *)arg1 ;
-(void)setAttributionUrls:(NSMutableArray *)arg1 ;
-(BOOL)hasExternalItemId;
-(id)attributionUrlAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasActionUrlComponent;
-(NSString *)vendorId;
-(NSString *)actionUrlComponent;
-(BOOL)hasExternalComponentId;
-(void)setVendorId:(NSString *)arg1 ;
-(void)setExternalItemId:(NSString *)arg1 ;
-(void)clearAttributionUrls;
-(NSString *)externalItemId;
-(void)addAttributionUrl:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

