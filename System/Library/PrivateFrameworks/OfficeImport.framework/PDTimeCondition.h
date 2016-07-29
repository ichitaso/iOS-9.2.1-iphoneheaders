/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PDAnimationTarget;

@interface PDTimeCondition : NSObject {

	BOOL mHasDelay;
	int mDelay;
	BOOL mHasTriggerEvent;
	int mTriggerEvent;
	PDAnimationTarget* mTarget;

}
-(int)writeDelay;
-(void)dealloc;
-(id)init;
-(id)description;
-(int)delay;
-(void)setDelay:(int)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(BOOL)hasDelay;
-(BOOL)hasTriggerEvent;
-(int)triggerEvent;
-(void)setTriggerEvent:(int)arg1 ;
@end
