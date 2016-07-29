/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDGLLayerContext.h>

@protocol TSDGLLayerContext <NSObject>
@optional
-(void)lock;
-(void)unlock;

@required
-(BOOL)createFramebufferFromLayer:(id)arg1;
-(void)presentRenderbuffer;
-(BOOL)isValid;
-(BOOL)makeCurrentContext;
-(void)teardown;

@end


@class EAGLContext, NSString;

@interface TSDGLLayerContext : NSObject <TSDGLLayerContext> {

	EAGLContext* mContext;
	unsigned mRenderbuffer;
	unsigned mFramebuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)createFramebufferFromLayer:(id)arg1 ;
-(void)presentRenderbuffer;
-(void)dealloc;
-(id)init;
-(BOOL)isValid;
-(void)lock;
-(void)unlock;
-(BOOL)makeCurrentContext;
-(void)teardown;
@end
