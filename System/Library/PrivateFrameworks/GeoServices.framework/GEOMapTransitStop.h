/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapTransitStop <GEOMapTransitPoint>
@property (nonatomic,readonly) unsigned long long hallID; 
@required
-(unsigned long long)hallID;
-(id)findLinksIn:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findLinksOut:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findHall:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;

@end

