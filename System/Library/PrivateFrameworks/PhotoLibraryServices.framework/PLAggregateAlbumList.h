/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLAssetContainerListChangeObserver.h>
#import <libobjc.A.dylib/PLAlbumContainer.h>

@class NSMutableOrderedSet, NSString;

@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer> {

	NSMutableOrderedSet* _allAlbums;
	NSMutableOrderedSet* _childAlbumLists;
	int _filter;

}

@property (assign,nonatomic) int filter;                                          //@synthesize filter=_filter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (nonatomic,readonly) unsigned long long albumsCount; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) unsigned long long unreadAlbumsCount; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
+(NSObject*)albumListWithFilter:(int)arg1 inPhotoLibrary:(id)arg2 ;
-(void)dealloc;
-(id)identifier;
-(BOOL)isEmpty;
-(void)setFilter:(int)arg1 ;
-(id)managedObjectContext;
-(id)initWithFilter:(int)arg1 inPhotoLibrary:(id)arg2 ;
-(void)_invalidateAllAlbums;
-(id)containers;
-(BOOL)isFolder;
-(unsigned long long)containersCount;
-(int)filter;
-(void)assetContainerListDidChange:(id)arg1 ;
-(id)albums;
-(unsigned long long)unreadAlbumsCount;
-(id)photoLibrary;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(short)albumListType;
-(BOOL)hasAtLeastOneAlbum;
-(BOOL)canEditAlbums;
-(BOOL)albumHasFixedOrder:(NSObject*)arg1 ;
-(void)setNeedsReordering;
-(BOOL)needsReordering;
-(void)updateAlbumsOrderIfNeeded;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(unsigned long long)albumsCount;
-(id)albumsSortingComparator;
-(NSString *)_prettyDescription;
-(NSString *)_typeDescription;
@end

