/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EDTableFilter : NSObject {

	int mScale;
	int mOperator;
	double mValue;
	double mFilterValue;

}
+(id)edTableFilter;
-(id)description;
-(void)setScale:(int)arg1 ;
-(int)scale;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)setOperatorType:(int)arg1 ;
-(void)setFilterValue:(double)arg1 ;
-(double)filterValue;
-(int)operatorType;
@end

