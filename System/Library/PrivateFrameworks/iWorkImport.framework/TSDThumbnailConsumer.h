/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDThumbnailConsumer <NSObject>
@optional
-(void)commitThumbnail:(id)arg1 identifier:(id)arg2 datasThatNeedDownload:(id)arg3;
-(BOOL)shouldCallCommit;

@required
-(void)updateThumbnail:(id)arg1 identifier:(id)arg2 continueThumbnailing:(BOOL)arg3;
-(id)nextThumbnailIdentifier;

@end
