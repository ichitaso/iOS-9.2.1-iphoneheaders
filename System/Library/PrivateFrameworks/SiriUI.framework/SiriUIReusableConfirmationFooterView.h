/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIReusableFooterView.h>

@class SiriUIKeyline, SAUIConfirmationOptions, UIButton;

@interface SiriUIReusableConfirmationFooterView : SiriUIReusableFooterView {

	SiriUIKeyline* _verticalKeyline;
	SAUIConfirmationOptions* _confirmationOptions;
	UIButton* _cancelButton;
	UIButton* _confirmButton;

}

@property (nonatomic,retain) SAUIConfirmationOptions * confirmationOptions;              //@synthesize confirmationOptions=_confirmationOptions - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;                                  //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,readonly) UIButton * confirmButton;                                 //@synthesize confirmButton=_confirmButton - In the implementation block
+(double)defaultHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)edgeInsets;
-(UIButton *)cancelButton;
-(SAUIConfirmationOptions *)confirmationOptions;
-(void)setConfirmationOptions:(SAUIConfirmationOptions *)arg1 ;
-(UIButton *)confirmButton;
@end
