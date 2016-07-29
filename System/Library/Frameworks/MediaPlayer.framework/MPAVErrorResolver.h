/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPAVErrorResolverDelegate;
@interface MPAVErrorResolver : NSObject {

	id<MPAVErrorResolverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MPAVErrorResolverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<MPAVErrorResolverDelegate>)arg1 ;
-(id<MPAVErrorResolverDelegate>)delegate;
-(void)resolveError:(id)arg1 ;
-(void)sendDidResolveError:(id)arg1 withResolution:(long long)arg2 ;
@end
