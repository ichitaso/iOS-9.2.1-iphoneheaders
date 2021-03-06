/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
#import <CarouselLayoutSettings/CSLUILayoutIconView.h>
#import <CarouselLayoutSettings/CSLUILiveCalendarIconSourceDelegate.h>

@class CSLUILiveCalendarIconSource, UIImageView, NSString;

@interface CSLUILayoutCalendarView : CSLUILayoutIconView <CSLUILiveCalendarIconSourceDelegate> {

	CSLUILiveCalendarIconSource* _iconSource;
	UIImageView* _imageView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)calendarLiveImageSource:(id)arg1 updatedImage:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
@end

