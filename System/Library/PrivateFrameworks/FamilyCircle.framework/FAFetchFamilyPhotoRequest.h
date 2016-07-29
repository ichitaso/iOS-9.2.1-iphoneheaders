/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSNumber, NSString;

@interface FAFetchFamilyPhotoRequest : FAFamilyCircleRequest {

	BOOL _localFallback;
	BOOL _useMonogramAsLastResort;
	NSNumber* _memberDSID;
	NSString* _memberHashedDSID;
	unsigned long long _requestedSize;
	double _requiredWidth;
	double _requiredHeight;
	double _monogramDiameter;
	long long _monogramStyle;
	NSString* _fullname;
	NSString* _emailAddress;
	NSString* _phoneNumber;

}

@property (copy,readonly) NSNumber * memberDSID;                    //@synthesize memberDSID=_memberDSID - In the implementation block
@property (copy,readonly) NSString * memberHashedDSID;              //@synthesize memberHashedDSID=_memberHashedDSID - In the implementation block
@property (readonly) BOOL localFallback;                            //@synthesize localFallback=_localFallback - In the implementation block
@property (readonly) unsigned long long requestedSize;              //@synthesize requestedSize=_requestedSize - In the implementation block
@property (assign) double requiredWidth;                            //@synthesize requiredWidth=_requiredWidth - In the implementation block
@property (assign) double requiredHeight;                           //@synthesize requiredHeight=_requiredHeight - In the implementation block
@property (assign) double monogramDiameter;                         //@synthesize monogramDiameter=_monogramDiameter - In the implementation block
@property (assign) BOOL useMonogramAsLastResort;                    //@synthesize useMonogramAsLastResort=_useMonogramAsLastResort - In the implementation block
@property (assign) long long monogramStyle;                         //@synthesize monogramStyle=_monogramStyle - In the implementation block
@property (copy) NSString * fullname;                               //@synthesize fullname=_fullname - In the implementation block
@property (copy) NSString * emailAddress;                           //@synthesize emailAddress=_emailAddress - In the implementation block
@property (copy) NSString * phoneNumber;                            //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(id)init;
-(NSString *)phoneNumber;
-(NSNumber *)memberDSID;
-(NSString *)emailAddress;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(double)requiredHeight;
-(long long)monogramStyle;
-(double)monogramDiameter;
-(NSString *)fullname;
-(BOOL)useMonogramAsLastResort;
-(NSString *)memberHashedDSID;
-(unsigned long long)requestedSize;
-(BOOL)localFallback;
-(id)initWithFamilyMemberHashedDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(BOOL)arg3 ;
-(void)setRequiredWidth:(double)arg1 ;
-(void)setRequiredHeight:(double)arg1 ;
-(void)setUseMonogramAsLastResort:(BOOL)arg1 ;
-(void)setFullname:(NSString *)arg1 ;
-(id)requestOptions;
-(id)initWithFamilyMemberDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(BOOL)arg3 ;
-(void)setMonogramDiameter:(double)arg1 ;
-(void)setMonogramStyle:(long long)arg1 ;
-(double)requiredWidth;
@end
