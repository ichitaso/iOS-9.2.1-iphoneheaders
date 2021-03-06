/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFUInputStream.h>

@protocol TSUReadChannel, TSUStreamReadChannel, OS_dispatch_data, OS_dispatch_queue;
@class NSObject, NSString;

@interface TSUReadChannelInputStreamAdapter : NSObject <SFUInputStream> {

	id<TSUReadChannel> _readChannel;
	id<TSUStreamReadChannel> _streamReadChannel;
	NSObject*<OS_dispatch_data> _leftoverData;
	NSObject*<OS_dispatch_queue> _readQueue;
	long long _offset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_initWithReadChannel:(id)arg1 streamReadChannel:(id)arg2 ;
-(id)initWithReadChannel:(id)arg1 ;
-(id)initWithStreamReadChannel:(id)arg1 ;
-(void)dealloc;
-(long long)offset;
-(void)close;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)seekToOffset:(long long)arg1 ;
-(BOOL)canSeek;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
@end

