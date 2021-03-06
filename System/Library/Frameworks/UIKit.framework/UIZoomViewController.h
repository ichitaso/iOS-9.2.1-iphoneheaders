/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>

@class UIWindow, UIButton;

@interface UIZoomViewController : UIViewController {

	UIWindow* _window;
	UIButton* _zoomButton;

}
-(void)dealloc;
-(id)init;
-(id)screen;
-(id)_window;
-(void)loadView;
-(BOOL)isClassicControlWindow:(id)arg1 ;
-(void)_setupPositioningAndRotationForInterfaceOrientation:(long long)arg1 offscreen:(BOOL)arg2 ;
-(void)_zoomOrientationChange:(id)arg1 ;
-(void)_applicationDidFinishLaunching:(id)arg1 ;
-(void)_suspendAnimationStarted:(id)arg1 ;
-(void)_updateZoomButtonTitle;
-(id)_zoomText:(BOOL)arg1 ;
-(void)_changeZoom:(id)arg1 ;
-(void)_zoomOrientationAnimationFinished:(id)arg1 finished:(BOOL)arg2 context:(void*)arg3 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI35*)arg1 forWindow:(id)arg2 ;
@end

