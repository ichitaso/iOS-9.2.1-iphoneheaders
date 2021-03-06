/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, FLFollowUpNotification, NSArray, NSDictionary, NSData;

@interface FLFollowUpItem : NSObject <NSSecureCoding> {

	BOOL _showInSettings;
	BOOL _shouldPersistWhenActivated;
	BOOL _shouldPersistWhenDismissed;
	NSString* _uniqueIdentifier;
	FLFollowUpNotification* _notification;
	NSString* _title;
	NSString* _informativeText;
	unsigned long long _displayStyle;
	NSArray* _actions;
	NSDictionary* _userInfo;
	unsigned long long _sqlID;
	NSString* _clientIdentifier;
	NSString* _delegateMachServiceName;

}

@property (nonatomic,copy) NSString * uniqueIdentifier;                          //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) FLFollowUpNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (assign,nonatomic) BOOL showInSettings;                                //@synthesize showInSettings=_showInSettings - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * informativeText;                           //@synthesize informativeText=_informativeText - In the implementation block
@property (assign) unsigned long long displayStyle;                              //@synthesize displayStyle=_displayStyle - In the implementation block
@property (assign) BOOL shouldPersistWhenActivated;                              //@synthesize shouldPersistWhenActivated=_shouldPersistWhenActivated - In the implementation block
@property (assign) BOOL shouldPersistWhenDismissed;                              //@synthesize shouldPersistWhenDismissed=_shouldPersistWhenDismissed - In the implementation block
@property (copy) NSArray * actions;                                              //@synthesize actions=_actions - In the implementation block
@property (copy) NSDictionary * userInfo;                                        //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) unsigned long long sqlID;                           //@synthesize sqlID=_sqlID - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                          //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * delegateMachServiceName;                   //@synthesize delegateMachServiceName=_delegateMachServiceName - In the implementation block
@property (nonatomic,retain) NSData * _userInfoData; 
+(BOOL)supportsSecureCoding;
-(BOOL)isHSA2LoginItem;
-(BOOL)isHSA2PasswordResetItem;
-(id)initWithCoder:(id)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)actions;
-(FLFollowUpNotification *)notification;
-(NSString *)title;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)setDisplayStyle:(unsigned long long)arg1 ;
-(unsigned long long)displayStyle;
-(void)setNotification:(FLFollowUpNotification *)arg1 ;
-(NSString *)clientIdentifier;
-(NSData *)_userInfoData;
-(void)set_userInfoData:(NSData *)arg1 ;
-(BOOL)showInSettings;
-(void)setShowInSettings:(BOOL)arg1 ;
-(NSString *)informativeText;
-(BOOL)shouldPersistWhenActivated;
-(void)setShouldPersistWhenActivated:(BOOL)arg1 ;
-(BOOL)shouldPersistWhenDismissed;
-(void)setShouldPersistWhenDismissed:(BOOL)arg1 ;
-(NSString *)delegateMachServiceName;
-(void)setDelegateMachServiceName:(NSString *)arg1 ;
-(void)setInformativeText:(NSString *)arg1 ;
-(unsigned long long)sqlID;
-(void)setSqlID:(unsigned long long)arg1 ;
@end

