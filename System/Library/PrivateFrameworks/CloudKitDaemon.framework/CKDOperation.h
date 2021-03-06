/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/CKDURLRequestMetricsDelegate.h>
#import <libobjc.A.dylib/CKDURLRequestAuthRetryDelegate.h>
#import <libobjc.A.dylib/CKDFlowControllable.h>

@protocol OS_dispatch_queue, OS_dispatch_group, NSObject;
@class NSString, CKDURLRequest, CKTimeLogger, NSDate, CKDClientContext, CKDClientProxy, NSObject, NSError, CKDOperationMetrics, NSMutableArray, CKOperationResult;

@interface CKDOperation : NSOperation <CKDURLRequestMetricsDelegate, CKDURLRequestAuthRetryDelegate, CKDFlowControllable> {

	unsigned long long _state;
	unsigned long long _activityID;
	BOOL _isFinished;
	BOOL _isExecuting;
	BOOL _useEncryption;
	BOOL _allowsCellularAccess;
	BOOL _allowsPowerNapScheduling;
	BOOL _preferAnonymousRequests;
	BOOL _allowsBackgroundNetworking;
	CKDURLRequest* _request;
	CKTimeLogger* _timeLogger;
	NSString* _operationID;
	NSDate* _startDate;
	CKDOperation* _parentOperation;
	CKDClientContext* _context;
	CKDClientProxy* _proxy;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSString* _authPromptReason;
	NSString* _deviceIdentifier;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSError* _error;
	CKDOperationMetrics* _cloudKitMetrics;
	CKDOperationMetrics* _MMCSMetrics;
	NSDate* _metricExecuteStartDate;
	NSObject*<OS_dispatch_group> _stateTransitionGroup;
	NSMutableArray* _requestUUIDs;
	NSString* _parentSectionID;
	NSMutableArray* _childOperations;
	NSMutableArray* _finishedChildOperationIDs;
	id<NSObject> _powerAssertion;
	NSObject*<OS_dispatch_group> _childOperationsGroup;

}

