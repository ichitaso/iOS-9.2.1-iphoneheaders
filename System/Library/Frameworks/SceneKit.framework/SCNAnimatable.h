/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol SCNAnimatable <NSObject>
@property (readonly) NSArray * animationKeys; 
@required
-(NSArray *)animationKeys;
-(id)animationForKey:(id)arg1;
-(void)removeAnimationForKey:(id)arg1;
-(void)addAnimation:(id)arg1 forKey:(id)arg2;
-(void)removeAllAnimations;
-(void)pauseAnimationForKey:(id)arg1;
-(void)resumeAnimationForKey:(id)arg1;
-(BOOL)isAnimationForKeyPaused:(id)arg1;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;

@end

