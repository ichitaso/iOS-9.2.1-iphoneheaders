/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CityPersistenceConversions : NSObject
+(id)cityFromDictionary:(id)arg1 ;
+(id)dictionaryRepresentationOfCity:(id)arg1 ;
+(id)cloudDictionaryRepresentationOfCity:(id)arg1 ;
+(id)cloudDictionaryRepresentationOfALCity:(id)arg1 ;
+(id)cityFromCloudDictionary:(id)arg1 ;
+(void)populateCity:(id)arg1 withDayForecastDictionaries:(id)arg2 ;
+(void)populateCity:(id)arg1 withHourlyForecastDictionaries:(id)arg2 ;
+(BOOL)isCityValid:(id)arg1 ;
+(id)weatherDetailsDictionaryFromCity:(id)arg1 ;
+(id)dayForecastDictionariesFromCity:(id)arg1 ;
+(id)hourlyForecastDictionariesFromCity:(id)arg1 ;
+(id)cityFromALCity:(id)arg1 ;
@end

