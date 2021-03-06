/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@protocol CKPhotoPickerCollectionViewLayoutDelegate;
@interface CKPhotoPickerCollectionViewLayout : UICollectionViewFlowLayout {

	BOOL _hideSelectionBadges;
	id<CKPhotoPickerCollectionViewLayoutDelegate> _layoutDelegate;

}

@property (assign,nonatomic) BOOL hideSelectionBadges;                                                  //@synthesize hideSelectionBadges=_hideSelectionBadges - In the implementation block
@property (assign,nonatomic) id<CKPhotoPickerCollectionViewLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id<CKPhotoPickerCollectionViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<CKPhotoPickerCollectionViewLayoutDelegate>)arg1 ;
-(CGRect)_floatingSelectionBadgeFrameForItemFrame:(CGRect)arg1 visibleItemFrame:(CGRect)arg2 atIndexPath:(id)arg3 ;
-(id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg1 ;
-(void)setHideSelectionBadges:(BOOL)arg1 ;
-(BOOL)hideSelectionBadges;
@end

