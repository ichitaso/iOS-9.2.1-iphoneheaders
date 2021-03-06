/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DGLHandle.h>

@class TSCH3DShaderHandle, TSCH3DShaderEffectsStates, NSMutableDictionary;

@interface TSCH3DShaderProgramHandle : TSCH3DGLHandle {

	TSCH3DShaderHandle* mVertexShader;
	TSCH3DShaderHandle* mFragmentShader;
	TSCH3DShaderEffectsStates* mCurrentEffectsStates;
	NSMutableDictionary* mUniformLocations;
	NSMutableDictionary* mAttributeLocations;

}

@property (nonatomic,readonly) TSCH3DShaderHandle * vertexShader; 
@property (nonatomic,readonly) TSCH3DShaderHandle * fragmentShader; 
@property (nonatomic,readonly) TSCH3DShaderEffectsStates * currentEffectsStates; 
@property (nonatomic,readonly) NSMutableDictionary * uniformLocations; 
@property (nonatomic,readonly) NSMutableDictionary * attributeLocations; 
-(void)destroyResourcesInContext:(id)arg1 ;
-(id)initWithGLHandle:(unsigned)arg1 ;
-(TSCH3DShaderEffectsStates *)currentEffectsStates;
-(NSMutableDictionary *)uniformLocations;
-(NSMutableDictionary *)attributeLocations;
-(void)dealloc;
-(TSCH3DShaderHandle *)vertexShader;
-(TSCH3DShaderHandle *)fragmentShader;
@end

