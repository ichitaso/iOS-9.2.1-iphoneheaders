/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKBadgeTextView.h>

@class NSString;

@interface CMKExposureBiasTextView : CMKBadgeTextView {

	float _exposureBias;
	NSString* __lastText;

}

@property (assign,nonatomic) float exposureBias;                //@synthesize exposureBias=_exposureBias - In the implementation block
@property (nonatomic,retain) NSString * _lastText;              //@synthesize _lastText=__lastText - In the implementation block
-(id)_text;
-(CGSize)_textSize;
-(id)_textAttributes;
-(id)_textForExposureBias:(float)arg1 ;
-(void)setExposureBias:(float)arg1 ;
-(double)_textHorizontalInset;
-(double)_textHorizontalKerningOffset;
-(double)_textVerticalInset;
-(float)exposureBias;
-(NSString *)_lastText;
-(void)set_lastText:(NSString *)arg1 ;
@end

