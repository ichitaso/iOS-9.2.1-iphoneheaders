/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DAFolder : NSObject {

	BOOL _isDefault;
	BOOL _hasRemoteChanges;
	NSString* _folderName;
	NSString* _folderID;
	NSString* _parentFolderID;
	long long _dataclass;

}

@property (nonatomic,copy) NSString * folderName;                  //@synthesize folderName=_folderName - In the implementation block
@property (nonatomic,copy) NSString * folderID;                    //@synthesize folderID=_folderID - In the implementation block
@property (nonatomic,copy) NSString * parentFolderID;              //@synthesize parentFolderID=_parentFolderID - In the implementation block
@property (assign,nonatomic) long long dataclass;                  //@synthesize dataclass=_dataclass - In the implementation block
@property (assign,nonatomic) BOOL isDefault;                       //@synthesize isDefault=_isDefault - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteChanges;                //@synthesize hasRemoteChanges=_hasRemoteChanges - In the implementation block
-(id)parentMailboxID;
-(id)mailboxID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isDefault;
-(void)setIsDefault:(BOOL)arg1 ;
-(BOOL)hasRemoteChanges;
-(void)setHasRemoteChanges:(BOOL)arg1 ;
-(NSString *)folderID;
-(NSString *)folderName;
-(NSString *)parentFolderID;
-(void)setFolderID:(NSString *)arg1 ;
-(void)setFolderName:(NSString *)arg1 ;
-(void)setParentFolderID:(NSString *)arg1 ;
-(void)setDataclass:(long long)arg1 ;
-(long long)dataclass;
@end

