/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSDictionary;

@interface MCBookmarkManager : NSObject {

	int _notificationToken;
	NSObject*<OS_dispatch_queue> _memberQueue;
	NSArray* _memberQueueCurrentUserBookmarks;
	NSDictionary* _memberQueueStashedBookmarksByLabel;

}

@property (nonatomic,copy) NSArray * userBookmarks; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                       //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSArray * memberQueueCurrentUserBookmarks;                      //@synthesize memberQueueCurrentUserBookmarks=_memberQueueCurrentUserBookmarks - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueStashedBookmarksByLabel;              //@synthesize memberQueueStashedBookmarksByLabel=_memberQueueStashedBookmarksByLabel - In the implementation block
@property (assign,nonatomic) int notificationToken;                                          //@synthesize notificationToken=_notificationToken - In the implementation block
+(id)sharedManager;
-(void)memberQueueRereadBookmarks;
-(void)memberQueueSetUserBookmarks:(id)arg1 ;
-(NSArray *)memberQueueCurrentUserBookmarks;
-(void)memberQueueSetStashedUserBookmarksByLabel:(id)arg1 ;
-(void)memberQueueStashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2 ;
-(void)setMemberQueueCurrentUserBookmarks:(NSArray *)arg1 ;
-(NSDictionary *)memberQueueStashedBookmarksByLabel;
-(void)setMemberQueueStashedBookmarksByLabel:(NSDictionary *)arg1 ;
-(int)notificationToken;
-(void)setNotificationToken:(int)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setUserBookmarks:(NSArray *)arg1 ;
-(NSArray *)userBookmarks;
-(void)unstashUserBookmarksFromLabel:(id)arg1 ;
-(void)stashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2 ;
@end
