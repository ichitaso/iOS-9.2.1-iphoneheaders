/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextHostRep.h>
#import <iWorkImport/TSCHChartRepPlatformProtocols.h>
#import <iWorkImport/TSCHSupportsRendering.h>

@class NSArray, TSCHSelectionPath, TSCHRendererLayer, TSCHChartLayout, CAShapeLayer, CALayer, TSCHLegendMoveKnob, TSCHSearchSelection, TSCHChartDrawableInfo, NSString;

@interface TSCHChartRep : TSWPTextHostRep <TSCHChartRepPlatformProtocols, TSCHSupportsRendering> {

	NSArray* mRenderers;
	BOOL mBuildingChunks;
	int mChunkPhase;
	long long mCurrentChunk;
	BOOL mBuildingFinalBackground;
	BOOL mBuildingFinalElements;
	BOOL mChunkTexturesValid;
	BOOL mInZoom;
	unsigned long long mInDynamicStandinOperation;
	unsigned long long mInDynamicStandinLayoutOperation;
	BOOL mIsKPFExportForMultiData;
	TSCHSelectionPath* mActiveTextEditingPath;
	TSCHRendererLayer* mLegendLayer;
	BOOL mForceSeparateLegendLayer;
	BOOL mIsLayerBasedRep;
	BOOL mInvalidateLegendLayerForLayerBasedRep;
	TSCHChartLayout* mChartLayout;
	BOOL mWantsPreviewLayout;
	BOOL mEditorIsEditingInfo;
	BOOL mMediatorEditingHaloLayerPathValid;
	CAShapeLayer* mMediatorEditingHaloLayer;
	BOOL mLegendBorderHaloLayerPathValid;
	CAShapeLayer* mLegendBorderHaloLayer;
	BOOL mChartRepGoingAway;
	BOOL mCDEIsEditingInfo;
	BOOL mCDECausedSetNeedsDisplay;
	BOOL mDrawingSearchReference;
	CALayer* mSubselectionKnobLayer;
	BOOL mFinishedBecomingSelected;
	TSCHLegendMoveKnob* mDynamicLegendKnob;
	BOOL mIs2DRepFor3DChartRep;
	/*^block*/id mDrawingOpStartBlock;
	/*^block*/id mDrawingOpEndBlock;
	int mRenderPassChunkPhase;
	CGPoint mLastSubselectionLayerRelativeReferencePosition;
	TSCHSearchSelection* _selection;

}

