/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BLTWatchKitAppDefinition : NSObject {

	BOOL _isInstalled;
	NSString* _containerBundleID;
	NSString* _watchKitAppBundleID;

}

@property (nonatomic,readonly) NSString * containerBundleID;                //@synthesize containerBundleID=_containerBundleID - In the implementation block
@property (nonatomic,readonly) NSString * watchKitAppBundleID;              //@synthesize watchKitAppBundleID=_watchKitAppBundleID - In the implementation block
@property (nonatomic,readonly) BOOL isInstalled;                            //@synthesize isInstalled=_isInstalled - In the implementation block
-(BOOL)isInstalled;
-(id)initWithContainerBundleID:(id)arg1 watchKitAppBundleID:(id)arg2 isInstalled:(BOOL)arg3 ;
-(NSString *)containerBundleID;
-(NSString *)watchKitAppBundleID;
@end

