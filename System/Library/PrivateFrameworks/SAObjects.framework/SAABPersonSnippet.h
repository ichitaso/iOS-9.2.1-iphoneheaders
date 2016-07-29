/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SAABPersonSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * displayProperties; 
@property (nonatomic,copy) NSArray * persons; 
+(id)personSnippet;
+(id)personSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)displayProperties;
-(void)setDisplayProperties:(NSArray *)arg1 ;
-(NSArray *)persons;
-(void)setPersons:(NSArray *)arg1 ;
-(id)encodedClassName;
@end
