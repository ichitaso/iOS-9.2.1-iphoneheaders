/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SACFAbstractClientCommandCompleted.h>

@class SACFProvideContext;

@interface SACFFlowCompleted : SACFAbstractClientCommandCompleted

@property (nonatomic,retain) SACFProvideContext * updateContext; 
+(id)failureResponseWithAceId:(id)arg1 logs:(id)arg2 ;
+(id)clientFlowCompletedWithRefId:(id)arg1 status:(long long)arg2 context:(id)arg3 contextVersion:(id)arg4 logs:(id)arg5 ;
+(id)successResponseWithAceId:(id)arg1 logs:(id)arg2 ;
+(id)flowCompleted;
+(id)flowCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SACFProvideContext *)updateContext;
-(void)setUpdateContext:(SACFProvideContext *)arg1 ;
-(id)encodedClassName;
@end
