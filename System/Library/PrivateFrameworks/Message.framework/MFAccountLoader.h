/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFAccountLoader : NSObject
+(id)accountWithAccountTypeIdentifier:(id)arg1 error:(id*)arg2 ;
+(Class)accountClassForPersistentAccount:(id)arg1 error:(id*)arg2 ;
+(id)_accountClassStringWithPersistentAccount:(id)arg1 error:(id*)arg2 ;
+(Class)_accountClassForString:(id)arg1 error:(id*)arg2 ;
+(BOOL)loadBundleForAccountClassString:(id)arg1 error:(id*)arg2 ;
+(id)_bundlePathForAccountClassString:(id)arg1 ;
+(id)accountWithPersistentAccount:(id)arg1 error:(id*)arg2 ;
@end
