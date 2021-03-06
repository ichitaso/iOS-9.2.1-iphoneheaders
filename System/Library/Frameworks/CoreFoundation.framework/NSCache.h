/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSCache : NSObject {

	id _delegate;
	void** _private[5];
	void* _reserved;

}

@property (copy) NSString * name; 
@property (assign) id<NSCacheDelegate> delegate; 
@property (assign) unsigned long long totalCostLimit; 
@property (assign) unsigned long long countLimit; 
@property (assign) BOOL evictsObjectsWithDiscardedContent; 
-(id)CALobjectForKey:(id)arg1 calculatedWithBlock:(/*^block*/id)arg2 ;
-(BOOL)evictsObjectsWithDiscardedContent;
-(unsigned long long)totalCostLimit;
-(unsigned long long)minimumObjectCount;
-(BOOL)evictsObjectsWhenApplicationEntersBackground;
-(void)setMinimumObjectCount:(unsigned long long)arg1 ;
-(void)setDelegate:(id<NSCacheDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(id<NSCacheDelegate>)delegate;
-(id)objectForKey:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allObjects;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(unsigned long long)countLimit;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(void)setEvictsObjectsWithDiscardedContent:(BOOL)arg1 ;
-(void)finalize;
@end

