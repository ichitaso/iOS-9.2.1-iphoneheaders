/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIButton.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol _SFNavigationBarURLButtonDelegate;
@class UIImageView, UIImage, UIGestureRecognizer, NSString;

@interface _SFNavigationBarURLButton : UIButton <UIGestureRecognizerDelegate> {

	UIImageView* _overlayImageView;
	UIImageView* _tintImageView;
	UIImage* _darkBackgroundImage;
	UIImage* _lightBackgroundImage;
	UIGestureRecognizer* _longPressGestureRecognizer;
	BOOL _showsDarkBackground;
	BOOL _usesLightOverlayAndTintAlpha;
	double _backgroundAlphaFactor;
	id<_SFNavigationBarURLButtonDelegate> _delegate;

}

@property (assign,nonatomic) double backgroundAlphaFactor;                                       //@synthesize backgroundAlphaFactor=_backgroundAlphaFactor - In the implementation block
@property (assign,nonatomic) BOOL showsDarkBackground;                                           //@synthesize showsDarkBackground=_showsDarkBackground - In the implementation block
@property (assign,nonatomic) BOOL usesLightOverlayAndTintAlpha;                                  //@synthesize usesLightOverlayAndTintAlpha=_usesLightOverlayAndTintAlpha - In the implementation block
@property (assign,nonatomic,__weak) id<_SFNavigationBarURLButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<_SFNavigationBarURLButtonDelegate>)arg1 ;
-(void)dealloc;
-(id<_SFNavigationBarURLButtonDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)copy:(id)arg1 ;
-(void)_updateBackgroundImageAnimated:(BOOL)arg1 ;
-(void)_dismissMenu:(id)arg1 ;
-(id)pasteButtonTitle;
-(void)pasteAndNavigate:(id)arg1 ;
-(void)setShowsDarkBackground:(BOOL)arg1 ;
-(void)setBackgroundAlphaFactor:(double)arg1 ;
-(void)setUsesLightOverlayAndTintAlpha:(BOOL)arg1 ;
-(double)backgroundAlphaFactor;
-(BOOL)showsDarkBackground;
-(BOOL)usesLightOverlayAndTintAlpha;
-(void)_handleLongPress:(id)arg1 ;
@end

