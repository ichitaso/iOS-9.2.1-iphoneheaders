/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSMutableArray, NSFileAccessNode;

@interface NSFileMultipleAccessClaim : NSFileAccessClaim {

	NSMutableArray* _readingURLs;
	unsigned long long* _readingOptions;
	BOOL* _readingURLsDidChange;
	NSMutableArray* _writingURLs;
	unsigned long long* _writingOptions;
	BOOL* _writingURLsDidChange;
	NSMutableArray* _readingLocations;
	NSMutableArray* _writingLocations;
	NSFileAccessNode* _rootNode;
	unsigned long long _currentlyLinkResolvingURLIndex;
	long long _readingLinkResolutionCount;

}
-(BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2 ;
-(void)forwardUsingMessageSender:(/*^block*/id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(id)initWithClient:(id)arg1 messageParameters:(id)arg2 arbiterQueue:(id)arg3 replySender:(/*^block*/id)arg4 ;
-(id)allURLs;
-(void)granted;
-(void)invokeClaimer;
-(BOOL)blocksClaim:(id)arg1 ;
-(void)devalueSelf;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)shouldBeRevokedPriorToInvokingAccessor;
-(void)resolveURLsThenMaybeContinueInvokingClaimer:(/*^block*/id)arg1 ;
-(id)initWithPurposeID:(id)arg1 intents:(id)arg2 claimer:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)finalize;
@end
