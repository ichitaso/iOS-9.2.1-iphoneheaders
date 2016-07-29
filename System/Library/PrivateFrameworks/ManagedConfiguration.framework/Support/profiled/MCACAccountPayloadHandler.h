/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/MCNewPayloadHandler.h>

@class ACAccount;

@interface MCACAccountPayloadHandler : MCNewPayloadHandler {

	ACAccount* _setAsideAccount;

}

@property (nonatomic,retain) ACAccount * setAsideAccount;              //@synthesize setAsideAccount=_setAsideAccount - In the implementation block
-(id)_destructiveDataclassActionsForRemovalOfAccount:(id)arg1 ;
-(void)_deleteAccountAndAssociatedData:(id)arg1 ;
-(ACAccount *)setAsideAccount;
-(void)setSetAsideAccount:(ACAccount *)arg1 ;
@end
