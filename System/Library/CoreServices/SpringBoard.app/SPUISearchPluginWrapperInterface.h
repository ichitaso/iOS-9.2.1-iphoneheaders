/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPUISearchPluginWrapperInterface
@property (assign,nonatomic) BOOL needsStatusBarLayoutLayer; 
@property (assign,getter=isDisplayLayoutElementActive,nonatomic) BOOL displayLayoutElementActive; 
@property (assign,nonatomic) BOOL needsFakeStatusBarForModalPresentation; 
@required
-(double)_accessibilityActivationAnimationStartDelay;
-(void)requestGestureResetAnimated:(BOOL)arg1;
-(void)searchViewControllerWillTriggerLaunch;
-(BOOL)needsStatusBarLayoutLayer;
-(void)setNeedsStatusBarLayoutLayer:(BOOL)arg1;
-(BOOL)isDisplayLayoutElementActive;
-(void)setDisplayLayoutElementActive:(BOOL)arg1;
-(BOOL)needsFakeStatusBarForModalPresentation;
-(void)setNeedsFakeStatusBarForModalPresentation:(BOOL)arg1;

@end
