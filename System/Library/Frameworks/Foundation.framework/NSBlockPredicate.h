/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicate.h>

@interface NSBlockPredicate : NSPredicate {

	/*^block*/id _block;

}
-(id)predicateFormat;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)predicateWithSubstitutionVariables:(id)arg1 ;
-(/*^block*/id)_predicateBlock;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)supportsSecureCoding;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

