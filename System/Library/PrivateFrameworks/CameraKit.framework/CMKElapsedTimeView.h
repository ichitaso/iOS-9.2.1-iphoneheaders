/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, NSTimer, NSDate;

@interface CMKElapsedTimeView : UIView {

	UILabel* __timeLabel;
	UIImageView* __recordingImageView;
	NSTimer* __updateTimer;
	NSDate* __startTime;

}

@property (nonatomic,readonly) UILabel * _timeLabel;                           //@synthesize _timeLabel=__timeLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * _recordingImageView;              //@synthesize _recordingImageView=__recordingImageView - In the implementation block
@property (nonatomic,readonly) NSTimer * _updateTimer;                         //@synthesize _updateTimer=__updateTimer - In the implementation block
@property (nonatomic,readonly) NSDate * _startTime;                            //@synthesize _startTime=__startTime - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)resetTimer;
-(void)startTimer;
-(void)_update:(id)arg1 ;
-(void)_commonCMKElapsedTimeViewInitialization;
-(NSDate *)_startTime;
-(void)_setStartTime:(id)arg1 ;
-(UILabel *)_timeLabel;
-(void)_beginRecordingAnimation;
-(void)_endRecordingAnimation;
-(void)endTimer;
-(NSTimer *)_updateTimer;
-(void)updateToContentSize:(id)arg1 ;
-(UIImageView *)_recordingImageView;
@end
