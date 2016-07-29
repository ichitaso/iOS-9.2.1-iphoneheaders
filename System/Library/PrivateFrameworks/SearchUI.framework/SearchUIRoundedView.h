/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class UIColor;

@interface SearchUIRoundedView : UIImageView {

	BOOL _topCornersAreRounded;
	BOOL _bottomCornersAreRounded;
	UIColor* _color;

}

@property (assign) BOOL topCornersAreRounded;                 //@synthesize topCornersAreRounded=_topCornersAreRounded - In the implementation block
@property (assign) BOOL bottomCornersAreRounded;              //@synthesize bottomCornersAreRounded=_bottomCornersAreRounded - In the implementation block
@property (retain) UIColor * color;                           //@synthesize color=_color - In the implementation block
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(id)imageWithCornersRoundedTop:(BOOL)arg1 roundedBottom:(BOOL)arg2 ;
-(BOOL)topCornersAreRounded;
-(void)setTopCornersAreRounded:(BOOL)arg1 ;
-(BOOL)bottomCornersAreRounded;
-(void)setBottomCornersAreRounded:(BOOL)arg1 ;
-(void)updateCornersRoundTop:(BOOL)arg1 roundBottom:(BOOL)arg2 ;
@end
