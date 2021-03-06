/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBTransaction.h>

@class NSSet, NSMutableSet;

@interface SBAppRepairTransaction : FBTransaction {

	NSSet* _appInfos;
	NSMutableSet* _repairRequests;

}

@property (nonatomic,copy,readonly) NSSet * appInfos;              //@synthesize appInfos=_appInfos - In the implementation block
-(void)_startAppRepairs;
-(void)_completeRequest:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(id)initWithApplicationInfos:(id)arg1 ;
-(NSSet *)appInfos;
-(void)_evaluateCompletion;
-(void)dealloc;
-(void)_didComplete;
-(BOOL)_canBeInterrupted;
-(void)_begin;
@end

