/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSSStylePropertyChangeSet.h>

@class TSWPSpecColumns, TSSSpecBool, TSWPSpecPadding, TSSSpecDouble, TSSSpecInteger;

@interface TSWPColumnStylePropertyChangeSet : TSSStylePropertyChangeSet {

	TSWPSpecColumns* _columns;
	TSSSpecBool* _continuous;
	TSWPSpecPadding* _margins;
	TSSSpecDouble* _minHorizontalInset;
	TSWPSpecPadding* _padding;
	TSSSpecBool* _shrinkToFit;
	TSSSpecInteger* _verticalAlignment;
	TSSSpecBool* _verticalText;
	TSSSpecInteger* _writingDirection;
	BOOL _definedColumns;
	BOOL _definedContinuous;
	BOOL _definedMargins;
	BOOL _definedMinHorizontalInset;
	BOOL _definedPadding;
	BOOL _definedShrinkToFit;
	BOOL _definedVerticalAlignment;
	BOOL _definedVerticalText;
	BOOL _definedWritingDirection;

}
-(void)setBoxedValue:(id)arg1 forProperty:(int)arg2 ;
-(void)setSpec:(id)arg1 forProperty:(int)arg2 ;
-(void)setUnsetSpecForProperty:(int)arg1 ;
-(void)enumerateDefinedPropertiesWithBlock:(/*^block*/id)arg1 ;
@end

