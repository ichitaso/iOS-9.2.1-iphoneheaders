/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKAnchorContext : NSObject {

	shared_ptr<vk::AnchorContext>* _anchorContext;
	shared_ptr<vk::AnchorFactory>* _anchorFactory;

}
-(id)init;
-(shared_ptr<vk::AnchorContext>*)anchorContext;
-(void)setMercatorTerrainHeightCache:(id)arg1 ;
-(id)initMercator;
-(id)newAnchorAtCoordinate:(CGSize)arg1 followsTerrain:(BOOL)arg2 ;
-(BOOL)isMercator;
-(id)initWithAnchorContext:(AnchorContext*)arg1 ;
-(shared_ptr<vk::AnchorFactory>*)anchorFactory;
-(id)initGeocentricWithCache:(id)arg1 ;
@end

