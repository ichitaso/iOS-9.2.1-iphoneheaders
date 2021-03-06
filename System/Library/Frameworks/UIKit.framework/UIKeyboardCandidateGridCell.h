/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel;

@interface UIKeyboardCandidateGridCell : UICollectionViewCell {

	BOOL _dummy;
	BOOL _usesGroupHeaderAppearance;
	BOOL _shouldShowCandidateNumber;
	BOOL _secondaryCandidateAppearance;
	BOOL _emphasizedAppearance;
	int _candidatesVisualStyle;
	NSString* _text;
	NSString* _alternativeText;
	NSString* _annotationText;
	unsigned long long _candidateNumber;
	unsigned long long _edges;
	double _rowHeight;
	double _rightPadding;
	SCD_Struct_UI39 _visualStyling;
	long long _textAlignment;
	double _cellPadding;
	double _minimumWidth;
	UILabel* _textLabel;
	UILabel* _alternativeTextLabel;
	UILabel* _candidateNumberLabel;
	UILabel* _annotationLabel;
	CGSize _size;
	CGSize _candidateNumberSize;
	CGRect _visibleBounds;

}

@property (assign,nonatomic) BOOL dummy;                                      //@synthesize dummy=_dummy - In the implementation block
@property (assign,nonatomic) BOOL usesGroupHeaderAppearance;                  //@synthesize usesGroupHeaderAppearance=_usesGroupHeaderAppearance - In the implementation block
@property (nonatomic,copy) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * alternativeText;                        //@synthesize alternativeText=_alternativeText - In the implementation block
@property (nonatomic,copy) NSString * annotationText;                         //@synthesize annotationText=_annotationText - In the implementation block
@property (assign,nonatomic) unsigned long long candidateNumber;              //@synthesize candidateNumber=_candidateNumber - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCandidateNumber;                  //@synthesize shouldShowCandidateNumber=_shouldShowCandidateNumber - In the implementation block
@property (assign,nonatomic) CGRect visibleBounds;                            //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (assign,nonatomic) BOOL secondaryCandidateAppearance;               //@synthesize secondaryCandidateAppearance=_secondaryCandidateAppearance - In the implementation block
@property (assign,nonatomic) BOOL emphasizedAppearance;                       //@synthesize emphasizedAppearance=_emphasizedAppearance - In the implementation block
@property (assign,nonatomic) unsigned long long edges;                        //@synthesize edges=_edges - In the implementation block
@property (assign,nonatomic) double rowHeight;                                //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) double rightPadding;                             //@synthesize rightPadding=_rightPadding - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI39 visualStyling;                   //@synthesize visualStyling=_visualStyling - In the implementation block
@property (assign,nonatomic) int candidatesVisualStyle;                       //@synthesize candidatesVisualStyle=_candidatesVisualStyle - In the implementation block
@property (assign,nonatomic) long long textAlignment;                         //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGSize candidateNumberSize;                      //@synthesize candidateNumberSize=_candidateNumberSize - In the implementation block
@property (assign,nonatomic) double cellPadding;                              //@synthesize cellPadding=_cellPadding - In the implementation block
@property (assign,nonatomic) double minimumWidth;                             //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (nonatomic,readonly) BOOL canShowCandidateNumber; 
@property (nonatomic,retain) UILabel * textLabel;                             //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UILabel * alternativeTextLabel;                  //@synthesize alternativeTextLabel=_alternativeTextLabel - In the implementation block
@property (nonatomic,retain) UILabel * candidateNumberLabel;                  //@synthesize candidateNumberLabel=_candidateNumberLabel - In the implementation block
@property (nonatomic,retain) UILabel * annotationLabel;                       //@synthesize annotationLabel=_annotationLabel - In the implementation block
+(id)reuseIdentifier;
+(BOOL)drawsSideBorders;
+(CGColorRef)legacy_outlineShadowColorForVisualStyling:(SCD_Struct_UI39)arg1 candidatesVisualStyle:(int)arg2 ;
+(CGColorRef)legacy_outlineColorForVisualStyling:(SCD_Struct_UI39)arg1 candidatesVisualStyle:(int)arg2 ;
+(double)rightPaddingForIndex;
+(CGSize)sizeForGroupHeader:(id)arg1 visualStyle:(int)arg2 ;
+(double)widthForCandidate:(id)arg1 candidateNumber:(unsigned long long)arg2 visualStyle:(int)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)size;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setRowHeight:(double)arg1 ;
-(double)rowHeight;
-(void)setEdges:(unsigned long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(CGRect)visibleBounds;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setMinimumWidth:(double)arg1 ;
-(double)minimumWidth;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(UILabel *)textLabel;
-(long long)textAlignment;
-(void)setVisualStyling:(SCD_Struct_UI39)arg1 ;
-(SCD_Struct_UI39)visualStyling;
-(void)setCandidatesVisualStyle:(int)arg1 ;
-(int)candidatesVisualStyle;
-(BOOL)dummy;
-(NSString *)alternativeText;
-(void)setAlternativeText:(NSString *)arg1 ;
-(NSString *)annotationText;
-(void)setAnnotationText:(NSString *)arg1 ;
-(void)setShouldShowCandidateNumber:(BOOL)arg1 ;
-(BOOL)shouldShowCandidateNumber;
-(unsigned long long)candidateNumber;
-(BOOL)usesGroupHeaderAppearance;
-(void)setVisibleBounds:(CGRect)arg1 ;
-(void)updateLabels;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setDummy:(BOOL)arg1 ;
-(void)setUsesGroupHeaderAppearance:(BOOL)arg1 ;
-(unsigned long long)edges;
-(void)setRightPadding:(double)arg1 ;
-(void)setCellPadding:(double)arg1 ;
-(void)setCandidateNumber:(unsigned long long)arg1 ;
-(BOOL)secondaryCandidateAppearance;
-(void)setSecondaryCandidateAppearance:(BOOL)arg1 ;
-(BOOL)emphasizedAppearance;
-(void)setEmphasizedAppearance:(BOOL)arg1 ;
-(void)drawBackgroundAndBorders;
-(UILabel *)alternativeTextLabel;
-(UILabel *)candidateNumberLabel;
-(UILabel *)annotationLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
-(double)rightPadding;
-(double)cellPadding;
-(BOOL)canShowCandidateNumber;
-(void)setAnnotationLabel:(UILabel *)arg1 ;
-(void)setAlternativeTextLabel:(UILabel *)arg1 ;
-(void)setCandidateNumberLabel:(UILabel *)arg1 ;
-(void)updateLabelColors;
-(void)updateGroupHeaderLabelPosition;
-(CGSize)candidateNumberSize;
-(void)setCandidateNumberSize:(CGSize)arg1 ;
@end

