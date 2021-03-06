/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/OKCollectionProxyDataSource.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>

@protocol OKMediaFeederDelegate, OS_dispatch_queue;
@class OKPresentation, NSObject, NSString;

@interface OKMediaFeeder : NSObject <OKCollectionProxyDataSource, OKSettingsSupport> {

	OKPresentation* _presentation;
	BOOL _wantsLiveUpdates;
	id<OKMediaFeederDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _processingQueue;
	unsigned long long _startIndex;
	BOOL _rotationEnabled;

}

@property (assign,nonatomic) OKPresentation * presentation;                   //@synthesize presentation=_presentation - In the implementation block
@property (assign,nonatomic) BOOL wantsLiveUpdates;                           //@synthesize wantsLiveUpdates=_wantsLiveUpdates - In the implementation block
@property (assign,nonatomic) id<OKMediaFeederDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long startIndex;                   //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) BOOL rotationEnabled;                            //@synthesize rotationEnabled=_rotationEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(BOOL)isRemote;
+(id)operationWithBlock:(/*^block*/id)arg1 cancellationBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)supportLiveUpdates;
-(void)setDelegate:(id<OKMediaFeederDelegate>)arg1 ;
-(void)dealloc;
-(id)reloadData;
-(id)init;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id<OKMediaFeederDelegate>)delegate;
-(id)allObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(void)setPresentation:(OKPresentation *)arg1 ;
-(void)setStartIndex:(unsigned long long)arg1 ;
-(void)setRotationEnabled:(BOOL)arg1 ;
-(id)mediaItemAtIndex:(unsigned long long)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)countOfDictionaryProxy:(id)arg1 ;
-(id)allKeysForDictionaryProxy:(id)arg1 ;
-(id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2 ;
-(id)dictionaryProxy:(id)arg1 objectAtIndexPath:(id)arg2 ;
-(id)feederSettings;
-(BOOL)canBePersisted;
-(id)reloadMediaObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfMediaObjects;
-(id)mediaObjectsAtIndexes:(id)arg1 ;
-(id)mediaObjectURLsAtIndexes:(id)arg1 ;
-(id)indexesForMediaObjects:(id)arg1 ;
-(void)reloadDataWithProgressBlock:(/*^block*/id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(id)allMediaURLs;
-(unsigned long long)numberOfMediaItems;
-(unsigned long long)_rotatedIndexFromIndex:(unsigned long long)arg1 ;
-(id)mediaItemsAtIndexes:(id)arg1 ;
-(unsigned long long)_numberOfMediaItems;
-(id)_mediaItemsForMediaURLs:(id)arg1 ;
-(unsigned long long)_indexFromRotatedIndex:(unsigned long long)arg1 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)performAsynchronousBarrierUsingBlock:(/*^block*/id)arg1 ;
-(id)mediaURLAtIndex:(unsigned long long)arg1 ;
-(id)mediaURLsAtIndexes:(id)arg1 ;
-(unsigned long long)indexForMediaItem:(id)arg1 ;
-(BOOL)wantsLiveUpdates;
-(void)setWantsLiveUpdates:(BOOL)arg1 ;
-(BOOL)rotationEnabled;
-(unsigned long long)startIndex;
-(OKPresentation *)presentation;
@end

