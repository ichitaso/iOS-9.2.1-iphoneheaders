/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _HDSourceManagerCacheItem : NSObject {

	BOOL _userOrdered;
	NSArray* _sources;
	NSArray* _sourceIDs;

}

@property (nonatomic,retain) NSArray * sources;                //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) NSArray * sourceIDs;              //@synthesize sourceIDs=_sourceIDs - In the implementation block
@property (assign,nonatomic) BOOL userOrdered;                 //@synthesize userOrdered=_userOrdered - In the implementation block
-(id)init;
-(id)description;
-(void)setSources:(NSArray *)arg1 ;
-(NSArray *)sources;
-(id)initWithSources:(id)arg1 IDs:(id)arg2 userOrdered:(BOOL)arg3 ;
-(NSArray *)sourceIDs;
-(BOOL)userOrdered;
-(void)setSourceIDs:(NSArray *)arg1 ;
-(void)setUserOrdered:(BOOL)arg1 ;
@end
