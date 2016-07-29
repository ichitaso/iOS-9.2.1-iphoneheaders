/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailServices/MSDebugGatherer.h>
#import <libobjc.A.dylib/MSDDebugGathererProtocol.h>

@class MFXPCClient, NSString;

@interface MFDDebugGatherer : MSDebugGatherer <MSDDebugGathererProtocol> {

	MFXPCClient* _client;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)endpointInfo;
-(id)_rawSourceForCurrentEmail;
-(id)_diagnosticsDump;
-(void)dealloc;
-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithRemoteObjectInterface:(id)arg1 ;
-(id)newConnectionForInterface:(id)arg1 ;
-(void)gatherDebugDiagnostics:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithClient:(id)arg1 ;
@end
