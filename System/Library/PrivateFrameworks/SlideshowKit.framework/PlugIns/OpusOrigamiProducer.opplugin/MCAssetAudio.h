/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAsset.h>

@class NSMutableSet, NSSet;

@interface MCAssetAudio : MCAsset {

	NSMutableSet* mSongs;

}

@property (readonly) NSSet * songs; 
-(NSSet *)songs;
-(void)removeSong:(id)arg1 ;
-(void)addSong:(id)arg1 ;
-(void)demolish;
-(BOOL)isInUse;
@end
