/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, NSString;

@interface AAUpdateProvisioningRequest : AARequest {

	ACAccount* _account;
	NSString* _authToken;

}

@property (nonatomic,retain) ACAccount * account;              //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSString * authToken;               //@synthesize authToken=_authToken - In the implementation block
+(Class)responseClass;
-(void)setAuthToken:(NSString *)arg1 ;
-(NSString *)authToken;
-(id)urlCredential;
-(id)initWithAccount:(id)arg1 token:(id)arg2 ;
-(id)urlRequest;
-(id)urlString;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(ACAccount *)arg1 ;
-(ACAccount *)account;
-(id)initWithURLString:(id)arg1 account:(id)arg2 ;
@end
