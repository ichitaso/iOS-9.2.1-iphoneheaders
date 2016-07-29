/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFAttachmentDataProviderProtocol <NSObject>
@required
-(id)fetchLocalDataForAttachment:(id)arg1;
-(void)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 completion:(/*^block*/id)arg3;
-(id)messageForAttachment:(id)arg1;
-(id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;

@end
