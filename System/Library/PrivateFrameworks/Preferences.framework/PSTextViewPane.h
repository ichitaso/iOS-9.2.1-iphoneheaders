/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSEditingPane.h>

@class UITextView;

@interface PSTextViewPane : PSEditingPane {

	UITextView* _textView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setPreferenceSpecifier:(id)arg1 ;
-(BOOL)handlesDoneButton;
@end

