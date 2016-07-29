/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIGiftStepViewController.h>
#import <libobjc.A.dylib/SKUIGiftConfigurationObserver.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class SKUIGiftThemePickerFlowLayout, SKUIGiftThemeCollectionView, UIImage, UIPageControl, UITapGestureRecognizer, NSArray, NSString;

@interface SKUIGiftThemePickerViewController : SKUIGiftStepViewController <SKUIGiftConfigurationObserver, UICollectionViewDataSource, UICollectionViewDelegate> {

	BOOL _animatingScrollView;
	SKUIGiftThemePickerFlowLayout* _flowLayout;
	SKUIGiftThemeCollectionView* _collectionView;
	UIImage* _itemImage;
	UIPageControl* _pageControl;
	long long _selectedThemeIndex;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSArray* _themes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)_collectionView;
-(id)_flowLayout;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(void)_nextAction:(id)arg1 ;
-(void)_setItemImage:(id)arg1 error:(id)arg2 ;
-(void)_backgroundTapAction:(id)arg1 ;
-(void)_layoutCollectionViewWithTraits:(id)arg1 ;
-(double)_cardWidth;
-(void)_setSelectedThemeIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isIPadLarge;
-(double)_scrollInsetHorizontal:(id)arg1 ;
-(double)_cardHeight:(id)arg1 ;
-(double)_collectionViewWidth:(id)arg1 ;
-(void)giftConfigurationController:(id)arg1 didLoadImageForTheme:(id)arg2 ;
@end
