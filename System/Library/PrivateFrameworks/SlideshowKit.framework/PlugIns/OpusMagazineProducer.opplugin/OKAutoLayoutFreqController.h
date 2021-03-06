/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMagazineProducer.opplugin/OpusMagazineProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface OKAutoLayoutFreqController : NSObject {

	NSMutableArray* _pages;
	long long _counts[6];
	NSMutableArray* _pageFrequency;
	NSMutableDictionary* _layoutsByResolution;

}
-(void)printStatistics;
-(id)_freqOrderFromHightToLow;
-(id)bestLayoutByFreqOfSameUpFromLayouts:(id)arg1 forResolution:(id)arg2 ;
-(BOOL)_isLayout:(id)arg1 usedInLast:(long long)arg2 ;
-(id)bestLayoutByFreqOfAnyUpsFromLayouts:(id)arg1 ;
-(void)addOnePageLayout:(id)arg1 ;
-(float)_freqOfUp:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

