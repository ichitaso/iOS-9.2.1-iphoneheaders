/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSArray;

@interface _MKStackView : UIView {

	NSArray* _stackConstraints;
	NSArray* _stackedSubviews;

}

@property (nonatomic,copy) NSArray * stackedSubviews;              //@synthesize stackedSubviews=_stackedSubviews - In the implementation block
-(void)updateConstraints;
-(void)setStackedSubviews:(NSArray *)arg1 ;
-(NSArray *)stackedSubviews;
@end

