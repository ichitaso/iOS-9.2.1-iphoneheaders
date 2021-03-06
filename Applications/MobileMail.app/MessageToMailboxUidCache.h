/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileMail/MobileMail-Structs.h>
@class MFMailMessageLibrary;

@interface MessageToMailboxUidCache : NSObject {

	CFDictionaryRef _mailboxCache;
	MFMailMessageLibrary* _library;

}
-(id)mailboxForMessage:(id)arg1 ;
-(id)mailboxForMessageInfo:(id)arg1 ;
-(id)_mailboxWithMailboxLibraryID:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(void)removeAllObjects;
-(id)debugDescription;
-(id)initWithLibrary:(id)arg1 ;
@end

