/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <OpusFoundation/OpusFoundation-Structs.h>
@class NSString, NSObject;

@interface OFMediaMetadataDatabaseCache : NSObject {

	NSString* _diskCacheFilepath;
	sqlite3Ref _sqliteDatabase;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(void)dealloc;
-(id)init;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)invalidateDiskCaches;
-(id)initWithDiskCacheFilepath:(id)arg1 ;
-(BOOL)_open;
-(id)entryForIdentifier:(id)arg1 ;
-(id)newEntryWithIdentifier:(id)arg1 ;
@end
