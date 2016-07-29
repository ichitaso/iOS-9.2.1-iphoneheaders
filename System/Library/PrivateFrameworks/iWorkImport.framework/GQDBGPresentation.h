/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDRoot.h>

@interface GQDBGPresentation : GQDRoot {

	CFArrayRef mThemes;
	CGSize mSlideSize;

}
+(id)parseNumberOutOfBasename:(id)arg1 returningNumber:(int*)arg2 ;
+(xmlNs*)appNamespace;
+(void)initialize;
-(CFStringRef)createUpgradedAppBundleResourcePath:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 ;
-(void)loadAppBundleResourceToColorMap;
-(void)addTheme:(id)arg1 ;
-(id)colorForMissingAppBundleResource:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 ;
-(CFURLRef)createUrlToAppBundleResource:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 fileUrl:(CFURLRef)arg3 ;
-(void)initializeAppBundleResourcesUrl:(CFURLRef)arg1 ;
-(void)dealloc;
-(id)init;
-(CGSize)slideSize;
-(CFArrayRef)themes;
@end
