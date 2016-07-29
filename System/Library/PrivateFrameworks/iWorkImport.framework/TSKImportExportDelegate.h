/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKImportExportDelegate <NSObject>
@property (nonatomic,readonly) BOOL importingDesignDemoDoc; 
@property (nonatomic,readonly) BOOL isBrowsingVersions; 
@optional
-(BOOL)importingDesignDemoDoc;
-(void)showDownloadPermissionAlertIfNeededForDownloadingAssetsWithEstimatedDownloadSize:(long long)arg1 isPrecise:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)addIncompatibleMovieInfo:(id)arg1 withCompatibilityLevel:(long long)arg2;
-(BOOL)isBrowsingVersions;

@required
-(void)removeWarning:(id)arg1;
-(void)addWarning:(id)arg1;
-(id)warnings;

@end
