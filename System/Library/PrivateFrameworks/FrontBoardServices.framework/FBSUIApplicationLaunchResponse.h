/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceResponse.h>

@class BSMachPortSendRight;

@interface FBSUIApplicationLaunchResponse : FBSWorkspaceResponse {

	BOOL _supportsTaskSuspension;
	BOOL _supportsTaskSuspensionOnLock;
	BSMachPortSendRight* _taskPort;

}

@property (assign,nonatomic) BOOL supportsTaskSuspension;                    //@synthesize supportsTaskSuspension=_supportsTaskSuspension - In the implementation block
@property (assign,nonatomic) BOOL supportsTaskSuspensionOnLock;              //@synthesize supportsTaskSuspensionOnLock=_supportsTaskSuspensionOnLock - In the implementation block
@property (nonatomic,retain) BSMachPortSendRight * taskPort;                 //@synthesize taskPort=_taskPort - In the implementation block
-(void)dealloc;
-(void)setSupportsTaskSuspension:(BOOL)arg1 ;
-(void)setSupportsTaskSuspensionOnLock:(BOOL)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BSMachPortSendRight *)taskPort;
-(void)setTaskPort:(BSMachPortSendRight *)arg1 ;
-(BOOL)supportsTaskSuspension;
-(BOOL)supportsTaskSuspensionOnLock;
@end

