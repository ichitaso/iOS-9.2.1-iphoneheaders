/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSMTraceBuffer, NSDictionary;

@interface TSUQuickTestMeasurement : NSObject {

	TSMTraceBuffer* mBuffer;
	NSDictionary* mPrevious;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedManager;
+(id)_singletonAlloc;
-(id)p_niceString:(unsigned long long)arg1 withPrefix:(id)arg2 ;
-(id)getPreviousTimeForKey:(id)arg1 ;
-(id)displayTime:(unsigned long long)arg1 forClassAndMethodName:(id)arg2 ;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setup;
-(void)teardown;
@end
