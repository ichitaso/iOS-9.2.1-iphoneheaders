/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MailStatusBarViewDelegate
@required
-(id)statusWithCount:(int*)arg1 total:(int*)arg2 progress:(float*)arg3 state:(unsigned long long*)arg4;
-(id)updatedSubtitleString;
-(void)statusBarView:(id)arg1 stateDidChange:(unsigned long long)arg2;
-(long long)interfaceOrientation;
-(id)lastUpdated;

@end

