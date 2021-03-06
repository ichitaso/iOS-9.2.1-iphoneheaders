/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSURLCompletionMatch.h>

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch {

	RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>* _match;

}

@property (nonatomic,readonly) id<WBSURLCompletionMatchData> data; 
@property (nonatomic,readonly) float weight; 
-(id)title;
-(id<WBSURLCompletionMatchData>)data;
-(float)weight;
-(id)originalURLString;
-(id)parsecDomainIdentifier;
-(id)initWithBookmarkAndHistoryCompletionMatch:(PassRefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>*)arg1 ;
-(id)userVisibleURLString;
@end

