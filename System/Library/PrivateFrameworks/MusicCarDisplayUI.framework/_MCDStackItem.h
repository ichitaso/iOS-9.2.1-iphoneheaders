/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSIndexPath;

@interface _MCDStackItem : NSObject {

	NSString* _identifier;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
+(id)stackItemWithContainer:(id)arg1 ;
-(id)description;
-(NSIndexPath *)indexPath;
-(NSString *)identifier;
@end

