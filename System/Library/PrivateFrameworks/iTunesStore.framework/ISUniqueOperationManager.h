/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISSingleton.h>

@class ISUniqueOperationContext, NSMutableArray, NSLock, NSMutableDictionary, NSString;

@interface ISUniqueOperationManager : NSObject <ISSingleton> {

	ISUniqueOperationContext* _activeContext;
	NSMutableArray* _contexts;
	NSLock* _lock;
	NSMutableDictionary* _lockPool;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)checkInOperation:(id)arg1 ;
-(void)checkOutOperation:(id)arg1 ;
-(id)lockWithIdentifier:(id)arg1 ;
-(id)_activeContext;
-(id)_contextForOperation:(id)arg1 ;
-(id)predecessorForKey:(id)arg1 operation:(id)arg2 ;
-(void)setPredecessorIfNeeded:(id)arg1 forKey:(id)arg2 ;
-(void)uniqueOperationFinished:(id)arg1 forKey:(id)arg2 ;
@end
