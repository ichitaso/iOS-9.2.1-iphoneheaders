/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSDDrawableLayout.h>

@class TSDWrapPolygon;

@interface SXTextTangierAttachmentLayout : TSDDrawableLayout {

	TSDWrapPolygon* _polygon;
	double _extraY;

}

@property (nonatomic,retain) TSDWrapPolygon * polygon;              //@synthesize polygon=_polygon - In the implementation block
@property (assign,nonatomic) double extraY;                         //@synthesize extraY=_extraY - In the implementation block
-(CGRect)boundsInRoot;
-(void)setExtraY:(double)arg1 ;
-(void)setPolygon:(TSDWrapPolygon *)arg1 ;
-(void)storeActualPosition;
-(double)extraY;
-(void)fixTransformFromInterimPosition;
-(CGRect)boundsInfluencingExteriorWrap;
-(id)wrapPolygon;
-(void)validate;
-(TSDWrapPolygon *)polygon;
@end

