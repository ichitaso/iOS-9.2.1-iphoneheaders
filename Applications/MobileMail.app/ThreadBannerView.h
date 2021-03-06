/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>

@class UIView, UILabel, UIImageView;

@interface ThreadBannerView : UITableViewHeaderFooterView {

	UIView* _backgroundView;
	UILabel* _subjectLabel;
	UILabel* _alternateLabel;
	UIImageView* _threadFlagIcon;

}
+(double)defaultHeaderHeight;
-(void)setThreadFlagIconStyle:(unsigned long long)arg1 ;
-(void)setAlternateText:(id)arg1 ;
-(void)_removeThreadFlagIcon;
-(void)_setThreadFlagIcon:(id)arg1 ;
-(CGRect)rectForNotifyIconWithBounds:(CGRect)arg1 ;
-(CGRect)rectForAlternateLabelWithBounds:(CGRect)arg1 iconRect:(CGRect)arg2 ;
-(CGRect)rectForSubjectWithBounds:(CGRect)arg1 alternateRect:(CGRect)arg2 iconRect:(CGRect)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setText:(id)arg1 ;
-(void)setTableView:(id)arg1 ;
-(void)setBackgroundView:(id)arg1 ;
-(id)backgroundView;
-(id)_label:(BOOL)arg1 ;
@end