@property (nonatomic,retain) CKTimeLogger * timeLogger;                                      //@synthesize timeLogger=_timeLogger - In the implementation block
@property (nonatomic,readonly) NSString * sectionID; 
@property (nonatomic,readonly) NSString * operationID;                                       //@synthesize operationID=_operationID - In the implementation block
@property (assign) unsigned long long activityID;                                            //@synthesize activityID=_activityID - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                             //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic,__weak) CKDOperation * parentOperation;                          //@synthesize parentOperation=_parentOperation - In the implementation block
@property (nonatomic,retain) CKDClientContext * context;                                     //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) CKDClientProxy * proxy;                                  //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,readonly) BOOL shouldCheckAppVersion; 
@property (assign,nonatomic) BOOL useEncryption;                                             //@synthesize useEncryption=_useEncryption - In the implementation block
@property (nonatomic,readonly) BOOL usesBackgroundSession; 
@property (assign,nonatomic) BOOL allowsCellularAccess;                                      //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,nonatomic) BOOL allowsPowerNapScheduling;                                  //@synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier;                   //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationSecondaryIdentifier;                //@synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,retain) NSString * authPromptReason;                                    //@synthesize authPromptReason=_authPromptReason - In the implementation block
@property (assign,nonatomic) BOOL preferAnonymousRequests;                                   //@synthesize preferAnonymousRequests=_preferAnonymousRequests - In the implementation block
@property (assign,nonatomic) BOOL allowsBackgroundNetworking;                                //@synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;                                    //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned QOSClass; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                     //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) BOOL isExecuting;                                               //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                                                //@synthesize isFinished=_isFinished - In the implementation block
@property (retain) NSError * error;                                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) CKDURLRequest * request;                                        //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) CKOperationResult * operationResult; 
@property (nonatomic,retain) CKDOperationMetrics * cloudKitMetrics;                          //@synthesize cloudKitMetrics=_cloudKitMetrics - In the implementation block
@property (nonatomic,retain) CKDOperationMetrics * MMCSMetrics;                              //@synthesize MMCSMetrics=_MMCSMetrics - In the implementation block
@property (nonatomic,retain) NSDate * metricExecuteStartDate;                                //@synthesize metricExecuteStartDate=_metricExecuteStartDate - In the implementation block
@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSObject*<OS_dispatch_group> stateTransitionGroup;              //@synthesize stateTransitionGroup=_stateTransitionGroup - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestUUIDs;                                  //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
@property (nonatomic,retain) NSString * parentSectionID;                                     //@synthesize parentSectionID=_parentSectionID - In the implementation block
@property (nonatomic,retain) NSMutableArray * childOperations;                               //@synthesize childOperations=_childOperations - In the implementation block
@property (nonatomic,retain) NSMutableArray * finishedChildOperationIDs;                     //@synthesize finishedChildOperationIDs=_finishedChildOperationIDs - In the implementation block
@property (nonatomic,retain) id<NSObject> powerAssertion;                                    //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> childOperationsGroup;              //@synthesize childOperationsGroup=_childOperationsGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * flowControlKey; 
+(id)_globalOperationCallbackQueueForQOS:(long long)arg1 ;
-(BOOL)isConcurrent;
-(void)cancel;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(CKDURLRequest *)request;
-(CKDClientContext *)context;
-(void)start;
-(void)setContext:(CKDClientContext *)arg1 ;
-(void)main;
-(CKDClientProxy *)proxy;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finishWithError:(id)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRequest:(CKDURLRequest *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSError *)error;
-(NSString *)sectionID;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setProxy:(CKDClientProxy *)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(NSString *)operationID;
-(BOOL)usesBackgroundSession;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(CKOperationResult *)operationResult;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(CKTimeLogger *)timeLogger;
-(id)CKPropertiesDescription;
-(void)setAllowsPowerNapScheduling:(BOOL)arg1 ;
-(BOOL)allowsCellularAccess;
-(BOOL)allowsPowerNapScheduling;
-(void)setTimeLogger:(CKTimeLogger *)arg1 ;
-(CKDOperation *)parentOperation;
-(NSString *)parentSectionID;
-(BOOL)useEncryption;
-(NSString *)authPromptReason;
-(BOOL)preferAnonymousRequests;
-(BOOL)allowsBackgroundNetworking;
-(NSString *)deviceIdentifier;
-(void)setCloudKitMetrics:(CKDOperationMetrics *)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(NSMutableArray *)requestUUIDs;
-(NSMutableArray *)finishedChildOperationIDs;
-(NSMutableArray *)childOperations;
-(CKDOperationMetrics *)MMCSMetrics;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(void)setAuthPromptReason:(NSString *)arg1 ;
-(void)setPreferAnonymousRequests:(BOOL)arg1 ;
-(void)setAllowsBackgroundNetworking:(BOOL)arg1 ;
-(void)setParentOperation:(CKDOperation *)arg1 ;
-(void)setParentSectionID:(NSString *)arg1 ;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)setMMCSMetrics:(CKDOperationMetrics *)arg1 ;
-(CKDOperationMetrics *)cloudKitMetrics;
-(void)setUseEncryption:(BOOL)arg1 ;
-(void)_combineMetricsWithOperation:(id)arg1 ;
-(NSObject*<OS_dispatch_group>)childOperationsGroup;
-(void)_acquirePowerAssertion;
-(void)_continueOperationStart;
-(unsigned long long)activityStart;
-(void)setMetricExecuteStartDate:(NSDate *)arg1 ;
-(NSDate *)metricExecuteStartDate;
-(void)setIsExecuting:(BOOL)arg1 ;
-(BOOL)operationShouldBeFlowControlled;
-(BOOL)shouldCheckAppVersion;
-(BOOL)_checkAppVersion;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)_finishInternalOnCallbackQueueWithError:(id)arg1 ;
-(void)_dropPowerAssertion;
-(BOOL)_errorShouldImpactFlowControl:(id)arg1 ;
-(BOOL)makeStateTransition;
-(NSObject*<OS_dispatch_group>)stateTransitionGroup;
-(unsigned)QOSClass;
-(void)makeStateTransition:(BOOL)arg1 ;
-(NSString *)flowControlKey;
-(void)configureRequest:(id)arg1 ;
-(void)setRequestUUIDs:(NSMutableArray *)arg1 ;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
-(void)requestDidFinishWithMetrics:(id)arg1 ;
-(void)requestDidBeginWaitingForUserAuth:(id)arg1 ;
-(void)requestDidEndWaitingForUserAuth:(id)arg1 ;
-(id)newChildOperationInfoOfClass:(Class)arg1 ;
-(void)addAndRunChildOperation:(id)arg1 ;
-(unsigned long long)activityID;
-(void)setActivityID:(unsigned long long)arg1 ;
-(void)setStateTransitionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setChildOperations:(NSMutableArray *)arg1 ;
-(void)setFinishedChildOperationIDs:(NSMutableArray *)arg1 ;
-(id<NSObject>)powerAssertion;
-(void)setPowerAssertion:(id<NSObject>)arg1 ;
-(void)setChildOperationsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end

