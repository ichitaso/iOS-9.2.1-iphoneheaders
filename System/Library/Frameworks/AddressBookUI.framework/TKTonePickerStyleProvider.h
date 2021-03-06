/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIFont, UIColor;


@protocol TKTonePickerStyleProvider <NSObject>
@property (nonatomic,readonly) BOOL tonePickerUsesOpaqueBackground; 
@property (nonatomic,readonly) long long tonePickerTableViewSeparatorStyle; 
@property (nonatomic,readonly) UIFont * tonePickerCellTextFont; 
@property (nonatomic,readonly) UIColor * tonePickerCellTextColor; 
@property (nonatomic,readonly) UIColor * tonePickerCellHighlightedTextColor; 
@property (nonatomic,readonly) UIColor * tonePickerCellBackgroundColor; 
@property (nonatomic,readonly) BOOL wantsCustomTonePickerHeaderView; 
@property (nonatomic,readonly) UIFont * tonePickerHeaderTextFont; 
@property (nonatomic,readonly) UIColor * tonePickerHeaderTextColor; 
@property (nonatomic,readonly) UIColor * tonePickerHeaderTextShadowColor; 
@property (nonatomic,readonly) UIOffset tonePickerHeaderTextShadowOffset; 
@property (nonatomic,readonly) UIEdgeInsets tonePickerHeaderTextPaddingInsets; 
@property (nonatomic,readonly) UIColor * tonePickerCustomTableSeparatorColor; 
@property (nonatomic,readonly) long long tonePickerCustomTableSeparatorBackdropOverlayBlendMode; 
@property (nonatomic,readonly) BOOL tonePickerHeaderTextShouldBeUppercase; 
@optional
-(BOOL)tonePickerHeaderTextShouldBeUppercase;
-(UIColor *)tonePickerCustomTableSeparatorColor;
-(long long)tonePickerCustomTableSeparatorBackdropOverlayBlendMode;

@required
-(BOOL)tonePickerUsesOpaqueBackground;
-(long long)tonePickerTableViewSeparatorStyle;
-(UIFont *)tonePickerCellTextFont;
-(UIColor *)tonePickerCellTextColor;
-(UIColor *)tonePickerCellHighlightedTextColor;
-(UIColor *)tonePickerCellBackgroundColor;
-(id)newBackgroundViewForSelectedTonePickerCell:(BOOL)arg1;
-(id)newAccessoryDisclosureIndicatorViewForTonePickerCell;
-(BOOL)wantsCustomTonePickerHeaderView;
-(UIFont *)tonePickerHeaderTextFont;
-(UIColor *)tonePickerHeaderTextColor;
-(UIColor *)tonePickerHeaderTextShadowColor;
-(UIOffset)tonePickerHeaderTextShadowOffset;
-(UIEdgeInsets)tonePickerHeaderTextPaddingInsets;

@end

