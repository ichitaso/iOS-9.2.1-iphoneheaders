/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDReference;

@interface EDPane : NSObject {

	double mXSplitPosition;
	double mYSplitPosition;
	EDReference* mTopLeftCell;
	int mActivePane;
	int mPaneState;

}
+(id)pane;
-(void)dealloc;
-(id)init;
-(id)description;
-(int)activePane;
-(double)xSplitPosition;
-(double)ySplitPosition;
-(id)topLeftCell;
-(int)paneState;
-(void)setTopLeftCell:(id)arg1 ;
-(void)setXSplitPosition:(double)arg1 ;
-(void)setYSplitPosition:(double)arg1 ;
-(void)setActivePane:(int)arg1 ;
-(void)setPaneState:(int)arg1 ;
@end

