/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TSDGLDataArrayBuffer, TSDGLDataBuffer;

@interface TSDGLDataBufferAttribute : NSObject {

	BOOL _isNormalized;
	unsigned _bufferUsage;
	int _componentCount;
	int _locationInShader;
	NSString* _name;
	long long _dataType;
	unsigned long long _bufferOffset;
	TSDGLDataArrayBuffer* _dataArrayBuffer;
	TSDGLDataBuffer* _dataBuffer;

}

@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned bufferUsage;                              //@synthesize bufferUsage=_bufferUsage - In the implementation block
@property (nonatomic,readonly) long long dataType;                                //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) int componentCount;                                //@synthesize componentCount=_componentCount - In the implementation block
@property (nonatomic,readonly) BOOL isNormalized;                                 //@synthesize isNormalized=_isNormalized - In the implementation block
@property (assign,nonatomic) int locationInShader;                                //@synthesize locationInShader=_locationInShader - In the implementation block
@property (assign,nonatomic) unsigned long long bufferOffset;                     //@synthesize bufferOffset=_bufferOffset - In the implementation block
@property (assign,nonatomic) TSDGLDataArrayBuffer * dataArrayBuffer;              //@synthesize dataArrayBuffer=_dataArrayBuffer - In the implementation block
@property (assign,nonatomic) TSDGLDataBuffer * dataBuffer;                        //@synthesize dataBuffer=_dataBuffer - In the implementation block
+(id)attributeWithName:(id)arg1 bufferUsage:(unsigned)arg2 dataType:(long long)arg3 normalized:(BOOL)arg4 componentCount:(unsigned long long)arg5 ;
-(id)initWithName:(id)arg1 bufferUsage:(unsigned)arg2 dataType:(long long)arg3 normalized:(BOOL)arg4 componentCount:(unsigned long long)arg5 ;
-(int)componentCount;
-(unsigned)bufferUsage;
-(BOOL)isNormalized;
-(void)setBufferUsage:(unsigned)arg1 ;
-(void)setComponentCount:(int)arg1 ;
-(int)locationInShader;
-(void)setLocationInShader:(int)arg1 ;
-(void)setBufferOffset:(unsigned long long)arg1 ;
-(TSDGLDataArrayBuffer *)dataArrayBuffer;
-(void)setDataArrayBuffer:(TSDGLDataArrayBuffer *)arg1 ;
-(TSDGLDataBuffer *)dataBuffer;
-(void)setDataBuffer:(TSDGLDataBuffer *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned long long)bufferOffset;
-(long long)dataType;
@end

