/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CUIKSingleDayTimelineViewItem, CUIKSingleDayTimelineGeometryDelegate, CUIKSingleDayTimelineLayoutScreenUtils;
#import <CalendarUIKit/CalendarUIKit-Structs.h>
@class NSArray, NSMutableArray, NSDate, NSCalendar;

@interface CUIKSingleDayTimelineLayout : NSObject {

	NSArray* _occurrences;
	unsigned long long _currentOccurrenceIndex;
	id<CUIKSingleDayTimelineViewItem> _currentOccurrence;
	NSMutableArray* _partitions;
	NSMutableArray* _occurrenceBuckets;
	NSMutableArray* _collidingOccurrences;
	NSDate* _startOfDay;
	NSDate* _endOfDay;
	double _startOfDayAbsoluteTime;
	double _endOfDayAbsoluteTime;
	CGRect _frame;
	NSCalendar* _calendar;
	id<CUIKSingleDayTimelineGeometryDelegate> _geometryDelegate;
	id<CUIKSingleDayTimelineLayoutScreenUtils> _screenUtilsDelegate;

}
-(BOOL)_inputIsInvalid;
-(void)_initializeFirstGridStripe;
-(void)_calculateVerticalFrameAspectsForOccurrence:(id)arg1 ;
-(void)_generateNewPartitions;
-(void)_mergePartitions;
-(void)_findCollidingOccurrences;
-(void)_putCollidingOccurrencesIntoBuckets;
-(void)_reclaimSpaceFromStackedOccurrences;
-(void)_stampOccurrenceFrames;
-(void)_capVisibleTextForBucket:(id)arg1 ;
-(CGRect)_rectForStartSeconds:(long long)arg1 endSeconds:(long long)arg2 ;
-(double)_effectiveEndTimeForOccurrence:(id)arg1 ;
-(double)_endOfCollisionZoneForY:(double)arg1 occurrence:(id)arg2 ;
-(double)_adjustedStartTimeForOccurrence:(id)arg1 ;
-(void)_popOccurrencesInPartition:(id)arg1 endingBeforeTime:(double)arg2 ;
-(double)_combinedWidthOfPartitions;
-(double)_adjustedEndTimeForOccurrence:(id)arg1 ;
-(double)_topOfOccurrence:(id)arg1 ;
-(id)initWithOccurrences:(id)arg1 startOfDay:(id)arg2 endOfDay:(id)arg3 geometryDelegate:(id)arg4 screenUtilsDelegate:(id)arg5 calendar:(id)arg6 ;
-(void)applyLayoutToOccurrences;
@end

