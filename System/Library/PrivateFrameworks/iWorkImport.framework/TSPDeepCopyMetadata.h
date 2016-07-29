/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class TSPComponentObjectUUIDMap, NSDictionary;

@interface TSPDeepCopyMetadata : TSPObject {

	long long _rootObjectIdentifier;
	unsigned long long _version;
	TSPComponentObjectUUIDMap* _componentObjectUUIDMap;
	NSDictionary* _cachedDataMap;

}

@property (nonatomic,readonly) long long rootObjectIdentifier;                                  //@synthesize rootObjectIdentifier=_rootObjectIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long version;                                      //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) TSPComponentObjectUUIDMap * componentObjectUUIDMap;              //@synthesize componentObjectUUIDMap=_componentObjectUUIDMap - In the implementation block
@property (nonatomic,readonly) NSDictionary * cachedDataMap;                                    //@synthesize cachedDataMap=_cachedDataMap - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(long long)rootObjectIdentifier;
-(TSPComponentObjectUUIDMap *)componentObjectUUIDMap;
-(id)initWithRootObject:(id)arg1 version:(unsigned long long)arg2 componentObjectUUIDMap:(id)arg3 cachedDataMap:(id)arg4 ;
-(NSDictionary *)cachedDataMap;
-(id)initWithContext:(id)arg1 ;
-(unsigned long long)version;
@end
