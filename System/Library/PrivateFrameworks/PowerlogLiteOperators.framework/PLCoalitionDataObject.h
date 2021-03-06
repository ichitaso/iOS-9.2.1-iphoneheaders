/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSValue;

@interface PLCoalitionDataObject : NSObject {

	NSString* _bundleID;
	NSString* _launchdName;
	NSValue* _coalStruct;
	unsigned long long _coalitionID;

}

@property (retain) NSString * bundleID;                         //@synthesize bundleID=_bundleID - In the implementation block
@property (retain) NSString * launchdName;                      //@synthesize launchdName=_launchdName - In the implementation block
@property (retain) NSValue * coalStruct;                        //@synthesize coalStruct=_coalStruct - In the implementation block
@property (assign) unsigned long long coalitionID;              //@synthesize coalitionID=_coalitionID - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)bundleID;
-(unsigned long long)coalitionID;
-(NSString *)launchdName;
-(NSValue *)coalStruct;
-(void)setLaunchdName:(NSString *)arg1 ;
-(void)setCoalStruct:(NSValue *)arg1 ;
-(void)setCoalitionID:(unsigned long long)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
@end

