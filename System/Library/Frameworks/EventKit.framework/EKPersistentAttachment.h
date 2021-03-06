/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSNumber, NSDictionary;

@interface EKPersistentAttachment : EKPersistentObject <NSCopying>

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,readonly) BOOL isBinary; 
@property (nonatomic,copy) NSString * fileName; 
@property (nonatomic,copy) NSString * fileFormat; 
@property (nonatomic,copy) NSURL * localURL; 
@property (nonatomic,copy) NSNumber * fileSize; 
@property (nonatomic,copy) NSDictionary * XProperties; 
+(id)relations;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UUID;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)localURL;
-(int)entityType;
-(NSDictionary *)XProperties;
-(void)setXProperties:(NSDictionary *)arg1 ;
-(void)setIsBinary:(BOOL)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(void)setLocalURL:(NSURL *)arg1 ;
-(NSString *)fileFormat;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(void)setFileFormat:(NSString *)arg1 ;
-(NSNumber *)fileSize;
-(BOOL)isBinary;
@end

