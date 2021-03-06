/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VTPhraseSpotter, VTXListenerDelegate, NSXPCListener;

@interface VTStateManager : NSObject {

	/*^block*/id _callback;
	/*^block*/id _callbackWithMessage;
	VTPhraseSpotter* _phraseSpotter;
	BOOL _needBatteryPolicyOverride;
	VTXListenerDelegate* _listenerDelegate;
	NSXPCListener* _listener;

}
+(id)_serviceClient;
+(BOOL)enabledByAssertion;
+(void)requestPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 ;
+(BOOL)onBattery;
+(void)requestVoiceTriggerEnabled:(BOOL)arg1 forReason:(id)arg2 ;
-(id)getModel;
-(id)initWithProperty:(id)arg1 callbackWithMessage:(/*^block*/id)arg2 ;
-(id)getPhraseSpotter;
-(void)dealloc;
-(void)notify:(BOOL)arg1 ;
-(BOOL)needBatteryPolicyOverride;
-(id)initWithStateTransitionCallback:(/*^block*/id)arg1 ;
@end

