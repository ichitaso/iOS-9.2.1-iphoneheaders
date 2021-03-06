/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOLogAdaptor <NSObject>
@optional
-(void)adaptorDidGetRemoved:(id)arg1;
-(void)adaptorDidGetAdded:(id)arg1;
-(void)adaptorWillGetRemoved:(id)arg1;
-(void)adaptorWillGetAdded:(id)arg1;

@required
-(void)queueLogMessage:(id)arg1;
-(void)flushLogs;
-(id)adaptorQueue;
-(BOOL)acceptsLogMessageOfType:(int)arg1 subType:(int)arg2;

@end

