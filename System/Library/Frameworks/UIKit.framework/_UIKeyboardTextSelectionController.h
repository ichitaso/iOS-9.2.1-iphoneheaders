/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInput;
#import <UIKit/UIKit-Structs.h>
@class UITextPosition, UIResponder, UITextRange, UIView, UITextInteractionAssistant;

@interface _UIKeyboardTextSelectionController : NSObject {

	BOOL _hasInteractionAssistant;
	BOOL _hasSelectionInteractionAssistant;
	UITextPosition* _cursorPosition;
	long long _selectionGranularity;
	UIResponder*<UITextInput> _inputDelegate;
	UITextRange* _initialSelection;
	UITextRange* _selectionBase;
	CGRect _caretRectForCursorPosition;

}

@property (nonatomic,readonly) UIView * textInputView; 
@property (nonatomic,readonly) BOOL hasCaretSelection; 
@property (nonatomic,readonly) BOOL hasRangedSelection; 
@property (nonatomic,readonly) CGRect caretRectForFirstSelectedPosition; 
@property (nonatomic,readonly) CGRect caretRectForLastSelectedPosition; 
@property (nonatomic,readonly) CGRect caretRectForLeftmostSelectedPosition; 
@property (nonatomic,readonly) CGRect caretRectForRightmostSelectedPosition; 
@property (assign,nonatomic) CGRect caretRectForCursorPosition;                                                //@synthesize caretRectForCursorPosition=_caretRectForCursorPosition - In the implementation block
@property (assign,nonatomic) long long selectionGranularity;                                                   //@synthesize selectionGranularity=_selectionGranularity - In the implementation block
@property (nonatomic,readonly) UIResponder*<UITextInput> inputDelegate;                                        //@synthesize inputDelegate=_inputDelegate - In the implementation block
@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (nonatomic,readonly) id<UISelectionInteractionAssistant> selectionInteractionAssistant; 
@property (nonatomic,retain) UITextPosition * cursorPosition; 
@property (nonatomic,retain) UITextRange * initialSelection;                                                   //@synthesize initialSelection=_initialSelection - In the implementation block
@property (nonatomic,retain) UITextRange * selectionBase;                                                      //@synthesize selectionBase=_selectionBase - In the implementation block
-(void)dealloc;
-(UIResponder*<UITextInput>)inputDelegate;
-(UITextInteractionAssistant *)interactionAssistant;
-(UIView *)textInputView;
-(void)updateSelectionRects;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)endFloatingCursor;
-(long long)selectionGranularity;
-(void)setSelectionGranularity:(long long)arg1 ;
-(id)initWithInputDelegate:(id)arg1 ;
-(id<UISelectionInteractionAssistant>)selectionInteractionAssistant;
-(void)textDidChange;
-(void)selectionDidChange;
-(BOOL)hasRangedSelection;
-(void)setCaretRectForCursorPosition:(CGRect)arg1 ;
-(void)setCursorPosition:(UITextPosition *)arg1 ;
-(UITextPosition *)cursorPosition;
-(BOOL)cursorPositionIsContainedByRange:(id)arg1 ;
-(void)resetCursorPosition;
-(void)showSelectionCommands;
-(void)setInitialSelection:(UITextRange *)arg1 ;
-(UITextRange *)initialSelection;
-(void)setSelectionBase:(UITextRange *)arg1 ;
-(void)scrollSelectionToVisible;
-(void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4 ;
-(void)beginSelection;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(UITextRange *)selectionBase;
-(void)updateSelectionWithExtentPosition:(id)arg1 executionContext:(id)arg2 ;
-(void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4 ;
-(BOOL)hasCaretSelection;
-(CGRect)caretRectForFirstSelectedPosition;
-(CGRect)caretRectForLastSelectedPosition;
-(CGRect)caretRectForLeftmostSelectedPosition;
-(CGRect)caretRectForRightmostSelectedPosition;
-(CGRect)caretRectForCursorPosition;
-(void)switchToRangedSelection;
-(void)setRangedSelectionShouldShowGrabbers:(BOOL)arg1 ;
-(void)willHandoffLoupeMagnifier;
-(void)updateGestureRecognizers;
-(void)beginLoupeMagnifierAtPoint:(CGPoint)arg1 ;
-(void)updateLoupeMagnifierAtPoint:(CGPoint)arg1 ;
-(void)endLoupeMagnifierAtPoint:(CGPoint)arg1 ;
-(void)beginRangedMagnifierAtPoint:(CGPoint)arg1 ;
-(void)updateRangedMagnifierAtPoint:(CGPoint)arg1 ;
-(void)endRangedMagnifierAtPoint:(CGPoint)arg1 ;
-(BOOL)beginLoupeGestureAtPoint:(CGPoint)arg1 ;
-(void)updateLoupeGestureAtPoint:(CGPoint)arg1 ;
-(void)endLoupeGestureAtPoint:(CGPoint)arg1 ;
-(CGPoint)boundedDeltaForTranslation:(CGPoint)arg1 cursorLocationBase:(CGPoint)arg2 ;
-(void)restartSelection;
-(void)selectPositionAtPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(void)selectImmediatePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(void)beginSelectionWithBasePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 withInitialExtentPoint:(CGPoint)arg3 executionContext:(id)arg4 ;
-(void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(void)updateImmediateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 withBoundary:(long long)arg2 executionContext:(id)arg3 ;
-(void)endSelection;
@end
