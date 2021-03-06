/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSCH3DLens : NSObject <NSCopying> {

	float mNear;
	float mFar;

}

@property (assign,nonatomic) float near; 
@property (assign,nonatomic) float far; 
+(id)lens;
-(void)setFar:(float)arg1 ;
-(float)near;
-(float)far;
-(void)calculateCullingPlanes:(vector<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > >*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setNear:(float)arg1 ;
@end

