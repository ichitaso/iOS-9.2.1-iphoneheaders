/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKCSSParseObject.h>

@class NSArray, IKCSSParseBlock;

@interface IKCSSParseRule : IKCSSParseObject {

	NSArray* _prelude;
	IKCSSParseBlock* _block;

}

@property (nonatomic,retain) NSArray * prelude;                    //@synthesize prelude=_prelude - In the implementation block
@property (nonatomic,retain) IKCSSParseBlock * block;              //@synthesize block=_block - In the implementation block
-(id)init;
-(id)description;
-(IKCSSParseBlock *)block;
-(void)setBlock:(IKCSSParseBlock *)arg1 ;
-(NSArray *)prelude;
-(void)setPrelude:(NSArray *)arg1 ;
@end
