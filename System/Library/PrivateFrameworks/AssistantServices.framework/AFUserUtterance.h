/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString, NSDictionary, NSArray;

@interface AFUserUtterance : NSObject {

	NSMutableArray* _phrases;
	NSMutableArray* _tokens;
	NSString* _text;
	NSDictionary* _correctionIdentifier;

}

@property (nonatomic,readonly) NSDictionary * correctionIdentifier;              //@synthesize correctionIdentifier=_correctionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * dictationResult; 
-(id)description;
-(id)bestTextInterpretation;
-(id)initWithPhrases:(id)arg1 correctionIdentifier:(id)arg2 ;
-(id)initWithTokens:(id)arg1 correctionIdentifier:(id)arg2 ;
-(id)initWithString:(id)arg1 correctionIdentifier:(id)arg2 ;
-(NSArray *)dictationResult;
-(id)streamingTokens;
-(NSDictionary *)correctionIdentifier;
@end

