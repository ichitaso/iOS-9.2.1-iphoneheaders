/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CECBusPollingOperationDelegate <NSObject>
@optional
-(void)pollingOperation:(id)arg1 deviceNotRespondingAtAddress:(unsigned char)arg2;
-(void)pollingOperation:(id)arg1 encounteredError:(id)arg2 forMessage:(id)arg3;

@required
-(BOOL)pollingOperation:(id)arg1 shouldSkipAddress:(unsigned char)arg2;
-(void)pollingOperationCompleted:(id)arg1;

@end

