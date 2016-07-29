/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class _UIPrintMessageAndSpinnerView;

@interface UIPrinterSearchingView : UIView {

	BOOL _constraintsSet;
	_UIPrintMessageAndSpinnerView* _messageAndSpinner;

}

@property (assign,nonatomic,__weak) _UIPrintMessageAndSpinnerView * messageAndSpinner;              //@synthesize messageAndSpinner=_messageAndSpinner - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(_UIPrintMessageAndSpinnerView *)messageAndSpinner;
-(void)searchTimeout;
-(void)setSearching:(BOOL)arg1 ;
-(void)setMessageAndSpinner:(_UIPrintMessageAndSpinnerView *)arg1 ;
@end
