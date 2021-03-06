/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSTMergeOwner, NSMutableIndexSet, NSIndexSet;

@interface TSTMergeRangeCache : NSObject {

	TSTMergeOwner* _mergeOwner;
	unordered_map<unsigned long, TSUColumnRowRect, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, TSUColumnRowRect> > >* _mergeRanges;
	NSMutableIndexSet* _mergeIndexes;

}

@property (nonatomic,readonly) NSIndexSet * mergeIndexes; 
@property (nonatomic,readonly) TSTMergeOwner * mergeOwner;              //@synthesize mergeOwner=_mergeOwner - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(TSUColumnRowRect)expandCellRangeToCoverMergedCells:(TSUColumnRowRect)arg1 ;
-(TSTMergeOwner *)mergeOwner;
-(vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> >*)mergeRangesIntersectingCellRegion:(id)arg1 ;
-(TSUColumnRowRect)mergedRangeForCellID:(SCD_Struct_TS315)arg1 ;
-(BOOL)partiallyIntersectsCellRange:(TSUColumnRowRect)arg1 ;
-(id)mergedGridIndicesForDimension:(long long)arg1 ;
-(vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> >*)mergeRangesIntersectingRange:(TSUColumnRowRect)arg1 ;
-(id)expandCellRegionToCoverMergedCells:(id)arg1 ;
-(NSIndexSet *)mergeIndexes;
-(TSUColumnRowRect)mergeRangeAtIndex:(unsigned long long)arg1 ;
-(void)enumerateCacheItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateCacheItemsIntersectingRange:(TSUColumnRowRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateCacheItemsIntersectingCellRegion:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithMergeOwner:(id)arg1 ;
-(void)setMerge:(TSUColumnRowRect)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeMergeRangeAtIndex:(unsigned long long)arg1 ;
-(vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> >*)mergeRanges;
-(BOOL)partiallyIntersectsCellRegion:(id)arg1 ;
-(BOOL)hasRangeSpanningRowsForCellRange:(TSUColumnRowRect)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
@end

