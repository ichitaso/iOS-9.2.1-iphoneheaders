/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSRecognitionResultHandlingThreadDelegate;
#import <VoiceServices/VoiceServices-Structs.h>
@class NSMutableArray, NSConditionLock;

@interface VSRecognitionResultHandlingThread : NSObject {

	id<VSRecognitionResultHandlingThreadDelegate> _delegate;
	NSMutableArray* _requests;
	NSConditionLock* _lock;
	struct {
		unsigned running : 1;
		unsigned delegateDidHandleResults : 1;
		unsigned valid : 1;
	}  _resultHandlingFlags;

}
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)handleResults:(id)arg1 withHandler:(id)arg2 ;
-(void)_handleRequests;
-(void)_notifyRequestHandled:(id)arg1 ;
@end
