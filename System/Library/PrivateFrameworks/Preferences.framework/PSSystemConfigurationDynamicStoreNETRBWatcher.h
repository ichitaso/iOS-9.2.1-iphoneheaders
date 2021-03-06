/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfigurationDynamicStoreNETRBWatcher : NSObject {

	CFRunLoopSourceRef _scRunLoopSource;
	SCDynamicStoreRef _scDynamicStore;
	int _netrbState;
	int _netrbReason;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)readNETRBState:(int*)arg1 andReason:(int*)arg2 ;
-(void)getNETRBState:(int*)arg1 andReason:(int*)arg2 ;
-(void)sendStateUpdate;
@end

