/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoTrackDecoder.h>

@class AVAssetReader, AVAssetReaderTrackOutput, PFVideoAVObjectBuilder;

@interface VCPVideoTrackSubsamplingDecoder : VCPVideoTrackDecoder {

	AVAssetReader* _assetReader;
	AVAssetReaderTrackOutput* _trackOutput;
	SCD_Struct_VC6 _trackEnd;
	SCD_Struct_VC6 _sampleDuration;
	SCD_Struct_VC6 _nextSampleTime;
	opaqueCMSampleBufferRef _currentSample;
	opaqueCMSampleBufferRef _nextSample;
	PFVideoAVObjectBuilder* _slowmoTimeMap;

}
-(void)dealloc;
-(long long)status;
-(id)initWithTrack:(id)arg1 atInterval:(const SCD_Struct_VC6*)arg2 slowmoTimeMap:(id)arg3 ;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
@end

