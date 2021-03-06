/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDCollection.h>

@class OITSUIntegerKeyDictionary;

@interface EDKeyedCollection : EDCollection {

	OITSUIntegerKeyDictionary* mMap;

}
-(BOOL)isOverwritingKeyOK;
-(void)insertIntoMap:(id)arg1 ;
-(void)removeFromMap:(id)arg1 ;
-(BOOL)isObjectInMap:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)objectWithKey:(long long)arg1 ;
@end

