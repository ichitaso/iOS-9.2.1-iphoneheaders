/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet;

@interface IDSPushHandlerContext : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSSet* _topics;
	NSSet* _commands;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSSet * topics;                                      //@synthesize topics=_topics - In the implementation block
@property (nonatomic,copy) NSSet * commands;                                    //@synthesize commands=_commands - In the implementation block
-(void)dealloc;
-(void)setCommands:(NSSet *)arg1 ;
-(NSSet *)commands;
-(id)initWithQueue:(id)arg1 topics:(id)arg2 commands:(id)arg3 ;
-(NSSet *)topics;
-(void)setTopics:(NSSet *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end
