/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@protocol MKOverlayContainerViewDelegate;
@class NSMutableOrderedSet, NSMapTable, NSMutableArray, UIView, NSArray;

@interface MKOverlayContainerView : UIView {

	NSMutableOrderedSet* _overlays[2];
	NSMapTable* _overlayToDrawable[2];
	NSMutableArray* _drawables[2];
	NSMutableArray* _vkOverlays[2];
	UIView* _viewContainers[2];
	id<MKOverlayContainerViewDelegate> _delegate;
	double _mapZoomScale;

}

@property (assign,nonatomic,__weak) id<MKOverlayContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double mapZoomScale;                                             //@synthesize mapZoomScale=_mapZoomScale - In the implementation block
@property (nonatomic,readonly) NSArray * overlays; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MKOverlayContainerViewDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(id<MKOverlayContainerViewDelegate>)delegate;
-(void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2 ;
-(void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2 ;
-(void)addOverlay:(id)arg1 ;
-(NSArray *)overlays;
-(void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeOverlay:(id)arg1 ;
-(void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2 ;
-(id)overlaysInLevel:(long long)arg1 ;
-(void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 level:(long long)arg3 ;
-(void)addOverlay:(id)arg1 level:(long long)arg2 ;
-(void)addOverlays:(id)arg1 level:(long long)arg2 ;
-(void)insertOverlay:(id)arg1 belowOverlay:(id)arg2 ;
-(void)_updateContentScale:(id)arg1 ;
-(id)_viewContainerForLevel:(long long)arg1 ;
-(id)_considerAddingDrawable:(id)arg1 inAddRect:(SCD_Struct_MK2)arg2 level:(long long)arg3 ;
-(void)setMapZoomScale:(double)arg1 ;
-(void)_removeDrawable:(id)arg1 forOverlay:(id)arg2 level:(long long)arg3 ;
-(id)drawableForOverlay:(id)arg1 ;
-(void)_insertDrawable:(id)arg1 forOverlay:(id)arg2 atIndex:(long long)arg3 level:(long long)arg4 ;
-(SCD_Struct_MK2)_mapRectWithFractionOfVisible:(double)arg1 ;
-(long long)_levelForOverlay:(id)arg1 exists:(BOOL*)arg2 ;
-(void)_exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2 level:(long long)arg3 ;
-(long long)_drawableIndexForDrawable:(id)arg1 level:(long long)arg2 ;
-(double)mapZoomScale;
-(void)addAndRemoveOverlayViews;
-(void)_configureAndAddDrawable:(id)arg1 forOverlay:(id)arg2 level:(long long)arg3 ;
-(void)removeOverlays:(id)arg1 ;
-(void)addOverlays:(id)arg1 ;
@end
