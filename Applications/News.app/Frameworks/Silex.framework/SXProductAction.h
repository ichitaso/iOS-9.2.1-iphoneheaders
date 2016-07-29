/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXAction.h>

@class NSNumber, NSString;

@interface SXProductAction : SXAction {

	NSNumber* productIdentifier;
	NSString* affiliateIdentifier;
	NSString* campaignIdentifier;

}

@property (nonatomic,readonly) NSNumber * productIdentifier; 
@property (nonatomic,retain) NSString * affiliateIdentifier; 
@property (nonatomic,retain) NSString * campaignIdentifier; 
-(Class)handlerClass;
-(id)initWithProductIdentifier:(id)arg1 addition:(id)arg2 ;
-(void)setCampaignIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAddition:(id)arg1 ;
-(void)setAffiliateIdentifier:(NSString *)arg1 ;
-(NSString *)affiliateIdentifier;
-(NSString *)campaignIdentifier;
-(NSNumber *)productIdentifier;
@end
