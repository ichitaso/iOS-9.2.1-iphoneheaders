/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@interface CPFontInfo : NSObject <CPDisposable> {

	CFDataRef fontData;
	const char* dataPtr;
	unsigned offset;
	unsigned fontDataLength;
	BOOL valid;

}
-(void)dealloc;
-(int)kernUnitsPerEm;
-(unsigned char)readByte;
-(unsigned)readUnsignedLong;
-(float)readFloat;
-(CGRect)readRect;
-(int)readLong;
-(id)initWithFontData:(CFDataRef)arg1 ;
-(BOOL)getDescriptor:(SCD_Struct_CP27*)arg1 ;
-(CFDataRef)newKernData;
-(void)dispose;
-(void)finalize;
@end
