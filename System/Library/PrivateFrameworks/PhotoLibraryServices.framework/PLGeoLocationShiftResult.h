/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableDictionary, NSArray;

@interface PLGeoLocationShiftResult : NSObject {

	NSMutableDictionary* _shiftedLocations;
	NSArray* _shiftedAssetIDs;
	BOOL _encounteredErrors;

}

@property (nonatomic,readonly) NSArray * assetIDs; 
@property (assign,nonatomic) BOOL encounteredErrors;              //@synthesize encounteredErrors=_encounteredErrors - In the implementation block
-(void)dealloc;
-(NSArray *)assetIDs;
-(BOOL)hasShiftedLocationForAssetID:(id)arg1 ;
-(CGSize)shiftedLocationForAssetID:(id)arg1 ;
-(BOOL)encounteredErrors;
-(id)initWithAssetIDs:(id)arg1 ;
-(void)_setCoordinate:(CGSize)arg1 ForAssetID:(id)arg2 ;
-(void)_setEncounteredErrors:(BOOL)arg1 ;
@end
