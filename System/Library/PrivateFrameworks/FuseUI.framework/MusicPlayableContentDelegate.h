/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPPlayableContentDelegate.h>

@class MusicAVPlayer, NSString;

@interface MusicPlayableContentDelegate : NSObject <MPPlayableContentDelegate> {

	MusicAVPlayer* _player;

}

@property (nonatomic,readonly) MusicAVPlayer * player;              //@synthesize player=_player - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MusicAVPlayer *)player;
-(id)initWithPlayer:(id)arg1 ;
-(void)playableContentManager:(id)arg1 initializePlaybackQueueWithCompletionHandler:(/*^block*/id)arg2 ;
@end

