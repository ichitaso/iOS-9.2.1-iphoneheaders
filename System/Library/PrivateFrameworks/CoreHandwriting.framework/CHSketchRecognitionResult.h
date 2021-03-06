/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHRecognitionResult.h>

@class NSString;

@interface CHSketchRecognitionResult : CHRecognitionResult {

	NSString* _string;
	double _rotation;

}

@property (readonly) NSString * string;              //@synthesize string=_string - In the implementation block
@property (readonly) double rotation;                //@synthesize rotation=_rotation - In the implementation block
-(void)dealloc;
-(NSString *)string;
-(double)rotation;
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 ;
@end

