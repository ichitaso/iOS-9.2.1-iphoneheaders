/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSampleEntity.h>

@interface HDQuantitySampleEntity : HDSampleEntity
+(id)columnsDefinition;
+(id)_databaseTable;
+(Class)_associatedDataObjectClass;
+(id)_propertySettersForDataObject;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)codableObjectsFromObjectCollection:(id)arg1 ;
+(id)codableRepresentationEncoderForHealthDaemon:(id)arg1 database:(id)arg2 ;
+(BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2 ;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)orderedPropertiesForCodableObjectQuery;
+(id)sumOfSamplesWithDataType:(id)arg1 inDatabase:(id)arg2 predicate:(id)arg3 ;
@end

