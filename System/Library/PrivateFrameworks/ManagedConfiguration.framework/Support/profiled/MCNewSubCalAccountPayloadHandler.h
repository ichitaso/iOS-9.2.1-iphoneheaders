/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/MCACAccountPayloadHandler.h>

@interface MCNewSubCalAccountPayloadHandler : MCACAccountPayloadHandler
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)setAsideWithInstaller:(id)arg1 ;
-(id)_accountFromPayload;
-(id)_reallyInstallInstaller:(id)arg1 isInstalledByMDM:(BOOL)arg2 ;
-(id)_installedAccount;
-(void)remove;
-(BOOL)isInstalled;
@end

