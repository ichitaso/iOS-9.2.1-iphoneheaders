/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface IDSValidationCertificateMessage : IDSBaseMessage <NSCopying> {

	NSData* _responseCertificateData;
	NSData* _pushToken;

}

@property (nonatomic,copy) NSData * responseCertificateData;              //@synthesize responseCertificateData=_responseCertificateData - In the implementation block
@property (nonatomic,copy) NSData * pushToken;                            //@synthesize pushToken=_pushToken - In the implementation block
-(NSData *)responseCertificateData;
-(void)setResponseCertificateData:(NSData *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)wantsHTTPHeaders;
-(BOOL)wantsBinaryPush;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsHTTPGet;
-(BOOL)wantsBagKey;
-(double)anisetteHeadersTimeout;
-(long long)responseCommand;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(long long)command;
-(id)messageBody;
-(id)requiredKeys;
-(void)setPushToken:(NSData *)arg1 ;
-(NSData *)pushToken;
-(id)bagKey;
@end

