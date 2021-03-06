/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSPointerArray;

@interface TSTCellList : TSPObject <NSCopying> {

	NSPointerArray* _cells;

}

@property (nonatomic,retain) NSPointerArray * cells;              //@synthesize cells=_cells - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)popLastCell;
-(id)addCell:(id)arg1 ;
-(id)lastCell;
-(void)dealloc;
-(unsigned long long)count;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)setCells:(NSPointerArray *)arg1 ;
-(NSPointerArray *)cells;
-(id)cellAtIndex:(unsigned long long)arg1 ;
@end

