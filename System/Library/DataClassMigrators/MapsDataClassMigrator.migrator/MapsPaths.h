/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface MapsPaths : NSObject {

	NSURL* _libraryURL;
	NSString* _mapsDirectory;
	NSString* _cacheDirectory;
	NSString* _nanoDirectory;
	NSString* _bookmarksSettingsPath;
	NSString* _geoBookmarksSettingsPath;
	NSString* _directionsSettingsPath;
	NSString* _historySettingsPath;
	NSString* _geoHistorySettingsPath;
	NSString* _nanoHistorySettingsPath;
	NSString* _failedSearchesSettingsPath;
	NSString* _failedGeoSearchesSettingsPath;
	NSString* _failedDirectionsSettingsPath;
	NSString* _failedGeoDirectionsSettingsPath;
	NSString* _transitAppRankerPath;
	NSString* _directionsCachePath;
	NSString* _pinsSettingsPath;
	NSString* _reportAProblemDirectionsRecordingsPath;
	NSString* _reportAProblemSearchRecordingsPath;
	NSString* _favoritesSyncedMarkerFile;

}

@property (nonatomic,readonly) NSString * homeDirectory; 
@property (nonatomic,readonly) NSString * mapsDirectory;                                       //@synthesize mapsDirectory=_mapsDirectory - In the implementation block
@property (nonatomic,readonly) NSString * cacheDirectory;                                      //@synthesize cacheDirectory=_cacheDirectory - In the implementation block
@property (nonatomic,readonly) NSString * nanoDirectory;                                       //@synthesize nanoDirectory=_nanoDirectory - In the implementation block
@property (nonatomic,readonly) NSString * bookmarksSettingsPath;                               //@synthesize bookmarksSettingsPath=_bookmarksSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * geoBookmarksSettingsPath;                            //@synthesize geoBookmarksSettingsPath=_geoBookmarksSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * directionsSettingsPath;                              //@synthesize directionsSettingsPath=_directionsSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * historySettingsPath;                                 //@synthesize historySettingsPath=_historySettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * geoHistorySettingsPath;                              //@synthesize geoHistorySettingsPath=_geoHistorySettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * nanoHistorySettingsPath;                             //@synthesize nanoHistorySettingsPath=_nanoHistorySettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * failedSearchesSettingsPath;                          //@synthesize failedSearchesSettingsPath=_failedSearchesSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * failedGeoSearchesSettingsPath;                       //@synthesize failedGeoSearchesSettingsPath=_failedGeoSearchesSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * failedGeoDirectionsSettingsPath;                     //@synthesize failedGeoDirectionsSettingsPath=_failedGeoDirectionsSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * failedDirectionsSettingsPath;                        //@synthesize failedDirectionsSettingsPath=_failedDirectionsSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * transitAppRankerPath;                                //@synthesize transitAppRankerPath=_transitAppRankerPath - In the implementation block
@property (nonatomic,readonly) NSString * pinsSettingsPath;                                    //@synthesize pinsSettingsPath=_pinsSettingsPath - In the implementation block
@property (nonatomic,readonly) NSString * directionsCachePath;                                 //@synthesize directionsCachePath=_directionsCachePath - In the implementation block
@property (nonatomic,readonly) NSString * reportAProblemDirectionsRecordingsPath;              //@synthesize reportAProblemDirectionsRecordingsPath=_reportAProblemDirectionsRecordingsPath - In the implementation block
@property (nonatomic,readonly) NSString * reportAProblemSearchRecordingsPath;                  //@synthesize reportAProblemSearchRecordingsPath=_reportAProblemSearchRecordingsPath - In the implementation block
@property (nonatomic,readonly) NSString * favoritesSyncedMarkerFile;                           //@synthesize favoritesSyncedMarkerFile=_favoritesSyncedMarkerFile - In the implementation block
+(id)favoritesSyncedMarkerFile;
+(id)directionsCachePath;
+(id)geoHistorySettingsPath;
+(id)bookmarksSettingsPath;
+(id)failedGeoSearchesSettingsPath;
+(id)failedSearchesSettingsPath;
+(id)historySettingsPath;
+(id)failedGeoDirectionsSettingsPath;
+(id)nanoHistorySettingsPath;
+(id)pinsSettingsPath;
+(id)directionsSettingsPath;
+(id)failedDirectionsSettingsPath;
+(id)mapsDirectory;
+(id)geoBookmarksSettingsPath;
+(id)transitAppRankerPath;
+(id)storageLocationsSetAtLocation:(long long)arg1 ;
+(id)reportAProblemSearchRecordingsPath;
+(id)reportAProblemDirectionsRecordingsPath;
+(id)nanoDirectory;
+(id)cacheDirectory;
-(NSString *)favoritesSyncedMarkerFile;
-(NSString *)directionsCachePath;
-(NSString *)geoHistorySettingsPath;
-(NSString *)bookmarksSettingsPath;
-(NSString *)failedGeoSearchesSettingsPath;
-(NSString *)failedSearchesSettingsPath;
-(NSString *)historySettingsPath;
-(NSString *)failedGeoDirectionsSettingsPath;
-(BOOL)_deleteSyncedFileAtPath:(id)arg1 ;
-(id)initWithLibraryDirectoryURL:(id)arg1 ;
-(NSString *)homeDirectory;
-(NSString *)nanoHistorySettingsPath;
-(NSString *)pinsSettingsPath;
-(NSString *)directionsSettingsPath;
-(NSString *)failedDirectionsSettingsPath;
-(NSString *)mapsDirectory;
-(NSString *)geoBookmarksSettingsPath;
-(NSString *)transitAppRankerPath;
-(NSString *)reportAProblemSearchRecordingsPath;
-(NSString *)reportAProblemDirectionsRecordingsPath;
-(BOOL)_shouldSyncMergeAfterCheckingOrCreatingMarkerFileAtPath:(id)arg1 ;
-(NSString *)nanoDirectory;
-(BOOL)shouldSyncMergeFavoritesAfterCheckingOrCreatingMarkerFile;
-(BOOL)deleteFavoritesSyncedMarkerFile;
-(NSString *)cacheDirectory;
@end
