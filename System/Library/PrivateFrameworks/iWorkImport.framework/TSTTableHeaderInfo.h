/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSTCellStyle, TSWPParagraphStyle;

@interface TSTTableHeaderInfo : NSObject {

	TSTCellStyle* mCellStyle;
	TSWPParagraphStyle* mTextStyle;
	double mSize;
	unsigned char mHidingState;
	unsigned short mNumberOfCells;

}

@property (nonatomic,retain) TSTCellStyle * cellStyle; 
@property (nonatomic,retain) TSWPParagraphStyle * textStyle; 
@property (assign,nonatomic) double size; 
@property (assign,nonatomic) unsigned char hidingState; 
@property (assign,nonatomic) unsigned short numberOfCells; 
-(void)setHidingState:(unsigned char)arg1 ;
-(unsigned char)hidingState;
-(void)setNumberOfCells:(unsigned short)arg1 ;
-(double)size;
-(void)dealloc;
-(id)description;
-(void)setSize:(double)arg1 ;
-(TSWPParagraphStyle *)textStyle;
-(void)setTextStyle:(TSWPParagraphStyle *)arg1 ;
-(unsigned short)numberOfCells;
-(TSTCellStyle *)cellStyle;
-(void)setCellStyle:(TSTCellStyle *)arg1 ;
@end
