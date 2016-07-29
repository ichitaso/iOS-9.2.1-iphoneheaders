/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface MCCertificatePickerCell : PSTableCell {

	UILabel* _issuedByLabel;
	UILabel* _issuerLabel;
	UILabel* _expiresByLabel;
	UILabel* _expiryDateLabel;

}
+(id)_dateFormatter;
+(float)defaultCellHeight;
+(id)_attributeFont;
+(float)_attributeLabelSpace;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(void)setExpirationDate:(id)arg1 ;
-(id)_labelColor;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(id)_checkmarkView;
-(void)setIssuer:(id)arg1 ;
-(id)_attributeLabelCopy;
@end
