/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSMutableDictionary;

@interface SCROBrailleDisplayAutoDetector : NSObject {

	BOOL _isDetectingDisplays;
	IONotificationPortRef _notificationPort;
	NSMutableDictionary* _iteratorDict;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)sharedDetector;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isAutoDetectEnabled;
-(void)detectDisplays;
-(void)stopDetectingDisplays;
@end

