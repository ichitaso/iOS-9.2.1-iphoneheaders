/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLEntry.h>

@class NSArray;

@interface PLEventForwardPowerStateEntry : PLEntry

@property (readonly) short state; 
@property (readonly) short event; 
@property (readonly) NSArray * reason; 
@property (readonly) BOOL isBasebandWake; 
+(void)load;
+(id)entryKey;
-(short)state;
-(short)event;
-(NSArray *)reason;
-(id)initEntryWithState:(short)arg1 withEvent:(short)arg2 withReason:(id)arg3 withDate:(id)arg4 ;
-(id)initEntryWithIOMessage:(unsigned)arg1 ;
-(BOOL)isBasebandWake;
@end

