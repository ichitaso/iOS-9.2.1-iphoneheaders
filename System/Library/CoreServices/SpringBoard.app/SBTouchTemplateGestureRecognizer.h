/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@class NSArray, UIGestureRecognizerTransformAnalyzer, NSMutableArray, NSMapTable, SBTouchTemplate, SBPolygon;

@interface SBTouchTemplateGestureRecognizer : UIGestureRecognizer {

	NSArray* _templates;
	double _animationDistance;
	long long _requiredDirectionality;
	UIGestureRecognizerTransformAnalyzer* _transformAnalyzer;
	NSMutableArray* _possibleTemplates;
	NSMapTable* _initialTouchPointMap;
	SBTouchTemplate* _matchedTemplate;
	SBPolygon* _matchedPolygon;
	unsigned long long _failedRecognitionAttempts;
	unsigned long long _trackingTouchCount;
	double _cumulativeMotion;
	double _cumulativeMotionEnvelope;
	double _smoothedIncrementalMotion;

}

@property (assign,nonatomic) id<SBTouchTemplateGestureRecognizerDelegate> delegate; 
@property (nonatomic,readonly) double cumulativePercentage; 
@property (nonatomic,retain) NSArray * templates;                                                                                                               //@synthesize templates=_templates - In the implementation block
@property (assign,nonatomic) double animationDistance;                                                                                                          //@synthesize animationDistance=_animationDistance - In the implementation block
@property (assign,nonatomic) long long requiredDirectionality;                                                                                                  //@synthesize requiredDirectionality=_requiredDirectionality - In the implementation block
@property (nonatomic,retain,readonly) UIGestureRecognizerTransformAnalyzer * transformAnalyzer;                                                                 //@synthesize transformAnalyzer=_transformAnalyzer - In the implementation block
@property (getter=_possibleTemplates,nonatomic,retain,readonly) NSMutableArray * possibleTemplates;                                                             //@synthesize possibleTemplates=_possibleTemplates - In the implementation block
@property (getter=_initialTouchPointMap,nonatomic,retain,readonly) NSMapTable * initialTouchPointMap;                                                           //@synthesize initialTouchPointMap=_initialTouchPointMap - In the implementation block
@property (setter=_setMatchedTemplate:,getter=_matchedTemplate,nonatomic,retain) SBTouchTemplate * matchedTemplate;                                             //@synthesize matchedTemplate=_matchedTemplate - In the implementation block
@property (setter=_setMatchedPolygon:,getter=_matchedPolygon,nonatomic,retain) SBPolygon * matchedPolygon;                                                      //@synthesize matchedPolygon=_matchedPolygon - In the implementation block
@property (assign,setter=_setFailedRecognitionAttempts:,getter=_failedRecognitionAttempts,nonatomic) unsigned long long failedRecognitionAttempts;              //@synthesize failedRecognitionAttempts=_failedRecognitionAttempts - In the implementation block
@property (assign,setter=_setTrackingTouchCount:,getter=_trackingTouchCount,nonatomic) unsigned long long trackingTouchCount;                                   //@synthesize trackingTouchCount=_trackingTouchCount - In the implementation block
@property (assign,setter=_setCumulativeMotion:,getter=_cumulativeMotion,nonatomic) double cumulativeMotion;                                                     //@synthesize cumulativeMotion=_cumulativeMotion - In the implementation block
@property (assign,setter=_setCumulativeMotionEnvelope:,getter=_cumulativeMotionEnvelope,nonatomic) double cumulativeMotionEnvelope;                             //@synthesize cumulativeMotionEnvelope=_cumulativeMotionEnvelope - In the implementation block
@property (assign,setter=_setSmoothedIncrementalMotion:,getter=_smoothedIncrementalMotion,nonatomic) double smoothedIncrementalMotion;                          //@synthesize smoothedIncrementalMotion=_smoothedIncrementalMotion - In the implementation block
-(double)cumulativePercentage;
-(UIGestureRecognizerTransformAnalyzer *)transformAnalyzer;
-(BOOL)hasSignificantMotionToBegin;
-(void)_log:(id)arg1 ;
-(double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2 ;
-(void)setRequiredDirectionality:(long long)arg1 ;
-(void)setTemplates:(NSArray *)arg1 ;
-(double)animationDistance;
-(long long)projectedCompletionTypeForInterval:(double)arg1 ;
-(double)_projectedMotionForInterval:(double)arg1 ;
-(BOOL)_directionallyAcceptMotion:(double)arg1 ;
-(long long)requiredDirectionality;
-(id)_matchedTemplate;
-(void)_updateForTouchesBeganOrMoved:(id)arg1 ;
-(void)_updateForTouchesCancelledOrEnded:(id)arg1 ;
-(void)_failMeForReason:(id)arg1 ;
-(id)_polygonForTouches:(id)arg1 ;
-(void)_attemptTemplateMatchWithTouches:(id)arg1 polygon:(id)arg2 ;
-(void)_computeGestureMotionWithTouches:(id)arg1 polygon:(id)arg2 ;
-(NSArray *)templates;
-(unsigned long long)_failedRecognitionAttempts;
-(void)_setMatchedTemplate:(id)arg1 ;
-(void)_setMatchedPolygon:(id)arg1 ;
-(id)_matchedPolygon;
-(id)_possibleTemplates;
-(void)setAnimationDistance:(double)arg1 ;
-(id)_initialTouchPointMap;
-(void)_setFailedRecognitionAttempts:(unsigned long long)arg1 ;
-(unsigned long long)_trackingTouchCount;
-(void)_setTrackingTouchCount:(unsigned long long)arg1 ;
-(double)_cumulativeMotion;
-(void)_setCumulativeMotion:(double)arg1 ;
-(double)_cumulativeMotionEnvelope;
-(void)_setCumulativeMotionEnvelope:(double)arg1 ;
-(double)_smoothedIncrementalMotion;
-(void)_setSmoothedIncrementalMotion:(double)arg1 ;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)_reset;
-(void)log:(id)arg1 ;
@end
