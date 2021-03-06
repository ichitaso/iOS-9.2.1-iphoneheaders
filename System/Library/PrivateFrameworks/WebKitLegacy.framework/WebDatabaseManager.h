/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WebDatabaseManager : NSObject
+(void)startBackgroundTask;
+(void)endBackgroundTask;
+(void)willBeginFirstTransaction;
+(void)didFinishLastTransaction;
+(void)removeEmptyDatabaseFiles;
+(id)sharedWebDatabaseManager;
+(void)scheduleEmptyDatabaseRemoval;
-(id)origins;
-(id)databasesWithOrigin:(id)arg1 ;
-(id)detailsForDatabase:(id)arg1 withOrigin:(id)arg2 ;
-(void)deleteAllDatabases;
-(BOOL)deleteOrigin:(id)arg1 ;
-(BOOL)deleteDatabase:(id)arg1 withOrigin:(id)arg2 ;
-(id)init;
@end

