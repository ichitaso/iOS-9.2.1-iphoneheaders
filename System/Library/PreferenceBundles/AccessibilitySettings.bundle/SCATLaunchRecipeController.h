/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@class NSArray;

@interface SCATLaunchRecipeController : AccessibilityBaseListController {

	NSArray* _recipes;

}

@property (nonatomic,retain) NSArray * recipes;              //@synthesize recipes=_recipes - In the implementation block
-(void)setRecipes:(NSArray *)arg1 ;
-(NSArray *)recipes;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
@end

