/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CNStack : NSObject {

	NSMutableArray* _objects;

}

@property (nonatomic,readonly) id peek; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)peek;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)pop;
-(void)push:(id)arg1 ;
@end
