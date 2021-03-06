/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKRoadMapModel.h>

@interface VKHybridRoadMapModel : VKRoadMapModel {

	unique_ptr<md::OffscreenQueue, std::__1::default_delete<md::OffscreenQueue> >* _offscreenQueue;
	float _roadAlpha;

}
-(void)unLockCommandBuffers:(RenderQueue*)arg1 ;
-(void)gglLayoutSceneIfNeeded:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 dispatchQueue:(id)arg4 ;
-(void)lockCommandBuffers:(RenderQueue*)arg1 ;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
@end

