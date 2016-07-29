/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MCObject.h>
#import <OpusOrigamiProducer/MCFilterSupport.h>
#import <OpusOrigamiProducer/MCAnimationPathSupport.h>

@class NSSet, NSArray, NSMutableDictionary, NSMutableSet, MCPlugSlide, MCSong, NSString, MCContainerEffect, MCAssetVideo, NSDictionary;

@interface MCSlide : MCObject <MCFilterSupport, MCAnimationPathSupport> {

	id* mSlideAsset;
	NSMutableDictionary* mFrameAttributes;
	NSMutableSet* mAnimationPaths;
	NSMutableSet* mFilters;
	NSArray* mCachedOrderedFilters;
	unsigned long long mFlags;
	float mAudioVolume;
	float mAudioDuckLevel;
	MCPlugSlide* mPlug;
	MCSong* mSong;
	unsigned long long mIndex;
	double mAudioFadeInDuration;
	double mAudioFadeOutDuration;
	double mAudioDuckInDuration;
	double mAudioDuckOutDuration;
	double mStartTime;
	double mDuration;
	NSString* mFrameID;
	MCContainerEffect* mContainer;

}

@property (readonly) NSSet * filters; 
@property (readonly) NSArray * orderedFilters; 
@property (nonatomic,readonly) unsigned long long countOfFilters; 
@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned long long countOfAnimationPaths; 
@property (retain) MCAssetVideo * asset; 
@property (retain) MCPlugSlide * plug; 
@property (readonly) MCSong * song; 
@property (assign,nonatomic) unsigned long long index; 
@property (assign,nonatomic) float audioVolume; 
@property (assign,nonatomic) double audioFadeInDuration; 
@property (assign,nonatomic) double audioFadeOutDuration; 
@property (assign,nonatomic) float audioDuckLevel; 
@property (assign,nonatomic) double audioDuckInDuration; 
@property (assign,nonatomic) double audioDuckOutDuration; 
@property (readonly) BOOL startTimeIsDefined; 
@property (assign,nonatomic) double startTime; 
@property (readonly) BOOL durationIsDefined; 
@property (assign,nonatomic) double duration; 
@property (copy) NSString * frameID; 
@property (copy) NSDictionary * frameAttributes; 
@property (copy) NSString * kenBurnsType; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double rotation; 
@property (assign) MCContainerEffect * container; 
@property (assign,nonatomic) unsigned char currentLayoutIndex; 
@property (readonly) unsigned char countOfLayouts; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(unsigned long long)countOfFilters;
-(void)observeFilter:(id)arg1 ;
-(void)demolishFilters;
-(id)insertFilterWithFilterID:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeAllFilters;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(void)moveFiltersAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(id)addFilterWithFilterID:(id)arg1 ;
-(void)initFiltersWithImprints:(id)arg1 ;
-(id)imprintsForFilters;
-(void)unobserveFilter:(id)arg1 ;
-(NSArray *)orderedFilters;
-(NSSet *)filters;
-(id)filterAtIndex:(unsigned long long)arg1 ;
-(void)removeAllAnimationPaths;
-(NSSet *)animationPaths;
-(id)animationPathForKey:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(void)addAnimationPath:(id)arg1 ;
-(unsigned long long)countOfAnimationPaths;
-(void)initAnimationPathsWithImprints:(id)arg1 ;
-(void)demolishAnimationPaths;
-(id)imprintsForAnimationPaths;
-(void)setSongForAsset:(id)arg1 ;
-(unsigned char)countOfLayouts;
-(void)setPlug:(MCPlugSlide *)arg1 ;
-(void)setFrameID:(NSString *)arg1 ;
-(NSDictionary *)frameAttributes;
-(NSString *)frameID;
-(MCPlugSlide *)plug;
-(float)audioDuckLevel;
-(NSString *)kenBurnsType;
-(void)demolish;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(BOOL)startTimeIsDefined;
-(BOOL)durationIsDefined;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(unsigned char)currentLayoutIndex;
-(void)undefineStartTime;
-(void)undefineDuration;
-(void)setAudioFadeInDuration:(double)arg1 ;
-(void)setAudioDuckInDuration:(double)arg1 ;
-(void)setAudioDuckOutDuration:(double)arg1 ;
-(void)setAudioDuckLevel:(float)arg1 ;
-(void)setFrameAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)setKenBurnsType:(NSString *)arg1 ;
-(double)audioFadeInDuration;
-(double)audioDuckInDuration;
-(double)audioDuckOutDuration;
-(void)setFrameAttributes:(NSDictionary *)arg1 ;
-(id)frameAttributeForKey:(id)arg1 ;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(MCContainerEffect *)container;
-(void)setContainer:(MCContainerEffect *)arg1 ;
-(unsigned long long)index;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(MCAssetVideo *)asset;
-(double)startTime;
-(void)setAsset:(MCAssetVideo *)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(MCSong *)song;
-(double)audioFadeOutDuration;
-(void)setAudioVolume:(float)arg1 ;
-(void)setAudioFadeOutDuration:(double)arg1 ;
-(float)audioVolume;
-(id)imprint;
@end
