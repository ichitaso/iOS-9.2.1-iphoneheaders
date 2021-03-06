/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSKShuffleMapping : NSObject <NSCopying> {

	unsigned short mStartIndex;
	unsigned short mEndIndex;
	unsigned short* mMapping;
	BOOL mIsVertical;
	BOOL mIsMoveOperation;
	unsigned short mFirstMovedIndex;
	unsigned short mDestinationIndexForMove;
	unsigned short mNumberOfIndicesMoved;

}

@property (nonatomic,readonly) unsigned short startIndex; 
@property (nonatomic,readonly) unsigned short endIndex; 
@property (nonatomic,readonly) unsigned short* mapping; 
@property (nonatomic,readonly) unsigned short mappingSize; 
@property (nonatomic,readonly) BOOL isIdentityMapping; 
-(SCD_Struct_TS315)mapCoordinate:(SCD_Struct_TS315)arg1 ;
-(SCD_Struct_TS315)reverseMapCoordinate:(SCD_Struct_TS315)arg1 ;
-(unsigned short)mapIndex:(unsigned short)arg1 ;
-(unsigned short)reverseMapIndex:(unsigned short)arg1 ;
-(id)initWithStartIndex:(unsigned short)arg1 endIndex:(unsigned short)arg2 mapping:(unsigned short*)arg3 ;
-(unsigned short)mappingSize;
-(id)initWithStartIndex:(unsigned short)arg1 endIndex:(unsigned short)arg2 ;
-(id)initForMovedIndicesStartingAtIndex:(unsigned short)arg1 destinationIndex:(unsigned short)arg2 numberOfIndices:(unsigned short)arg3 vertical:(BOOL)arg4 ;
-(id)copyInverse;
-(BOOL)isIdentityMapping;
-(void)enumerateMappingRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)insert:(unsigned short)arg1 indicesAtIndex:(unsigned short)arg2 insertingBefore:(BOOL)arg3 ;
-(void)remove:(unsigned short)arg1 indicesAtIndex:(unsigned short)arg2 ;
-(void)swapIndex:(unsigned short)arg1 withIndex:(unsigned short)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isVertical;
-(unsigned short)endIndex;
-(unsigned short*)mapping;
-(BOOL)isMove;
-(void)saveToArchive:(ShuffleMappingArchive*)arg1 ;
-(unsigned short)startIndex;
-(id)initWithArchive:(const ShuffleMappingArchive*)arg1 ;
@end

