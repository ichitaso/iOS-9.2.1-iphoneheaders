/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemVideoOutputInternal;

@interface AVPlayerItemVideoOutput : AVPlayerItemOutput {

	AVPlayerItemVideoOutputInternal* _videoOutputInternal;

}

@property (nonatomic,readonly) id<AVPlayerItemOutputPullDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
-(void)dealloc;
-(id)init;
-(id<AVPlayerItemOutputPullDelegate>)delegate;
-(BOOL)suppressesPlayerRendering;
-(OpaqueFigVisualContextRef)_visualContext;
-(id)_pixelBufferAttributes;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_setTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_detachFromPlayerItem;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithPixelBufferAttributes:(id)arg1 ;
-(void)_dispatchOutputMediaDataWillChange;
-(BOOL)hasNewPixelBufferForItemTime:(SCD_Struct_CM5)arg1 ;
-(void)_stopObservingTimebaseNotificationsForTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_startObservingTimebaseNotificationsForTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(double)arg1 ;
-(CVBufferRef)copyPixelBufferForItemTime:(SCD_Struct_CM5)arg1 itemTimeForDisplay:(SCD_Struct_CM5*)arg2 ;
-(void)_setTagBuffersWithConversionInformation;
-(void)_dispatchOutputSequenceWasFlushed;
-(void)setSuppressesPlayerRendering:(BOOL)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)finalize;
@end
