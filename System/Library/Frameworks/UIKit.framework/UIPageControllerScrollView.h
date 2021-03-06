/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIPageController;

@interface UIPageControllerScrollView : UIScrollView {

	UIPageController* _pageController;

}

@property (assign,nonatomic) UIPageController * pageController;              //@synthesize pageController=_pageController - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)_scrollViewWillBeginDragging;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1 ;
-(void)_scrollViewDidEndDecelerating;
-(unsigned long long)_abuttedPagingEdges;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2 ;
-(UIPageController *)pageController;
-(void)setPageController:(UIPageController *)arg1 ;
@end

