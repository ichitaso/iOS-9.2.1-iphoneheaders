/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RemoteUIController.h>

@class NSHTTPURLResponse;

@interface AAUIRemoteUIController : RemoteUIController {

	NSHTTPURLResponse* _redirectResponse;

}

@property (nonatomic,retain) NSHTTPURLResponse * redirectResponse;              //@synthesize redirectResponse=_redirectResponse - In the implementation block
-(id)init;
-(void)setRedirectResponse:(NSHTTPURLResponse *)arg1 ;
-(id)loader:(id)arg1 connection:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 ;
-(NSHTTPURLResponse *)redirectResponse;
@end

