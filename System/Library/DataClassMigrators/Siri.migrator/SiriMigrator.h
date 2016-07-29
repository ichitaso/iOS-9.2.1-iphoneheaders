/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DataClassMigrators/Siri.migrator/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface SiriMigrator : DataClassMigrator
-(void)_cleanupBundleCaches;
-(void)_performLastUseMigration;
-(void)_removeTokenDomain;
-(void)_performOutputVoiceMigration;
-(void)_performLoggingMigration;
-(void)_performBootstrapSpeechIdMigration;
-(void)_performVoiceServicesLanguageMigration;
-(void)_performSessionLanguageMigration;
-(void)_performInteralToBackedUpMigration;
-(void)_performAudioFeedbackMigration;
-(void)_performDictationMigration;
-(float)migrationProgress;
-(float)estimatedDuration;
-(BOOL)performMigration;
-(id)dataClassName;
@end
