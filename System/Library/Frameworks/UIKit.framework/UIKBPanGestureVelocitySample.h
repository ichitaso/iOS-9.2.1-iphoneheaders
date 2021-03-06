/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIKBPanGestureVelocitySample : NSObject {

	CGPoint start;
	CGPoint end;
	double dt;
	double force;
	double majorRadius;

}

@property (assign) CGPoint start; 
@property (assign) CGPoint end; 
@property (assign) double dt; 
@property (assign) double force; 
@property (assign) double majorRadius; 
-(double)force;
-(void)setForce:(double)arg1 ;
-(void)setMajorRadius:(double)arg1 ;
-(CGPoint)start;
-(void)setStart:(CGPoint)arg1 ;
-(CGPoint)end;
-(void)setEnd:(CGPoint)arg1 ;
-(double)dt;
-(void)setDt:(double)arg1 ;
-(double)majorRadius;
-(void)pullValuesFrom:(id)arg1 ;
-(void)resetValues;
@end

