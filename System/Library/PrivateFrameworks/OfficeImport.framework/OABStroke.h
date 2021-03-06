/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABStroke : NSObject
+(char)readPresetDashStyle:(int)arg1 ;
+(unsigned char)readLineEndType:(int)arg1 ;
+(unsigned char)readLineEndWidth:(int)arg1 ;
+(unsigned char)readLineEndLength:(int)arg1 ;
+(unsigned char)readCapStyle:(int)arg1 ;
+(unsigned char)readCompoundType:(int)arg1 ;
+(int)writeCompoundType:(unsigned char)arg1 ;
+(int)writePresetDashStyle:(char)arg1 ;
+(int)writeLineEndType:(unsigned char)arg1 ;
+(int)writeLineEndWidth:(unsigned char)arg1 ;
+(int)writeLineEndLength:(unsigned char)arg1 ;
+(int)writeCapStyle:(unsigned char)arg1 ;
+(void)writePresetDashStyleForCustomDash:(id)arg1 toStroke:(EshStroke*)arg2 state:(id)arg3 ;
+(id)readStrokeFromShapeBaseManager:(id)arg1 state:(id)arg2 ;
+(id)readLineEndWithType:(int)arg1 width:(int)arg2 length:(int)arg3 ;
@end

