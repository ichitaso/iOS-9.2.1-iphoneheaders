/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _MPStreamingDownloadSessionUniqueKey : NSObject {

	NSString* _buyParameters;
	long long _storeAdamID;

}

@property (nonatomic,copy) NSString * buyParameters;              //@synthesize buyParameters=_buyParameters - In the implementation block
@property (assign,nonatomic) long long storeAdamID;               //@synthesize storeAdamID=_storeAdamID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)buyParameters;
-(void)setBuyParameters:(NSString *)arg1 ;
-(long long)storeAdamID;
-(void)setStoreAdamID:(long long)arg1 ;
@end

