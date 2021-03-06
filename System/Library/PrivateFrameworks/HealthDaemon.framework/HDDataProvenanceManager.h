/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol HDHealthDaemon;
@class NSString, NSLock, NSNumber, HDDatabaseValueCache;

@interface HDDataProvenanceManager : NSObject <HDDiagnosticObject> {

	id<HDHealthDaemon> _healthDaemon;
	NSString* _localSourceVersion;
	NSLock* _propertyLock;
	NSNumber* _propertyLock_localSourceID;
	NSNumber* _propertyLock_localDeviceID;
	NSNumber* _propertyLock_deviceNoneID;
	int _defaultsLoaded;
	HDDatabaseValueCache* _persistentIDsByProvenanceKey;
	HDDatabaseValueCache* _originProvenanceByPersistentID;
	NSString* _localBuildNumber;
	NSString* _localDeviceModel;

}

@property (nonatomic,retain) HDDatabaseValueCache * persistentIDsByProvenanceKey;                //@synthesize persistentIDsByProvenanceKey=_persistentIDsByProvenanceKey - In the implementation block
@property (nonatomic,retain) HDDatabaseValueCache * originProvenanceByPersistentID;              //@synthesize originProvenanceByPersistentID=_originProvenanceByPersistentID - In the implementation block
@property (nonatomic,copy) NSString * localBuildNumber;                                          //@synthesize localBuildNumber=_localBuildNumber - In the implementation block
@property (nonatomic,copy) NSString * localDeviceModel;                                          //@synthesize localDeviceModel=_localDeviceModel - In the implementation block
@property (nonatomic,readonly) NSNumber * localSourceID; 
@property (nonatomic,readonly) NSNumber * localDeviceID; 
@property (nonatomic,readonly) NSNumber * deviceNoneID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)diagnosticDescription;
-(id)defaultLocalDataProvenance;
-(id)initWithHealthDaemon:(id)arg1 ;
-(id)provenanceEntityForProvenance:(id)arg1 withError:(id*)arg2 ;
-(id)originProvenanceForPersistentID:(long long)arg1 inDatabase:(id)arg2 ;
-(id)dataProvenanceDefaultsWithSyncProvenance:(long long)arg1 deviceModel:(id)arg2 buildNumber:(id)arg3 sourceID:(id)arg4 deviceID:(id)arg5 sourceVersion:(id)arg6 ;
-(id)_lookupOrInsertProvenance:(id)arg1 withError:(id*)arg2 ;
-(void)_loadDefaults;
-(NSNumber *)deviceNoneID;
-(NSString *)localDeviceModel;
-(NSString *)localBuildNumber;
-(NSNumber *)localSourceID;
-(void)setDeviceNoneID:(NSNumber *)arg1 ;
-(void)setLocalSourceID:(NSNumber *)arg1 ;
-(NSNumber *)localDeviceID;
-(void)setLocalDeviceID:(NSNumber *)arg1 ;
-(void)checkDefaultsLoaded;
-(id)localDataProvenanceForSourceEntity:(id)arg1 version:(id)arg2 deviceEntity:(id)arg3 ;
-(HDDatabaseValueCache *)persistentIDsByProvenanceKey;
-(void)setPersistentIDsByProvenanceKey:(HDDatabaseValueCache *)arg1 ;
-(HDDatabaseValueCache *)originProvenanceByPersistentID;
-(void)setOriginProvenanceByPersistentID:(HDDatabaseValueCache *)arg1 ;
-(void)setLocalBuildNumber:(NSString *)arg1 ;
-(void)setLocalDeviceModel:(NSString *)arg1 ;
@end

