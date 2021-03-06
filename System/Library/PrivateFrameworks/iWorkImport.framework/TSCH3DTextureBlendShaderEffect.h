/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DShaderEffect.h>

@interface TSCH3DTextureBlendShaderEffect : TSCH3DShaderEffect
+(void)setBlendFactor:(float)arg1 unit:(long long)arg2 effectsStates:(id)arg3 ;
+(id)variableBlendFactor;
+(id)variableBlendTexture;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)effect;
+(id)_singletonAlloc;
-(void)addVariables:(id)arg1 ;
-(void)inject:(id)arg1 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 ;
-(id)variableBlendFactor;
-(id)variableBlendTexture;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

