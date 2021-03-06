/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBWidgetViewControllerDelegate <NSObject>
@optional
-(void)remoteViewControllerDidConnectForWidget:(id)arg1;
-(void)widget:(id)arg1 requestsLaunchOfURL:(id)arg2;
-(BOOL)shouldRequestWidgetRemoteViewControllers;
-(void)attemptReconnectionAfterUnanticipatedDisconnection:(id)arg1;
-(/*^block*/id)widget:(id)arg1 didUpdatePreferredHeight:(double)arg2 completion:(/*^block*/id)arg3;
-(void)contentAvailabilityDidChangeForWidget:(id)arg1;
-(BOOL)widgetShouldAttemptReconnectionAfterUnanticipatedDisconnection:(id)arg1;
-(long long)activeLayoutModeForWidget:(id)arg1;
-(id)extensionForWidget:(id)arg1;
-(CGSize*)maxSizeForWidget:(id)arg1;
-(UIEdgeInsets*)marginInsetsForWidget:(id)arg1;

@end

