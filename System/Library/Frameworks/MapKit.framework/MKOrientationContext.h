/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSMutableArray, NSArray;

@interface MKOrientationContext : NSObject {

	NSMutableArray* orientViews;
	NSArray* relativeViews;
	UIView* projectionView;
	CGRect* relativeViewFrames;

}
-(void)dealloc;
-(void)_computeRelativeViewFrame:(id)arg1 ;
-(void)_computeRelativeViewFrames;
-(id)initWithViewsToOrient:(id)arg1 relativeViews:(id)arg2 projectionView:(UIView*)arg3 ;
-(void)invalidateView:(id)arg1 ;
@end

