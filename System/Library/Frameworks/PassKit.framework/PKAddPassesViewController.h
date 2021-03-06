/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIViewController.h>

@protocol PKAddPassesViewControllerDelegate;
@class NSDate, NSArray, _UIAsyncInvocation, PKRemoteAddPassesViewController, PKAssertion, NSURL;

@interface PKAddPassesViewController : UIViewController {

	BOOL _viewHasAppeared;
	BOOL _allowsPassIngestion;
	BOOL _succeeded;
	NSDate* _perfTestingForIngestion;
	NSArray* _passes;
	_UIAsyncInvocation* _cancelViewServiceRequest;
	PKRemoteAddPassesViewController* _remoteViewController;
	PKAssertion* _contactlessInterfaceAssertion;
	id<PKAddPassesViewControllerDelegate> _delegate;
	NSURL* _URL;

}

@property (assign,nonatomic) id<PKAddPassesViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _UIAsyncInvocation * cancelViewServiceRequest;                       //@synthesize cancelViewServiceRequest=_cancelViewServiceRequest - In the implementation block
@property (nonatomic,retain) PKRemoteAddPassesViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) NSArray * passes;                                                    //@synthesize passes=_passes - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                         //@synthesize URL=_URL - In the implementation block
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)canAddPasses;
-(void)setDelegate:(id<PKAddPassesViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<PKAddPassesViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)modalPresentationStyle;
-(void)viewWillLayoutSubviews;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(PKRemoteAddPassesViewController *)remoteViewController;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)modalTransitionStyle;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setRemoteViewController:(PKRemoteAddPassesViewController *)arg1 ;
-(NSArray *)passes;
-(id)initWithPass:(id)arg1 ;
-(id)initWithPasses:(id)arg1 ;
-(void)setAllowsPassIngestion:(BOOL)arg1 ;
-(void)ingestionDidFinishWithResult:(int)arg1 ;
-(void)setCancelViewServiceRequest:(_UIAsyncInvocation *)arg1 ;
-(void)setPasses:(NSArray *)arg1 ;
-(BOOL)succeeded;
-(_UIAsyncInvocation *)cancelViewServiceRequest;
@end

