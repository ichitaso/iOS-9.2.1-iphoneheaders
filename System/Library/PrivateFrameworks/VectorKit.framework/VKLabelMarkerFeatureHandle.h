/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class GEOFeatureStyleAttributes;

@interface VKLabelMarkerFeatureHandle : NSObject {

	int _featureType;
	long long _featureIndex;
	int _tileX;
	int _tileY;
	int _tileZ;
	int _tileStyle;
	unsigned _tileVersion;
	GEOFeatureStyleAttributes* _styleAttributes;

}
-(void)dealloc;
-(id)styleAttributes;
-(int)featureType;
-(long long)featureIndex;
-(int)tileStyle;
-(int)tileX;
-(int)tileY;
-(int)tileZ;
-(unsigned)tileVersion;
-(id)initWithFeature:(SCD_Struct_VK77*)arg1 featureType:(int)arg2 ;
@end
