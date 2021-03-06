/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCRDFileReaderDelegate;
@class NSThread, NSFileHandle;

@interface SCRDFileReader : NSObject {

	id<SCRDFileReaderDelegate> _delegate;
	NSThread* _readerThread;
	NSFileHandle* _fileHandle;
	int _threadStartCount;

}
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(void)start;
-(BOOL)hasStarted;
-(void)_readHandler:(id)arg1 ;
-(void)invalidateWithWait:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 fileHandle:(id)arg2 ;
@end

