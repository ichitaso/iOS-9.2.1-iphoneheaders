/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSThread, NSError, NSString;

@interface CPLEngineStoreTransaction : NSObject {

	NSThread* _currentThread;
	BOOL _forWrite;
	NSError* _error;
	NSString* _name;

}

@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)canWrite;
-(BOOL)_forWrite;
-(id)initForWrite:(BOOL)arg1 ;
-(BOOL)do:(/*^block*/id)arg1 ;
-(void)_transactionWillBeginOnThread:(id)arg1 ;
-(void)_transactionDidFinish;
-(BOOL)canRead;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

