/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceSceneEvent.h>

@class FBSSceneLayer;

@interface FBSWorkspaceSceneLayerEvent : FBSWorkspaceSceneEvent {

	FBSSceneLayer* _layer;
	BOOL _orderOut;

}

@property (nonatomic,retain) FBSSceneLayer * layer;              //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) BOOL orderOut;                      //@synthesize orderOut=_orderOut - In the implementation block
-(void)setOrderOut:(BOOL)arg1 ;
-(FBSSceneLayer *)layer;
-(void)dealloc;
-(id)description;
-(void)setLayer:(FBSSceneLayer *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BOOL)orderOut;
@end

