/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNContactActionDelegate <NSObject>
@required
-(void)actionDidFinish:(id)arg1;
-(void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3;
-(void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3;
-(void)actionWasCanceled:(id)arg1;
-(void)actionDidUpdate:(id)arg1;
-(id)storeForAction:(id)arg1;
-(void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3;
-(void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3;

@end
