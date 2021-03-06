/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol CKDResponseBodyParser <NSObject>
@property (nonatomic,readonly) NSError * parserError; 
@property (nonatomic,copy) id objectParsedBlock; 
@property (nonatomic,copy) id logParsedObjectBlock; 
@required
-(NSError *)parserError;
-(void)setObjectParsedBlock:(/*^block*/id)arg1;
-(void)setLogParsedObjectBlock:(/*^block*/id)arg1;
-(void)processData:(id)arg1;
-(void)finishWithCompletion:(/*^block*/id)arg1;
-(id)logParsedObjectBlock;
-(id)objectParsedBlock;

@end

