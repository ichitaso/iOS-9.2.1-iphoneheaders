/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMInvocationTrampoline : NSObject {

	id _target;

}

@property (retain) id target;              //@synthesize target=_target - In the implementation block
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)forwardInvocation:(id)arg1 ;
-(void)performInvocation:(id)arg1 ;
@end

