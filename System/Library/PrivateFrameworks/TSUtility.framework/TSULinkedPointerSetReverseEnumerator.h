/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class TSULinkedPointerSetEntry;

@interface TSULinkedPointerSetReverseEnumerator : NSEnumerator {

	TSULinkedPointerSetEntry* mTail;
	TSULinkedPointerSetEntry* mLastUsed;

}
-(id)nextObject;
-(id)initWithLastEntry:(id)arg1 ;
@end

