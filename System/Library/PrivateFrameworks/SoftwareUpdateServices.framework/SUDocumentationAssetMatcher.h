/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUAssetStateMatcher.h>

@class ASAsset;

@interface SUDocumentationAssetMatcher : SUAssetStateMatcher {

	ASAsset* _suAsset;

}
+(id)matcherForInstalledDocumentationFromAsset:(id)arg1 ;
+(id)matcherDocumentationFromAsset:(id)arg1 ;
-(void)dealloc;
-(id)_findMatchFromCandidates:(id)arg1 error:(id*)arg2 ;
-(id)initWithSoftwareUpdateAsset:(id)arg1 limitingToStates:(int)arg2 ;
-(id)initWithSoftwareUpdateAsset:(id)arg1 ;
-(id)_sortedMatcherPredicatesFromSoftwareUpdateAsset:(id)arg1 ;
-(id)_queryPredicateForProperties:(id)arg1 ;
@end

