/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDAnchor.h>

@interface EDTwoCellAnchor : EDAnchor {

	EDCellAnchorMarker mFrom;
	EDCellAnchorMarker mTo;
	BOOL mIsRelative;
	int mEditAs;

}
-(id)init;
-(EDCellAnchorMarker)from;
-(BOOL)isRelative;
-(EDCellAnchorMarker)to;
-(void)setRelative:(BOOL)arg1 ;
-(void)setFrom:(EDCellAnchorMarker)arg1 ;
-(void)setTo:(EDCellAnchorMarker)arg1 ;
-(int)editAs;
-(void)setEditAs:(int)arg1 ;
@end

