/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIActivityIndicatorView;

@interface HLPHelpLoadingView : UIView {

	UIImageView* _errorImageView;
	UILabel* _errorTitleLabel;
	UILabel* _errorMessageLabel;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
-(id)init;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)showActivityIndicator:(BOOL)arg1 ;
-(void)showNoConnectionErrorMessage;
-(void)showDefaultErrorMessage;
-(void)removeErrorView;
-(void)showErrorWithTitle:(id)arg1 message:(id)arg2 ;
@end

