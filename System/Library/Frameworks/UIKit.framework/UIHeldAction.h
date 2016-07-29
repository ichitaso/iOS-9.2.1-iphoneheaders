/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIDelayedAction.h>

@class NSDate;

@interface UIHeldAction : UIDelayedAction {

	BOOL _holding;
	NSDate* _holdBegan;
	double _baseDelay;
	double _timeBalance;

}
-(void)cancel;
-(void)touchWithDelay:(double)arg1 ;
-(void)unschedule;
-(void)hold;
-(void)resume;
-(BOOL)isHolding;
@end