@property (nonatomic,readonly) long long currentChunk; 
@property (nonatomic,readonly) TSCHChartDrawableInfo * chartInfo; 
@property (nonatomic,readonly) TSCHChartLayout * chartLayout; 
@property (nonatomic,readonly) unsigned long long chartDeliveryStyle; 
@property (nonatomic,readonly) TSCHSearchSelection * selection;                               //@synthesize selection=_selection - In the implementation block
@property (nonatomic,readonly) BOOL forceRenderBlankBackground; 
@property (assign,nonatomic) BOOL chunkTexturesValid; 
@property (nonatomic,retain,readonly) TSCHSelectionPath * activeTextEditingPath; 
@property (nonatomic,readonly) BOOL drawingSearchReference; 
@property (nonatomic,readonly) NSString * animationFilter; 
@property (nonatomic,readonly) double viewScale; 
@property (nonatomic,readonly) double contentsScale; 
@property (nonatomic,readonly) BOOL chartRepGoingAway; 
@property (nonatomic,copy) id drawingOpStartBlock; 
@property (nonatomic,copy) id drawingOpEndBlock; 
@property (nonatomic,retain) TSCHLegendMoveKnob * dynamicLegendKnob; 
@property (nonatomic,readonly) BOOL is2DRepFor3DChartRep; 
@property (assign,nonatomic) BOOL forceSeparateLegendLayer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3 ;
-(id)referenceLinesToRender;
-(id)referenceLineLabelsSearchSelectionsToRender;
-(double)viewScale;
-(TSCHChartDrawableInfo *)chartInfo;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(TSCHChartLayout *)chartLayout;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 is2DRepFor3DChartRep:(BOOL)arg3 ;
-(void)renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(BOOL)renderGrid;
-(id)renderers;
-(BOOL)forceRenderBlankBackground;
-(BOOL)renderElementsShadowOnly;
-(BOOL)renderElementsWithoutShadows;
-(id)renderSeriesIndexSet;
-(id)renderValueIndexSetForSeries:(unsigned long long)arg1 ;
-(BOOL)renderElements;
-(BOOL)renderLabels;
-(BOOL)requireSeparateLabelLayer;
-(BOOL)isDrawingIntoPDF;
-(TSCHSelectionPath *)activeTextEditingPath;
-(BOOL)drawingSearchReference;
-(BOOL)renderReferenceLines;
-(void)p_checkFillPropertiesForDataListeningWithChangedProperties:(id)arg1 ;
-(id)drawableLayout;
-(void)updateFromLayout;
-(CGRect)frameInUnscaledCanvas;
-(BOOL)frameInUnscaledCanvasNeedsPaddingForShadows;
-(BOOL)inPrintPreviewMode;
-(CGRect)outerShadowFrame;
-(BOOL)buildShouldUseRenderer:(id)arg1 ;
-(BOOL)shouldUseRenderer:(id)arg1 ;
-(void)p_listenForDataChangesIfAppropriateForFill:(id)arg1 forProperty:(int)arg2 ;
-(BOOL)shouldUseChartAreaRectForEditMenuTargetRectMinY;
-(BOOL)messageIsVisible;
-(void)dismissMessageOverlayNowWithAnimation:(BOOL)arg1 ;
-(void)p_positionMessageView;
-(void)p_invalidateMessageOverlay;
-(void)p_removeOrShowAndPositionMessageOverlay;
-(NSString *)animationFilter;
-(long long)currentChunk;
-(unsigned long long)chartDeliveryStyle;
-(BOOL)planeIsVisible:(int)arg1 ;
-(void)setTextureStage:(unsigned long long)arg1 ;
-(BOOL)chunkTexturesValid;
-(void)clearRenderers;
-(void)protected_renderChunkInBounds:(CGRect)arg1 textureSet:(id)arg2 ;
-(void)setChunkTexturesValid:(BOOL)arg1 ;
-(id)renderSeriesIndexSetForFinalElements:(BOOL)arg1 ;
-(id)renderSeriesIndexSetForFinalElements:(BOOL)arg1 currentChunk:(long long)arg2 ;
-(id)renderValueIndexSetForSeries:(unsigned long long)arg1 finalElements:(BOOL)arg2 ;
-(id)renderValueIndexSetForSeries:(unsigned long long)arg1 finalElements:(BOOL)arg2 currentChunk:(long long)arg3 ;
-(int)planeState:(int)arg1 finalElements:(BOOL)arg2 chunkStage:(long long)arg3 ;
-(int)p_backgroundLikePlaneStateForEffectiveStage:(long long)arg1 ;
-(BOOL)p_hasBackgroundLayerForPieChart;
-(CGRect)convertUnscaledToBoundsRect:(CGRect)arg1 ;
-(void)beginDrawingOperation;
-(id)drawingOpStartBlock;
-(id)drawingOpEndBlock;
-(BOOL)is2DRepFor3DChartRep;
-(BOOL)renderTrendLinesForSeriesIndex:(unsigned long long)arg1 ;
-(BOOL)isLayerBasedRep;
-(id)p_legendRenderer;
-(BOOL)canDrawInParallel;
-(CGRect)geometryFrame;
-(BOOL)p_hasBackgroundFill;
-(CGPoint)scaledSubpixelOffsetFromLayerFrameInScaledCanvas;
-(void)p_deleteMessageView;
-(CGRect)targetRectForEditMenu;
-(BOOL)p_chartShouldDisplayMessage;
-(void)p_forceDismissTransientMessage;
-(void)p_messageAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)displayMessage:(id)arg1 zPosition:(double)arg2 style:(int)arg3 ;
-(void)p_topBarsShowedUp:(id)arg1 ;
-(void)updateMessageOverlayNow;
-(void)willBeginZooming;
-(void)didEndZooming;
-(void)editor:(id)arg1 isSelectingInfos:(id)arg2 ;
-(void)editor:(id)arg1 isDeselectingInfos:(id)arg2 ;
-(id)textureForContext:(id)arg1 ;
-(int)planeState:(int)arg1 finalElements:(BOOL)arg2 ;
-(BOOL)p_legendHitByLayoutPoint:(CGPoint)arg1 ;
-(id)p_textImageForPath:(CGPathRef)arg1 renderer:(id)arg2 selection:(id)arg3 shouldPulsate:(BOOL)arg4 ;
-(void)endDrawingOperation;
-(BOOL)forceSeparateLegendLayer;
-(void)setForceSeparateLegendLayer:(BOOL)arg1 ;
-(TSCHLegendMoveKnob *)dynamicLegendKnob;
-(void)setDynamicLegendKnob:(TSCHLegendMoveKnob *)arg1 ;
-(BOOL)chartRepGoingAway;
-(void)setDrawingOpStartBlock:(id)arg1 ;
-(void)setDrawingOpEndBlock:(id)arg1 ;
-(BOOL)shadowsEnabled;
-(void)dealloc;
-(double)contentsScale;
-(BOOL)isEditing;
-(TSCHSearchSelection *)selection;
-(id)geometry;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

