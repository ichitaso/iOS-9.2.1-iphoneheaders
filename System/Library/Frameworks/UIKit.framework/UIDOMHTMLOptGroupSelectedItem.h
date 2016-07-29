/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWebSelectedItemPrivate.h>

@class DOMHTMLOptGroupElement;

@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate> {

	DOMHTMLOptGroupElement* _node;

}

@property (nonatomic,retain) DOMHTMLOptGroupElement * _node;              //@synthesize node=_node - In the implementation block
-(void)dealloc;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)set_node:(DOMHTMLOptGroupElement *)arg1 ;
-(id)node;
-(BOOL)isGroup;
-(void)unselect;
-(DOMHTMLOptGroupElement *)_node;
-(id)initWithHTMLOptGroupNode:(id)arg1 ;
@end
