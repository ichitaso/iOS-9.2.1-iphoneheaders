/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFBrowserRemoveViewControllerDelegate <NSObject>
@required
-(void)remoteViewControllerDidLoadWebView:(id)arg1;
-(void)remoteViewControllerWillDismiss:(id)arg1;
-(void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
-(void)remoteViewController:(id)arg1 willUpdateStatusBarStyle:(long long)arg2;
-(void)remoteViewController:(id)arg1 setSwipeGestureEnabled:(BOOL)arg2;
-(void)remoteViewController:(id)arg1 didFinishInitialLoad:(BOOL)arg2;
-(void)remoteViewController:(id)arg1 fetchHostAppCustomActivitiesForURL:(id)arg2 title:(id)arg3;
-(void)remoteViewController:(id)arg1 executeCustomActivityProxyID:(id)arg2;

@end
