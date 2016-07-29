/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MusicTrackCountInformation : NSObject {

	BOOL _libraryFallback;
	unsigned long long _trackCount;

}

@property (assign,getter=isLibraryFallback,nonatomic) BOOL libraryFallback;              //@synthesize libraryFallback=_libraryFallback - In the implementation block
@property (assign,nonatomic) unsigned long long trackCount;                              //@synthesize trackCount=_trackCount - In the implementation block
-(unsigned long long)trackCount;
-(void)setLibraryFallback:(BOOL)arg1 ;
-(void)setTrackCount:(unsigned long long)arg1 ;
-(BOOL)isLibraryFallback;
@end
