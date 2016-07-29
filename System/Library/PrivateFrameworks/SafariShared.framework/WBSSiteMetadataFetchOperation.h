/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class WBSSiteMetadataRequest;

@interface WBSSiteMetadataFetchOperation : NSOperation {

	WBSSiteMetadataRequest* _request;
	long long _status;

}

@property (nonatomic,readonly) WBSSiteMetadataRequest * request;                              //@synthesize request=_request - In the implementation block
@property (assign,setter=_setStatus:,getter=_status,nonatomic) long long status;              //@synthesize status=_status - In the implementation block
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)init;
-(WBSSiteMetadataRequest *)request;
-(void)start;
-(id)initWithRequest:(id)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(long long)_status;
-(void)_setStatus:(long long)arg1 ;
@end
