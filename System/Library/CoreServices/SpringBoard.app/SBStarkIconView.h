/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconView.h>

@interface SBStarkIconView : SBIconView {

	BOOL _sbFocused;

}

@property (assign,getter=sb_isFocused,nonatomic) BOOL sb_focused;              //@synthesize sbFocused=_sbFocused - In the implementation block
+(CGSize)defaultIconSize;
+(CGRect)_rectForLayoutMetric:(int)arg1 ;
+(double)_labelHeight;
+(int)_defaultIconFormat;
+(BOOL)canShowLabelAccessoryView;
+(CGSize)maxLabelSize;
+(UIEdgeInsets)iconImagePaddingInsets;
-(void)sb_setIsFocused:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGRect)_frameForLabel;
-(id)_labelImageParameters;
-(void)sb_setIsFocused:(BOOL)arg1 ;
-(BOOL)sb_isFocused;
-(void)dealloc;
-(void)prepareForReuse;
@end
