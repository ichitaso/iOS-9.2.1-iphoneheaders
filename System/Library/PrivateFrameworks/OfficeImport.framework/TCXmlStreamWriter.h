/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableSet;

@interface TCXmlStreamWriter : NSObject {

	xmlTextWriterRef mStreamAPI;
	unsigned mCurrentDepth;
	BOOL mContentAdded;
	NSMutableSet* mAddedIds;

}
+(BOOL)startElementInStream:(xmlTextWriterRef)arg1 name:(id)arg2 prefix:(id)arg3 ns:(const char*)arg4 ;
+(BOOL)endElementInStream:(xmlTextWriterRef)arg1 ;
+(BOOL)writeStringToStream:(xmlTextWriterRef)arg1 text:(id)arg2 ;
+(BOOL)writeAttributeToStream:(xmlTextWriterRef)arg1 name:(id)arg2 content:(id)arg3 prefix:(id)arg4 ns:(const char*)arg5 ;
+(BOOL)writeNamespaceToStream:(xmlTextWriterRef)arg1 prefix:(id)arg2 uri:(const char*)arg3 ;
+(BOOL)writeDtdToStream:(xmlTextWriterRef)arg1 name:(id)arg2 pubid:(id)arg3 sysid:(id)arg4 subset:(id)arg5 ;
+(BOOL)writeAnchorTargetToStream:(xmlTextWriterRef)arg1 name:(id)arg2 ;
+(BOOL)startPlainElementInStream:(xmlTextWriterRef)arg1 name:(id)arg2 ;
+(BOOL)writePlainAttributeToStream:(xmlTextWriterRef)arg1 name:(id)arg2 content:(id)arg3 ;
+(xmlTextWriterRef)createXmlTextWriterWithBuffer:(xmlOutputBuffer*)arg1 ;
+(void)resetElementIds;
+(xmlTextWriterRef)createXmlTextWriterWithContext:(id)arg1 ;
+(xmlTextWriterRef)createXmlTextWriterAtEntry:(id)arg1 inOutputStream:(id)arg2 isCompressed:(BOOL)arg3 ;
+(BOOL)cleanUpXmlTextWriter:(xmlTextWriterRef)arg1 ;
-(void)dealloc;
-(BOOL)startElement:(id)arg1 prefix:(id)arg2 ns:(const char*)arg3 ;
-(BOOL)endElement;
-(BOOL)writeAttribute:(id)arg1 content:(id)arg2 prefix:(id)arg3 ns:(const char*)arg4 ;
-(BOOL)writeAttribute:(id)arg1 intContent:(long long)arg2 prefix:(id)arg3 ns:(const char*)arg4 ;
-(BOOL)writeAttribute:(id)arg1 boolContent:(BOOL)arg2 prefix:(id)arg3 ns:(const char*)arg4 ;
-(BOOL)writeAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 prefix:(id)arg4 ns:(const char*)arg5 ;
-(BOOL)writeAttribute:(id)arg1 doubleContent:(double)arg2 prefix:(id)arg3 ns:(const char*)arg4 ;
-(BOOL)writePlainAttribute:(id)arg1 content:(id)arg2 ;
-(id)initWithTextWriter:(xmlTextWriterRef)arg1 ;
-(xmlTextWriterRef)textWriter;
-(BOOL)contentAdded;
-(BOOL)startPlainElement:(id)arg1 ;
-(BOOL)writeString:(id)arg1 ;
-(BOOL)endElementsToBase;
-(BOOL)writePlainAttribute:(id)arg1 intContent:(long long)arg2 ;
-(BOOL)writePlainAttribute:(id)arg1 boolContent:(BOOL)arg2 ;
-(BOOL)writePlainAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 ;
-(BOOL)writePlainAttribute:(id)arg1 doubleContent:(double)arg2 ;
-(BOOL)writeElementId:(id)arg1 ;
-(BOOL)writeNamespace:(id)arg1 uri:(const char*)arg2 ;
-(BOOL)writeDtd:(id)arg1 pubid:(id)arg2 sysid:(id)arg3 subset:(id)arg4 ;
-(BOOL)writeAnchorTarget:(id)arg1 ;
@end
