/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPImageDescriptor : NSObject {

	float* _featureVector;

}
+(int)preferredPixelFormat;
-(void)dealloc;
-(id)initWithImage:(CVBufferRef)arg1 ;
-(int)computeDistanceWith:(id)arg1 distance:(float*)arg2 ;
-(int)computeFeature:(CVBufferRef)arg1 ;
-(int)computeRegionHistogram:(char*)arg1 width:(int)arg2 height:(int)arg3 stride:(long long)arg4 histogram:(float*)arg5 ;
@end

