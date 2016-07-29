/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIItemOfferButton.h>

@class NSString;

@interface SearchUIAppActionButton : SKUIItemOfferButton {

	NSString* _bundleID;

}

@property (retain) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
-(NSString *)bundleID;
-(BOOL)updateActionButtonWithResult:(id)arg1 style:(unsigned long long)arg2 ;
-(id)initWithActionButtonItem:(id)arg1 style:(unsigned long long)arg2 ;
-(BOOL)appIsOwned;
-(void)setBundleID:(NSString *)arg1 ;
@end
