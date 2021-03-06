/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIScrollingTabBarController.h>

@class MPAVController, MusicMiniPlayerViewController, MusicNowPlayingViewController;

@interface MusicTabBarController : SKUIScrollingTabBarController {

	BOOL _shouldIgnorePresentations;
	/*^block*/id _nowPlayingPresentationCompletionHandler;
	BOOL _miniPlayerVisible;
	MPAVController* _player;
	MusicMiniPlayerViewController* _miniPlayerViewController;
	MusicNowPlayingViewController* _nowPlayingViewController;

}

@property (nonatomic,retain) MPAVController * player;                                                 //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) MusicMiniPlayerViewController * miniPlayerViewController;              //@synthesize miniPlayerViewController=_miniPlayerViewController - In the implementation block
@property (nonatomic,readonly) MusicNowPlayingViewController * nowPlayingViewController;              //@synthesize nowPlayingViewController=_nowPlayingViewController - In the implementation block
@property (assign,getter=isMiniPlayerVisible,nonatomic) BOOL miniPlayerVisible;                       //@synthesize miniPlayerVisible=_miniPlayerVisible - In the implementation block
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setClientContext:(id)arg1 ;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
-(void)presentNowPlayingViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(MusicNowPlayingViewController *)nowPlayingViewController;
-(void)presentMiniPlayerViewController;
-(void)dismissMiniPlayerViewController;
-(void)_playerContentsChangedNotification:(id)arg1 ;
-(void)_playerDidReloadWithPlaybackContextNotification:(id)arg1 ;
-(void)_updateMiniPlayerVisiblity;
-(void)presentNowPlayingViewController;
-(void)setMiniPlayerVisible:(BOOL)arg1 ;
-(BOOL)isMiniPlayerVisible;
-(MusicMiniPlayerViewController *)miniPlayerViewController;
@end

