/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMEffectsRendererDelegate <NSObject>
@required
-(void)cameraEffectsRendererDidStartPreview:(id)arg1;
-(void)cameraEffectsRenderer:(id)arg1 requestsPreviewLayerEnabled:(BOOL)arg2;
-(void)cameraEffectsRenderer:(id)arg1 requestsVideoDataOutputEnabled:(BOOL)arg2;
-(void)cameraEffectsRenderer:(id)arg1 willTransitionToShowGrid:(BOOL)arg2;
-(void)cameraEffectsRenderer:(id)arg1 didStartTransitionToShowGrid:(BOOL)arg2 animated:(BOOL)arg3;
-(void)cameraEffectsRenderer:(id)arg1 didFinishTransitionToShowGrid:(BOOL)arg2;
-(void)cameraEffectsRenderer:(id)arg1 didSelectFilterType:(long long)arg2;

@end

