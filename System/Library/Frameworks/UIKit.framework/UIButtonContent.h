/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSAttributedString, UIImage, UIColor, NSNumber, _UIGraphicsLetterpressStyle;

@interface UIButtonContent : NSObject <NSCoding, NSCopying> {

	NSString* title;
	NSAttributedString* attributedTitle;
	UIImage* image;
	UIImage* background;
	UIColor* titleColor;
	UIColor* imageColor;
	UIColor* shadowColor;
	NSNumber* drawingStroke;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSAttributedString * attributedTitle; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * background; 
@property (nonatomic,retain) UIColor * titleColor; 
@property (nonatomic,retain) UIColor * imageColor; 
@property (nonatomic,retain) UIColor * shadowColor; 
@property (nonatomic,retain) NSNumber * drawingStroke; 
@property (nonatomic,retain) _UIGraphicsLetterpressStyle * letterpressStyle; 
@property (nonatomic,readonly) BOOL isEmpty; 
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(UIImage *)image;
-(void)setShadowColor:(UIColor *)arg1 ;
-(UIColor *)shadowColor;
-(void)setLetterpressStyle:(_UIGraphicsLetterpressStyle *)arg1 ;
-(_UIGraphicsLetterpressStyle *)letterpressStyle;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(NSAttributedString *)attributedTitle;
-(UIImage *)background;
-(void)setBackground:(UIImage *)arg1 ;
-(UIColor *)imageColor;
-(void)setImageColor:(UIColor *)arg1 ;
-(NSNumber *)drawingStroke;
-(void)setDrawingStroke:(NSNumber *)arg1 ;
@end

