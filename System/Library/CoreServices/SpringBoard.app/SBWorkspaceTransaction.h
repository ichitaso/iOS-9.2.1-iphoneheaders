/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBTransaction.h>

@class NSMutableSet, FBSDisplay, SBWorkspaceTransitionRequest, SBAlertManager, SBSceneLayoutViewController;

@interface SBWorkspaceTransaction : FBTransaction {

	NSMutableSet* _slaveTransactions;
	BOOL _clearsCompletionAsynchronously;
	FBSDisplay* _display;
	SBWorkspaceTransitionRequest* _transitionRequest;
	SBAlertManager* _alertManager;
	SBSceneLayoutViewController* _layoutController;

}

@property (nonatomic,retain,readonly) FBSDisplay * display;                                          //@synthesize display=_display - In the implementation block
@property (nonatomic,retain,readonly) SBWorkspaceTransitionRequest * transitionRequest;              //@synthesize transitionRequest=_transitionRequest - In the implementation block
@property (nonatomic,retain,readonly) SBAlertManager * alertManager;                                 //@synthesize alertManager=_alertManager - In the implementation block
@property (nonatomic,retain,readonly) SBSceneLayoutViewController * layoutController;                //@synthesize layoutController=_layoutController - In the implementation block
@property (assign,nonatomic) BOOL clearsCompletionAsynchronously;                                    //@synthesize clearsCompletionAsynchronously=_clearsCompletionAsynchronously - In the implementation block
-(SBSceneLayoutViewController *)layoutController;
-(id)initWithTransitionRequest:(id)arg1 ;
-(SBAlertManager *)alertManager;
-(SBWorkspaceTransitionRequest *)transitionRequest;
-(void)addSlaveTransaction:(id)arg1 ;
-(BOOL)clearsCompletionAsynchronously;
-(id)slaveTransactions;
-(void)_performDeviceCoherencyCheck;
-(void)keepAliveForAsyncBlock:(/*^block*/id)arg1 ;
-(void)setClearsCompletionAsynchronously:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(FBSDisplay *)display;
-(void)_didComplete;
-(id)_customizedDescriptionProperties;
@end
