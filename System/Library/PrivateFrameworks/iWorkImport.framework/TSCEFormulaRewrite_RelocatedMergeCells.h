/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCEFormulaRewrite_RelocatedMergeCells : NSObject {

	unordered_map<TSUColumnRowCoordinate, unsigned short, std::__1::hash<TSUColumnRowCoordinate>, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, unsigned short> > >* _mergeRangeAdjustments;

}
-(void)saveToMessage:(RelocatedMergeCellsArchive*)arg1 ;
-(id)initFromMessage:(const RelocatedMergeCellsArchive*)arg1 ;
-(void)mergeRangeAt:(const SCD_Struct_TS270*)arg1 adjustedBy:(unsigned short)arg2 ;
-(unsigned short)mergeRangeAdjustmentForCoord:(const SCD_Struct_TS270*)arg1 ;
-(id)description;
@end

