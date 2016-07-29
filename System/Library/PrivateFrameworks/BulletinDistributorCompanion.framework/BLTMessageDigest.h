/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSData;

@interface BLTMessageDigest : NSObject <NSCoding> {

	NSData* _messageDigest;

}

@property (nonatomic,retain) NSData * messageDigest;              //@synthesize messageDigest=_messageDigest - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)messageDigest;
-(BOOL)isEqualToMessageDigest:(id)arg1 ;
-(void)setMessageDigest:(NSData *)arg1 ;
-(id)initWithMessage:(id)arg1 ;
@end
