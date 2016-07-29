/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <AssistantServices/AFDataDecompressor.h>

@interface AFZlibDataDecompressor : AFDataDecompressor {

	z_stream_s* _inflateStream;
	unsigned char _inflateBuffer[8192];

}
-(void)dealloc;
-(id)init;
-(id)decompressedDataForBytes:(const void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)decompressedDataForData:(id)arg1 error:(id*)arg2 ;
@end
