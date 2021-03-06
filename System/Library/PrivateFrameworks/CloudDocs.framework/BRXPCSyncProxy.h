/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@protocol OS_dispatch_group;
@class NSObject, NSError;

@interface BRXPCSyncProxy : NSProxy {

	NSObject* _target;
	NSObject*<OS_dispatch_group> _group;
	NSError* _error;
	id _result;
	int _nested;

}

@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id result;                    //@synthesize result=_result - In the implementation block
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)result;
-(void)setResult:(id)arg1 ;
-(NSError *)error;
-(void)setObjResult:(id)arg1 error:(id)arg2 ;
-(id)resultWithTimeout:(int)arg1 ;
-(id)initWithXPCObject:(id)arg1 ;
-(void)setBoolResult:(BOOL)arg1 error:(id)arg2 ;
-(void)finalize;
-(void)setError:(NSError *)arg1 ;
@end

