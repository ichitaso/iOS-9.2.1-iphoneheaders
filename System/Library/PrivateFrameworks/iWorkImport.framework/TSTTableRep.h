/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextHostRep.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol TSTTableAnimationController, TSTTableChromeProvider, TSTCanvasReferenceController, TSTTableRepDelegate, TSTTableKnobTrackerVisitorProtocol;
@class NSMutableArray, TSTTableCellTextEditingRep, TSTTableReferences, CAShapeLayer, CALayer, TSTCellSelection, TSTSelectionDragController, TSDKnobTracker, NSSet, TSWPStorage, TSWPHyperlinkField, NSMutableDictionary, TSTTableInfo, TSTTableModel, TSTLayout, TSTMasterLayout, TSTAnimation, TSTSearchReference, NSString;

@interface TSTTableRep : TSWPTextHostRep <UITextFieldDelegate> {

	CGRect mCanvasVisibleRect;
	CGRect mSearchSelectionBounds;
	double mCurrentScreenScale;
	TSUColumnRowRect mDirtyCellRange;
	BOOL mRecursivelyDrawingInContext;
	NSMutableArray* mAnimationStack;
	id<TSTTableAnimationController> mAnimationController;
	TSTTableCellTextEditingRep* mContainedTextEditingRep;
	SCD_Struct_TS315 mRatingsDragCellID;
	id<TSTTableChromeProvider> mTableChrome;
	TSTTableReferences* mReferences;
	CAShapeLayer* mHighlightedHyperlinkLayer;
	BOOL mIsAspectOperationInProgress;
	BOOL mIsZoomOperationInProgress;
	BOOL mIsZoomToEditOperationInProgress;
	TSUColumnRowRect mZoomToEditVisibleCellRange;
	CAShapeLayer* mFindSelectionHighlightLayer;
	CALayer* mTableCollaboratorCursorLayer;
	TSTCellSelection* mSourceFillSelection;
	TSTCellSelection* mTargetFillSelection;
	BOOL mWPEndedTableNameEditing;
	BOOL _settingSelection;
	TSTSelectionDragController* mCellDragController;
	BOOL mDragByHandleOnly;
	BOOL mSelectionUsesBezierPath;
	BOOL mSelectsCellOnInitialTap;
	BOOL mUsesWholeChromeResizer;
	id<TSTCanvasReferenceController> mCanvasReferenceController;
	id<TSTTableRepDelegate> mDelegate;
	TSDKnobTracker*<TSTTableKnobTrackerVisitorProtocol> mVisitorKnobTracker;
	NSSet* mVisibleFillKnobs;
	SCD_Struct_TS315 mEditingHyperlinkCellID;
	TSWPStorage* mHyperlinkParentStorage;
	BOOL mHyperlinkModified;
	BOOL mInspectingHyperlinkInEditingStorage;
	TSWPHyperlinkField* mHyperlinkField;
	CAShapeLayer* mCellEditingMaskLayer;
	BOOL mTableNameValid;
	NSMutableDictionary* mChildTextReps;

}

