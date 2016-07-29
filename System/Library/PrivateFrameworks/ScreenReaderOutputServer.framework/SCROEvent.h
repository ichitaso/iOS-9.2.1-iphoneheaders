/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface SCROEvent : NSObject {

	int _handlerType;
	NSMutableArray* _callbacks;
	NSMutableDictionary* _setDictionary;
	NSMutableDictionary* _getDictionary;
	NSMutableArray* _actions;
	BOOL _readOnly;

}
+(id)brailleEvent;
-(void)dealloc;
-(id)initForHandlerType:(int)arg1 ;
-(int)handlerType;
-(void)requestRegisterCallbackForKey:(int)arg1 ;
-(void)requestSetValue:(id)arg1 forKey:(int)arg2 ;
-(void)requestValueForKey:(int)arg1 ;
-(void)requestPerformActionForKey:(int)arg1 ;
-(id)claimValueForKey:(int)arg1 ;
-(void)setMainDictionary:(id)arg1 ;
-(id)mainDictionary;
-(void)setClaimDictionary:(id)arg1 ;
-(id)claimDictionary;
-(void)performWithHandler:(id)arg1 trusted:(BOOL)arg2 ;
@end
