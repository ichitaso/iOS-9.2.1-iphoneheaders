/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPComponentWriteChannel.h>

@protocol TSPComponentWriteChannel, TSPMutableCryptoInfo;
@class NSString;

@interface TSPCryptoComponentWriteChannel : NSObject <TSPComponentWriteChannel> {

	id<TSPComponentWriteChannel> _writeChannel;
	id<TSPMutableCryptoInfo> _encryptionInfo;
	char* _buffer;
	CCCryptorRef _cryptor;
	SCD_Struct_TS268 _ccHmacContext;
	unsigned long long _encodedBlockLength;
	unsigned long long _decryptedBlockLength;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWriteChannel:(id)arg1 encryptionInfo:(id)arg2 ;
-(BOOL)_initializeBlock;
-(void)_writeData:(id)arg1 isDecryptedData:(BOOL)arg2 ;
-(BOOL)_finalizeBlockForClosing:(BOOL)arg1 ;
-(void)dealloc;
-(void)close;
-(void)writeData:(id)arg1 ;
@end
