/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@interface UICollectionViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	struct {
		unsigned invalidateDelegateMetrics : 1;
		unsigned invalidateAttributes : 1;
	}  _flowLayoutInvalidationFlags;

}

@property (assign,nonatomic) BOOL invalidateFlowLayoutDelegateMetrics; 
@property (assign,nonatomic) BOOL invalidateFlowLayoutAttributes; 
-(id)init;
-(void)setInvalidateFlowLayoutAttributes:(BOOL)arg1 ;
-(BOOL)invalidateFlowLayoutAttributes;
-(void)setInvalidateFlowLayoutDelegateMetrics:(BOOL)arg1 ;
-(BOOL)invalidateFlowLayoutDelegateMetrics;
@end

