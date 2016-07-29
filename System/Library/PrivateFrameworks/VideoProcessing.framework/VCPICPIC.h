/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPICPIC : NSObject {

	int _cropDepth;
	int _nImagesMax;
	void* _scalingBuffer;
	unsigned long long _scalingBufferSize;
	float* _desc;
	float* _clf;
	vImage_Buffer* _crop;

}

@property (assign) int cropDepth;                                     //@synthesize cropDepth=_cropDepth - In the implementation block
@property (assign) vImage_Buffer* crop;                               //@synthesize crop=_crop - In the implementation block
@property (assign) void* scalingBuffer;                               //@synthesize scalingBuffer=_scalingBuffer - In the implementation block
@property (assign) unsigned long long scalingBufferSize;              //@synthesize scalingBufferSize=_scalingBufferSize - In the implementation block
@property (assign) int nImagesMax;                                    //@synthesize nImagesMax=_nImagesMax - In the implementation block
@property (assign) float* desc;                                       //@synthesize desc=_desc - In the implementation block
@property (assign) float* clf;                                        //@synthesize clf=_clf - In the implementation block
+(id)createErrorWithStatus:(int)arg1 andMessage:(id)arg2 ;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)classifyCVPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(void)setScalingBuffer:(void*)arg1 ;
-(void)setDesc:(float*)arg1 ;
-(int)cropDepth;
-(float*)desc;
-(void)setCropDepth:(int)arg1 ;
-(void)setScalingBufferSize:(unsigned long long)arg1 ;
-(id)classifyVImageBuffer:(vImage_Buffer*)arg1 error:(id*)arg2 ;
-(BOOL)preProcessImage:(vImage_Buffer*)arg1 error:(id*)arg2 ;
-(vImage_Buffer*)crop;
-(void)setNImagesMax:(int)arg1 ;
-(int)nImagesMax;
-(void)setCrop:(vImage_Buffer*)arg1 ;
-(id)classifyUIImage:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)scalingBufferSize;
-(void*)scalingBuffer;
-(void)setClf:(float*)arg1 ;
-(float*)clf;
@end
