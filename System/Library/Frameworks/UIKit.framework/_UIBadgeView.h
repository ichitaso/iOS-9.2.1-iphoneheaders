/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface _UIBadgeView : UIView {

	UIView* _value;
	UIView* _background;
	UIView* _alternate;

}
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(id)initWithValue:(id)arg1 blinks:(BOOL)arg2 ;
-(void)setBlinks:(BOOL)arg1 ;
-(void)_updateLabelFont;
-(void)_updateBackgroundBlinks:(BOOL)arg1 ;
@end

