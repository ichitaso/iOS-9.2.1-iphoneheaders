/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AirPlayControllerSync
@required
-(void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3;
-(int)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3;
-(int)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 response:(id*)arg4;
-(id)getProperty:(id)arg1 qualifier:(id)arg2 status:(int*)arg3;

@end
