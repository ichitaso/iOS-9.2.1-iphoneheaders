/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PowerlogDatabaseReader.framework/PowerlogDatabaseReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PowerlogDatabaseReader/PowerlogDatabaseReader-Structs.h>
@interface PLDatabaseReader : NSObject {

	sqlite3Ref _dbConnection;

}

@property (assign) sqlite3Ref dbConnection;              //@synthesize dbConnection=_dbConnection - In the implementation block
-(void)dealloc;
-(id)stringValueOfTable:(id)arg1 ;
-(id)initWithDatabaseFile:(id)arg1 ;
-(id)tableNamesFromDatabase;
-(sqlite3Ref)dbConnection;
-(id)performStatement:(sqlite3_stmtRef)arg1 ;
-(void)setDbConnection:(sqlite3Ref)arg1 ;
-(sqlite3Ref)openDatabaseFile:(id)arg1 ;
-(id)prepareStatementAndPerformWithString:(id)arg1 ;
@end
