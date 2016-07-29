/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSMutableSet, NSMutableDictionary, BKSApplicationStateMonitor, FBSDisplayLayoutMonitor, FBSDisplayLayout, NSString, UACornerActionManager, NSArray;

@interface UAUserActivityClientProcessesController : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _activityManagerListener;
	NSMutableSet* _clients;
	NSMutableDictionary* _userActivityClientsByUUID;
	NSMutableDictionary* _userActivityClientsByPID;
	NSMutableSet* _visibleUserActivityClients;
	BKSApplicationStateMonitor* _appStateMonitor;
	NSMutableDictionary* _userActivityClientsByBundleID;
	BKSApplicationStateMonitor* appStateMonitor;
	FBSDisplayLayoutMonitor* layoutMonitor;
	FBSDisplayLayout* layout;
	NSString* frontBundleID;
	UACornerActionManager* _manager;

}

@property (retain,readonly) UACornerActionManager * manager;                  //@synthesize manager=_manager - In the implementation block
@property (copy,readonly) NSArray * userActivityClients; 
@property (retain) BKSApplicationStateMonitor * appStateMonitor; 
@property (retain) FBSDisplayLayoutMonitor * layoutMonitor; 
@property (retain) FBSDisplayLayout * layout; 
@property (copy) NSString * frontBundleID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)eligibleAdvertiseableItemsInOrder;
-(id)userActivityClientForUUID:(id)arg1 ;
-(FBSDisplayLayoutMonitor *)layoutMonitor;
-(void)setLayoutMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(void)handleAppStateMonitorUpdate:(id)arg1 ;
-(void)layoutMonitorUpdate:(id)arg1 ;
-(id)userActivityClientForBundleIdentifier:(id)arg1 ;
-(NSString *)frontBundleID;
-(void)setFrontBundleID:(NSString *)arg1 ;
-(NSArray *)userActivityClients;
-(id)advertiseableItemForBundleIdentifier:(id)arg1 ;
-(void)addUserActivityClient:(id)arg1 ;
-(void)addUUID:(id)arg1 forClient:(id)arg2 ;
-(void)removeUUID:(id)arg1 forClient:(id)arg2 ;
-(id)userActivityClientForPID:(int)arg1 ;
-(void)removeClientActivityClient:(id)arg1 ;
-(BOOL)clientIsVisible:(id)arg1 ;
-(UACornerActionManager *)manager;
-(void)dealloc;
-(void)suspend;
-(FBSDisplayLayout *)layout;
-(void)resume;
-(void)setLayout:(FBSDisplayLayout *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithManager:(id)arg1 ;
-(id)statusString;
-(BKSApplicationStateMonitor *)appStateMonitor;
-(void)setAppStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
@end
