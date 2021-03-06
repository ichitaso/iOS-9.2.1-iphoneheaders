/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _HKChartCachePendingFetchOperationManager : NSObject {

	NSMutableDictionary* _fetchOperationsByIdentifier;
	NSMutableDictionary* _fetchOperationsByUUID;
	NSMutableDictionary* _retryCountByIdentifier;

}
-(id)init;
-(id)allPendingIdentifiers;
-(id)fetchOperationForIdentifier:(id)arg1 ;
-(void)removeFetchOperation:(id)arg1 ;
-(void)addFetchOperation:(id)arg1 ;
-(void)incrementRetryCountForIdentifier:(id)arg1 ;
-(long long)retryCountForIdentifier:(id)arg1 ;
-(void)resetRetryCountForIdentifier:(id)arg1 ;
@end

