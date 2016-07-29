/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedAlbum.h>

@class NSString;

@interface PLPhotoStreamAlbum : PLManagedAlbum

@property (nonatomic,retain) NSString * personID; 
+(id)entityName;
+(id)photoStreamAlbumWithStreamID:(id)arg1 inPhotoLibrary:(id)arg2 createIfNeeded:(BOOL)arg3 ;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingPersonID;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(void)addAssetOrderedByDataTaken:(id)arg1 ;
-(void)enforceImageLimitIfNecessary;
-(void)awakeFromInsert;
-(BOOL)shouldDeleteWhenEmpty;
@end
