/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Restaurants/Restaurants-Structs.h>
@class SiriRestaurantsPhotoLayoutConfiguration;

@interface SiriRestaurantsPhotoLayout : NSObject {

	double _width;
	long long _numberOfPhotos;
	SiriRestaurantsPhotoLayoutConfiguration* _bestConfiguration;

}
-(id)_bestConfiguration;
-(double)interphotoSpacing;
-(id)initWithWidth:(double)arg1 numberOfPhotos:(long long)arg2 ;
-(id)init;
-(double)height;
-(id)_configurations;
-(UIEdgeInsets)insets;
-(CGSize)photoSize;
@end

