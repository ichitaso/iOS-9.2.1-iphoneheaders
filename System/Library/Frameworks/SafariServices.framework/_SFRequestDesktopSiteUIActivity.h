/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFActivity.h>

@class _SFReloadOptionsController;

@interface _SFRequestDesktopSiteUIActivity : _SFActivity {

	_SFReloadOptionsController* _reloadOptionsController;

}

@property (nonatomic,readonly) _SFReloadOptionsController * reloadOptionsController;              //@synthesize reloadOptionsController=_reloadOptionsController - In the implementation block
-(id)init;
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)activityImage;
-(id)initWithReloadOptionsController:(id)arg1 ;
-(void)performActivityWithCompletion:(/*^block*/id)arg1 ;
-(_SFReloadOptionsController *)reloadOptionsController;
@end

