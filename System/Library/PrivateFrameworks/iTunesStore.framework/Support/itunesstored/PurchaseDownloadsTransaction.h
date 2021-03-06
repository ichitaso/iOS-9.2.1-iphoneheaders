/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/DownloadsTransaction.h>

@interface PurchaseDownloadsTransaction : DownloadsTransaction
-(id)replacePurchase:(id)arg1 withDownloadQueueResponse:(id)arg2 ;
-(BOOL)replaceDownloadsInQuery:(id)arg1 withStoreDownloads:(id)arg2 accountID:(id)arg3 ;
-(BOOL)insertPurchases:(id)arg1 afterPurchaseWithIdentifier:(long long)arg2 forClient:(id)arg3 ;
-(BOOL)movePurchasesWithIdentifiers:(id)arg1 afterPurchaseWithIdentifier:(long long)arg2 ;
-(BOOL)addPurchases:(id)arg1 forClient:(id)arg2 ;
-(BOOL)cancelPurchaseWithIdentifier:(long long)arg1 applyingProperties:(id)arg2 ;
-(BOOL)deletePurchaseWithIdentifier:(long long)arg1 ;
-(id)existingDownloadForPurchase:(id)arg1 ;
-(BOOL)setUpdateState:(long long)arg1 forUpdateWithPurchaseIdentifier:(long long)arg2 ;
-(double)_maxOrderIdentifier;
-(BOOL)_insertPurchases:(id)arg1 forClient:(id)arg2 orderIdentifier:(double)arg3 orderSpacing:(double)arg4 ;
-(BOOL)_cancelDownloadForPurchaseIdentifier:(long long)arg1 ;
-(void)_getInsertOrderID:(double*)arg1 nextOrderID:(double*)arg2 afterPurchaseID:(long long)arg3 ;
-(long long)_nextBatchIdentifier;
-(id)_addEntityForPurchase:(id)arg1 managerIdentifier:(long long)arg2 orderIdentifier:(double)arg3 ;
-(BOOL)_addPlaceholderDownloadForPurchase:(id)arg1 clientIdentifier:(id)arg2 ;
@end

