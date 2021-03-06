/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXFillView.h>

@class NSArray, SXGradientFill;

@interface SXGradientView : SXFillView {

	NSArray* _locations;
	NSArray* _colors;
	SXGradientFill* _gradientFill;

}

@property (nonatomic,readonly) SXGradientFill * gradientFill;              //@synthesize gradientFill=_gradientFill - In the implementation block
@property (nonatomic,readonly) NSArray * locations;                        //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) NSArray * colors;                           //@synthesize colors=_colors - In the implementation block
+(Class)layerClass;
-(id)initWithGradientFill:(id)arg1 ;
-(void)setupGradientLayer;
-(SXGradientFill *)gradientFill;
-(NSArray *)colors;
-(NSArray *)locations;
@end