@property (nonatomic,readonly) TSTTableInfo * tableInfo; 
@property (nonatomic,readonly) TSTTableModel * tableModel; 
@property (nonatomic,readonly) TSTLayout * tableLayout; 
@property (nonatomic,readonly) TSTMasterLayout * masterLayout; 
@property (assign,nonatomic) id<TSTTableAnimationController> animationController; 
@property (nonatomic,readonly) id<TSTTableRepDelegate> delegate; 
@property (assign,nonatomic) TSTSelectionDragController * cellDragController; 
@property (nonatomic,readonly) CGAffineTransform transformToCanvas; 
@property (nonatomic,readonly) CGAffineTransform transformFromCanvas; 
@property (nonatomic,readonly) CGRect canvasVisibleRect; 
@property (nonatomic,readonly) id<TSTTableChromeProvider> tableChrome; 
@property (nonatomic,readonly) id<TSTCanvasReferenceController> canvasReferenceController; 
@property (nonatomic,readonly) TSTCellSelection * selection; 
@property (nonatomic,readonly) int selectionType; 
@property (assign,nonatomic) SCD_Struct_TS315 ratingsDragCellID; 
@property (nonatomic,readonly) BOOL isZoomToEditOperationInProgress; 
@property (nonatomic,readonly) TSTAnimation * currentAnimation; 
@property (nonatomic,retain) TSTSearchReference * activeSearchReference; 
@property (nonatomic,retain) NSMutableDictionary * childTextReps; 
@property (assign,getter=isTableNameValid,nonatomic) BOOL tableNameValid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3 ;
+(unsigned long long)p_countOfIdenticalCellsBetweenOutgoingTableModel:(id)arg1 incomingTableModel:(id)arg2 ;
+(Class)tableRepDelegateClass;
-(TSTTableModel *)tableModel;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(BOOL)arg3 ;
-(void)updateFromLayout;
-(CGRect)layerFrameInScaledCanvas;
-(void)setTextureStage:(unsigned long long)arg1 ;
-(BOOL)canDrawInParallel;
-(id)textureForContext:(id)arg1 ;
-(id)hitRep:(CGPoint)arg1 ;
-(id)hitRepChrome:(CGPoint)arg1 ;
-(id)childReps;
-(void)addAdditionalChildLayersToArray:(id)arg1 ;
-(void)recursivelyDrawInContext:(CGContextRef)arg1 ;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 ;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 ;
-(void)recursivelyPerformSelector:(SEL)arg1 ;
-(void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)repForDragging;
-(void)updateChildrenFromLayout;
-(TSTMasterLayout *)masterLayout;
-(TSTTableInfo *)tableInfo;
-(CGAffineTransform)transformToCanvas;
-(CGAffineTransform)transformFromCanvas;
-(id)editorSelection;
-(NSMutableDictionary *)childTextReps;
-(TSTAnimation *)currentAnimation;
-(void)setChildTextReps:(NSMutableDictionary *)arg1 ;
-(BOOL)p_shouldPerformOnChildTextReps:(SEL)arg1 ;
-(CGRect)deviceBoundsForCellRange:(TSUColumnRowRect)arg1 ;
-(void)validateVisibleRect;
-(BOOL)isTableNameValid;
-(void)setTableNameValid:(BOOL)arg1 ;
-(id<TSTTableChromeProvider>)tableChrome;
-(CGRect)canvasVisibleRect;
-(void)viewScaleDidChange;
-(void)screenScaleDidChange;
-(BOOL)mustDrawOnMainThreadForInteractiveCanvas;
-(void)pushAnimation:(id)arg1 ;
-(void)popAnimation;
-(void)asyncPostTextChangedInRange:(TSUColumnRowRect)arg1 ;
-(void)invalidateEditingCell;
-(CGRect)canvasBoundsForCellRange:(TSUColumnRowRect)arg1 ;
-(CGRect)boundsForCellSelection:(SCD_Struct_TS315)arg1 ;
-(void)contentsRectForCellRangeAcrossSpaces:(TSUColumnRowRect)arg1 contentsCenterInfo:(SCD_Struct_TS612*)arg2 canvasFrame:(CGRect*)arg3 contentsRect:(CGRect*)arg4 ;
-(void)validateStrokesInEditingSpillingTextRange;
-(void)willUpdateLayer:(id)arg1 ;
-(BOOL)isFullyVisibleWithBorder:(int)arg1 ;
-(void)updateDynamicModeForEditingSpillText;
-(void)didDrawCellImageFill:(id)arg1 inCellRange:(TSUColumnRowRect)arg2 ;
-(id)overlayLayers;
-(CGRect)p_alignedLayerFrameForLayoutSpace:(id)arg1 transform:(CGAffineTransform)arg2 ;
-(void)validateFrozenHeaderCorner;
-(void)validateFrozenHeaderRows;
-(void)validateFrozenHeaderColumns;
-(void)validateFrozenHeaderTableBodyMask;
-(void)invalidateFrozenHeaders;
-(BOOL)canDrawInBackgroundDuringScroll;
-(id)p_textImageForPath:(CGPathRef)arg1 shouldPulsate:(BOOL)arg2 ;
-(id<TSTCanvasReferenceController>)canvasReferenceController;
-(TSTSelectionDragController *)cellDragController;
-(void)setCellDragController:(TSTSelectionDragController *)arg1 ;
-(SCD_Struct_TS315)ratingsDragCellID;
-(void)setRatingsDragCellID:(SCD_Struct_TS315)arg1 ;
-(BOOL)isZoomToEditOperationInProgress;
-(TSTLayout *)tableLayout;
-(void)dealloc;
-(NSString *)description;
-(id<TSTTableRepDelegate>)delegate;
-(void)setAnimationController:(id<TSTTableAnimationController>)arg1 ;
-(id<TSTTableAnimationController>)animationController;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(TSTCellSelection *)selection;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)willBeRemoved;
-(int)selectionType;
-(BOOL)isDraggable;
-(void)orientationDidChange:(id)arg1 ;
@end

