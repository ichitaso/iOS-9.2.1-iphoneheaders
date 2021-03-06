/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicNavigationController.h>
#import <libobjc.A.dylib/MusicJSAccountNativeViewControllerDelegate.h>
#import <libobjc.A.dylib/MusicJSNativeViewControllerFactory.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>

@class MusicClientContext, NSString, SKUIClientContext;

@interface MusicAccountNavigationController : MusicNavigationController <MusicJSAccountNativeViewControllerDelegate, MusicJSNativeViewControllerFactory, MusicClientContextConsuming> {

	BOOL _registeredWithModalNavigationStackRegistry;
	MusicClientContext* _clientContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
+(BOOL)automaticallyInstallAccountBarButtonItem;
+(BOOL)automaticallyInstallSearchBarButtonItem;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)loadJSNativeViewControllerWithAppContext:(id)arg1 ;
-(void)_setRegisteredWithModalNavigationStackRegistry:(BOOL)arg1 ;
-(void)jsAccountNativeViewController:(id)arg1 setAccountDocument:(id)arg2 options:(id)arg3 ;
-(void)jsDidCloseAccountNativeViewController:(id)arg1 ;
@end

