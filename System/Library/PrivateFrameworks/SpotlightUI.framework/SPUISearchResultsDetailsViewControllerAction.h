/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SPUISearchResultsViewControllerAction.h>
#import <libobjc.A.dylib/SPUISearchResultDetailsViewControllerDelegate.h>

@class NSString;

@interface SPUISearchResultsDetailsViewControllerAction : SPUISearchResultsViewControllerAction <SPUISearchResultDetailsViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewControllerClass;
-(void)cancel:(id)arg1 ;
-(id)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)cancelAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)slideInViewController:(id)arg1 inset:(BOOL)arg2 ;
-(void)searchResultDetailsViewController:(id)arg1 openURLs:(id)arg2 fromCardType:(id)arg3 ;
@end
