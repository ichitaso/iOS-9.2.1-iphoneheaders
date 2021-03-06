/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaServices/MediaServices-Structs.h>
@class NSMutableArray, MSVSystemDialogOptions, NSArray;

@interface MSVSystemDialog : NSObject {

	NSMutableArray* _textFields;
	CFUserNotificationRef _presentedUserNotification;
	CFRunLoopSourceRef _activeRunLoopSource;
	/*^block*/id _pendingCompletion;
	MSVSystemDialogOptions* _options;

}

@property (nonatomic,readonly) MSVSystemDialogOptions * options;                           //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSArray * textFields;                                       //@synthesize textFields=_textFields - In the implementation block
@property (assign,nonatomic) CFUserNotificationRef presentedUserNotification; 
@property (assign,nonatomic) CFRunLoopSourceRef activeRunLoopSource; 
@property (nonatomic,copy) id pendingCompletion; 
+(id)systemDialogWithOptions:(id)arg1 ;
+(id)passwordAlertWithOptions:(id)arg1 ;
-(void)dealloc;
-(NSArray *)textFields;
-(MSVSystemDialogOptions *)options;
-(void)addTextField:(id)arg1 ;
-(void)setPresentedUserNotification:(CFUserNotificationRef)arg1 ;
-(void)setPendingCompletion:(id)arg1 ;
-(void)setActiveRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(CFUserNotificationRef)presentedUserNotification;
-(CFRunLoopSourceRef)activeRunLoopSource;
-(id)pendingCompletion;
-(void)addTextFieldWithTitle:(id)arg1 secure:(BOOL)arg2 ;
-(void)clearTextFields;
-(id)initWithOptions:(id)arg1 ;
-(void)presentWithCompletion:(/*^block*/id)arg1 ;
@end

