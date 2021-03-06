/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADEffect.h>

@class OADColor;

@interface OADShadowEffect : OADEffect {

	OADColor* mColor;
	float mBlurRadius;
	float mDistance;
	float mAngle;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setBlurRadius:(float)arg1 ;
-(float)blurRadius;
-(id)initWithType:(int)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setAngle:(float)arg1 ;
-(float)angle;
-(void)setDistance:(float)arg1 ;
-(float)distance;
-(void)setStyleColor:(id)arg1 ;
-(id)initWithShadowEffect:(id)arg1 type:(int)arg2 ;
@end

