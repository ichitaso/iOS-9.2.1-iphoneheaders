/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSKSelection.h>

@class TSKDocumentRoot;

@interface TSKDocumentSelection : TSKSelection {

	TSKDocumentRoot* mDocumentRoot;

}

@property (nonatomic,readonly) TSKDocumentRoot * documentRoot; 
+(Class)archivedSelectionClass;
-(id)initWithDocumentRoot:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(TSKDocumentRoot *)documentRoot;
@end
