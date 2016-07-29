/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:21:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAXEventProcessorDelegate <NSObject>
@required
-(/*function pointer*/void**)gaxStateWithGAXEventProcessor:(id)arg1;
-(void)eventProcessor:(id)arg1 transitionToMode:(unsigned)arg2;
-(void)unlockDeviceWithEventProcessor:(id)arg1;
-(void)eventProcessor:(id)arg1 showAlertWithType:(int)arg2;
-(void)monitorForTouchIDWithEventProcessor:(id)arg1;
-(void)eventProcessor:(id)arg1 updateAssistiveTouchBootstrapPort:(unsigned)arg2;
-(void)eventProcessor:(id)arg1 shouldAllowTripleClickSheet:(BOOL*)arg2 tripleClickAlertIsVisible:(BOOL*)arg3;
-(id)ignoredTouchRegionsForEventProcessor:(id)arg1;

@end
