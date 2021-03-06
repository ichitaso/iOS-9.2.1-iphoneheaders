/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MailboxUtilsClient.h>

@class NSString, NSMutableArray, NSRecursiveLock, NSUbiquitousKeyValueStore;

@interface FavoritesManager : NSObject <MailboxUtilsClient> {

	NSString* _storagePath;
	NSMutableArray* _mailboxCollections;
	NSMutableArray* _visibleMailboxCollections;
	NSRecursiveLock* _lock;
	NSUbiquitousKeyValueStore* _kvStore;
	BOOL _showingOutbox;
	BOOL _showingSingleAccount;
	BOOL _loadingMailboxes;

}
+(id)sharedInstance;
-(id)mailboxesCollection;
-(id)copyMailboxSources;
-(void)_accountsDidChange:(id)arg1 ;
-(void)_sharedMailboxControllerBadgeCountDidChange:(id)arg1 ;
-(id)indexPathForItem:(id)arg1 ;
-(BOOL)updateCollections:(id)arg1 withItems:(id)arg2 ;
-(id)visibleMailboxCollections;
-(void)moveItemOfCollection:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 ;
-(id)favoriteMailboxesForAccount:(id)arg1 ;
-(id)accountsCollection;
-(id)accountMailboxesCollection;
-(id)itemsOfType:(unsigned long long)arg1 ;
-(void)_updateOutboxStatus:(id)arg1 ;
-(void)_mailboxListingChanged:(id)arg1 ;
-(void)_mailboxNameChanged:(id)arg1 ;
-(void)_watchedMailboxesChanged:(id)arg1 ;
-(void)_keyValueStoreChangedExternally:(id)arg1 ;
-(void)_invalidateVisibleMailboxCollections;
-(void)_addSharedMailboxItems;
-(void)_createDefaultCollections;
-(void)_migrateItemOrder;
-(void)_writeLocalData;
-(void)_syncLocalChanges_nts:(id)arg1 removed:(id)arg2 ;
-(void)_postNotificationChangedItems:(id)arg1 ;
-(id)_copyKVValueForItem:(id)arg1 ;
-(void)syncLocalChanges:(id)arg1 removed:(id)arg2 ;
-(void)_processOrphanedMailboxes:(id)arg1 ;
-(void)_processNewMailboxes:(id)arg1 ;
-(void)_mergeExternalChanges:(unsigned long long)arg1 changedKeys:(id)arg2 ;
-(id)collectionContainingItem:(id)arg1 ;
-(id)_indexPathForSharedMailboxControllerOfSourceType:(unsigned long long)arg1 ;
-(void)_postNotification;
-(void)dealloc;
-(id)init;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)removeItemAtIndexPath:(id)arg1 ;
-(void)_reload;
-(void)shouldReloadMailboxesWithOutbox:(id)arg1 ;
-(BOOL)shouldHideInbox;
-(BOOL)shouldHideNotesForAccount:(id)arg1 ;
-(void)_loadMailboxes:(BOOL)arg1 ;
-(void)_loadMailboxesForcibly:(id)arg1 ;
-(void)_loadMailboxesAfterMailboxListingChanged;
@end

