/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNVCardADRParser : NSObject
+(id)valueWithParser:(id)arg1 ;
+(void)processExtensionValuesForLines:(id)arg1 validCountryCodes:(id)arg2 parser:(id)arg3 ;
+(id)parseStreetAddressComponentsWithParser:(id)arg1 ;
+(void)collectStreetAddressComponentsIntoSingleKeyInAddress:(id)arg1 ;
+(id)addressValueWithPrimaryAddress:(id)arg1 extendedAddress:(id)arg2 poBox:(id)arg3 ;
@end
