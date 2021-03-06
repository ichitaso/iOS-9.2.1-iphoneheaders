/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSObject;

@interface VCPDatabaseReader : NSObject {

	NSObject*<OS_dispatch_queue> _sqlSerialQueue;
	sqlite3Ref _database;

}
-(void)dealloc;
-(id)init;
-(int)openDatabase;
-(void)closeDatabase;
-(int)executeDatabaseBlock:(/*^block*/id)arg1 ;
-(int)queryResultsForAssetId:(long long)arg1 analysis:(id)arg2 ;
-(int)queryHeaderForAsset:(id)arg1 analysis:(id*)arg2 assetId:(long long*)arg3 ;
-(id)queryAnalysisForAsset:(id)arg1 ;
-(id)queryAssetsAnalyzedSince:(id)arg1 ;
@end

