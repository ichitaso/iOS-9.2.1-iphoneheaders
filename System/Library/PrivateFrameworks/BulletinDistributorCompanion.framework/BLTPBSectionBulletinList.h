/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface BLTPBSectionBulletinList : PBCodable <NSCopying> {

	NSMutableArray* _bulletinIdentifiers;
	NSString* _sectionID;

}

@property (nonatomic,retain) NSString * sectionID;                              //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) NSMutableArray * bulletinIdentifiers;              //@synthesize bulletinIdentifiers=_bulletinIdentifiers - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)sectionID;
-(void)addBulletinIdentifier:(id)arg1 ;
-(unsigned long long)bulletinIdentifiersCount;
-(void)clearBulletinIdentifiers;
-(id)bulletinIdentifierAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)bulletinIdentifiers;
-(void)setBulletinIdentifiers:(NSMutableArray *)arg1 ;
-(void)setSectionID:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

