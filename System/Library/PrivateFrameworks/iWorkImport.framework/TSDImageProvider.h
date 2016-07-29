/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSPData, TSUFlushingManager;

@interface TSDImageProvider : NSObject {

	int mLoadState;
	TSPData* mImageData;
	int mRetainCount;
	int mOwnerCount;
	TSUFlushingManager* mFlushingManager;
	int mInterest;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)addOwner;
-(void)drawImageInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(id)initWithImageData:(id)arg1 ;
-(CGSize)dpiAdjustedNaturalSize;
-(void)i_commonInit;
-(int)interest;
-(void)addInterest;
-(void)removeInterest;
-(void)ownerAccess;
-(void)removeOwner;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(void)flush;
-(BOOL)isValid;
-(CGSize)naturalSize;
-(id)imageData;
-(BOOL)isError;
-(void)setFlushingManager:(id)arg1 ;
-(BOOL)hasFlushableContent;
@end
