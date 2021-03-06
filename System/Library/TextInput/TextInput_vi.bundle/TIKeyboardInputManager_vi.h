/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/TextInput/TextInput_vi.bundle/TextInput_vi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_vi/TextInput_vi-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_vi : TIKeyboardInputManagerZephyr {

	void* m_transliterator;
	BOOL m_compositionDisabled;
	BOOL m_useInternalIndex;

}
+(void)setupUnikey;
+(void)cleanupUnikey;
-(void)dealloc;
-(unsigned)inputIndex;
-(void)setInput:(id)arg1 ;
-(id)initWithConfig:(id)arg1 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(id)externalStringToInternal:(id)arg1 ;
-(unsigned)externalIndexToInternal:(unsigned)arg1 ;
-(void)setInputIndex:(unsigned)arg1 ;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 fromVariantKey:(BOOL)arg5 ;
-(BOOL)doesComposeText;
-(void)acceptInput;
-(id)internalStringToExternal:(id)arg1 ;
-(TIInputManagerZephyr*)initImplementation;
-(unsigned)internalIndexToExternal:(unsigned)arg1 ;
-(void*)createTransliterator;
-(id)decomposeTelex:(id)arg1 ;
-(unsigned long long)deleteLengthForString:(id)arg1 ;
-(BOOL)handleThisCharacter:(unsigned short)arg1 ;
@end

