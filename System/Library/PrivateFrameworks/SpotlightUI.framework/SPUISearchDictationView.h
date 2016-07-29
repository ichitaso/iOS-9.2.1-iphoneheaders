/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SUICFlamesViewDelegate.h>
#import <libobjc.A.dylib/AFDictationDelegate.h>

@protocol SPUISearchDictationViewProtocol;
@class UIButton, SUICFlamesView, NSString;

@interface SPUISearchDictationView : UIView <SUICFlamesViewDelegate, AFDictationDelegate> {

	UIButton* _endpointButton;
	UIButton* _endpointButtonLandscape;
	SUICFlamesView* _flamesView;
	id<SPUISearchDictationViewProtocol> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)hide;
-(void)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)applicationWillResignActive;
-(float)audioLevelForFlamesView:(id)arg1 ;
-(void)applicationEnteredBackground;
-(void)endpointButtonPressed;
-(id)doneButtonTitleForLightBackground:(BOOL)arg1 ;
@end
