/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@protocol SBWorkspaceAlertAnimationProviding;
@interface SBUIAnimationForAlertAnimationProvider : SBUIMainScreenAnimationController {

	id<SBWorkspaceAlertAnimationProviding> _alert;
	BOOL _visible;

}
-(id)initWithTransitionContextProvider:(id)arg1 alert:(id)arg2 visible:(BOOL)arg3 ;
-(void)dealloc;
-(void)_startAnimation;
@end
