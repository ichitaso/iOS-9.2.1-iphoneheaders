/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSNetServiceBrowser, NSMapTable, NSArray, NSString;

@interface TRDBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSNetServiceBrowser* _browser;
	unsigned long long _browsingCount;
	NSMapTable* _netServiceToService;
	NSMapTable* _netServiceToResolvingCompletionHandlers;
	NSMapTable* _XPCConnectionToBrowsingCount;

}

@property (getter=isBrowsing,nonatomic,readonly) BOOL browsing; 
@property (nonatomic,copy,readonly) NSArray * services; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedBrowser;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(NSArray *)services;
-(void)stopBrowsing;
-(BOOL)isBrowsing;
-(void)startBrowsing;
-(void)TRXPCD_stopBrowsing;
-(void)TRXPCD_getServicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)TRXPCD_startBrowsing;
-(BOOL)_isXPCConnectionBrowsing:(id)arg1 ;
-(void)_callResolvingCompletionHandlersForNetService:(id)arg1 withError:(id)arg2 ;
-(id)_netServiceForService:(id)arg1 ;
-(void)_resolveNetService:(id)arg1 withTimeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_serviceForNetService:(id)arg1 ;
@end

