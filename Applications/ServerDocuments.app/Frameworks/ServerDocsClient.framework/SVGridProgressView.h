/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/ServerDocuments.app/Frameworks/ServerDocsClient.framework/ServerDocsClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ServerDocsClient/ServerDocsClient-Structs.h>
#import <ServerDocsClient/SVProgressView.h>

@class CAShapeLayer, CALayer, UIImageView;

@interface SVGridProgressView : SVProgressView {

	BOOL _onLightBackground;
	BOOL _completed;
	CAShapeLayer* _backgroundRingLayer;
	CAShapeLayer* _progressLayer;
	CALayer* _maskLayer;
	UIImageView* _progressBlurredImageView;
	CAShapeLayer* _checkmarkLayer;
	CALayer* _progressLayerMask;

}

@property (assign,nonatomic) BOOL onLightBackground;                              //@synthesize onLightBackground=_onLightBackground - In the implementation block
@property (assign,nonatomic) BOOL completed;                                      //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) CAShapeLayer * backgroundRingLayer;                  //@synthesize backgroundRingLayer=_backgroundRingLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressLayer;                        //@synthesize progressLayer=_progressLayer - In the implementation block
@property (nonatomic,retain) CALayer * maskLayer;                                 //@synthesize maskLayer=_maskLayer - In the implementation block
@property (nonatomic,retain) UIImageView * progressBlurredImageView;              //@synthesize progressBlurredImageView=_progressBlurredImageView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * checkmarkLayer;                       //@synthesize checkmarkLayer=_checkmarkLayer - In the implementation block
@property (nonatomic,retain) CALayer * progressLayerMask;                         //@synthesize progressLayerMask=_progressLayerMask - In the implementation block
-(void)updateLayerPropertiesAnimated:(BOOL)arg1 ;
-(CAShapeLayer *)backgroundRingLayer;
-(void)setBackgroundRingLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)checkmarkLayer;
-(CGRect)_insetFrame;
-(double)_backgroundRingLineWidth;
-(CGRect)_backgroundRingLayerPathFrame;
-(BOOL)onLightBackground;
-(UIImageView *)progressBlurredImageView;
-(CALayer *)progressLayerMask;
-(void)setOnLightBackground:(BOOL)arg1 ;
-(void)setProgressBlurredImageView:(UIImageView *)arg1 ;
-(void)setCheckmarkLayer:(CAShapeLayer *)arg1 ;
-(void)setProgressLayerMask:(CALayer *)arg1 ;
-(BOOL)completed;
-(void)layoutSubviews;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setBackgroundImage:(id)arg1 ;
-(void)prepareForInterfaceBuilder;
-(CAShapeLayer *)progressLayer;
-(void)setProgressLayer:(CAShapeLayer *)arg1 ;
-(CALayer *)maskLayer;
-(void)setMaskLayer:(CALayer *)arg1 ;
@end

