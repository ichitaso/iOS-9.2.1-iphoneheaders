/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDNanoSyncPersistentUserInfoCopying.h>
#import <libobjc.A.dylib/HDNanoSyncDescription.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface HDCodableNanoSyncChangeSet : PBCodable <HDNanoSyncPersistentUserInfoCopying, HDNanoSyncDescription, NSCopying> {

	NSMutableArray* _changes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * changes;              //@synthesize changes=_changes - In the implementation block
+(id)retreiveFromPersistentUserInfo:(id)arg1 ;
+(id)persistentUserInfoKey;
+(id)changeSetWithChanges:(id)arg1 ;
-(void)addToPersistentUserInfo:(id)arg1 ;
-(id)copyForPersistentUserInfo;
-(id)nanoSyncDescription;
-(void)addChanges:(id)arg1 ;
-(NSMutableArray *)changes;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)changesCount;
-(void)clearChanges;
-(id)changesAtIndex:(unsigned long long)arg1 ;
-(void)setChanges:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

