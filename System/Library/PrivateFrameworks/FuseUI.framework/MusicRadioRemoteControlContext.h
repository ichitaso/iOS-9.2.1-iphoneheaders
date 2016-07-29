/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MusicAVPlayer, RadioStation, MPAVItem;

@interface MusicRadioRemoteControlContext : NSObject {

	MusicAVPlayer* _player;
	RadioStation* _radioStation;
	long long _trackID;
	MPAVItem* _currentlyPlayingItem;

}

@property (nonatomic,readonly) MusicAVPlayer * player;                       //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) RadioStation * radioStation;                  //@synthesize radioStation=_radioStation - In the implementation block
@property (nonatomic,readonly) long long trackID;                            //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) MPAVItem * currentlyPlayingItem;              //@synthesize currentlyPlayingItem=_currentlyPlayingItem - In the implementation block
-(MusicAVPlayer *)player;
-(id)initWithPlayer:(id)arg1 mediaRemoteOptions:(id)arg2 ;
-(MPAVItem *)currentlyPlayingItem;
-(RadioStation *)radioStation;
-(long long)trackID;
@end
