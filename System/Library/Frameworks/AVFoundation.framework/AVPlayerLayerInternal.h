/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVPlayer, CALayer, FigVideoContainerLayer, AVPlayerLayer, NSDictionary, NSString, FigSubtitleCALayer, AVNetworkPlaybackPerfHUDLayer, NSSet, NSObject, AVPlayerItem;

@interface AVPlayerLayerInternal : NSObject {

	AVPlayer* _player;
	CALayer* maskLayer;
	FigVideoContainerLayer* videoLayer;
	AVPlayerLayer* associatedPIPLayer;
	BOOL willManageSublayersAsSwappedLayers;
	BOOL canEnterPIPMode;
	BOOL isPIPModeEnabled;
	BOOL preventsChangesToSublayerHierarchy;
	NSDictionary* clientLayers;
	CALayer* placeholderContentLayerDuringPIPMode;
	CALayer* closedCaptionLayer;
	NSString* videoGravity;
	NSString* subtitleGravity;
	FigSubtitleCALayer* subtitleLayer;
	AVNetworkPlaybackPerfHUDLayer* hudLayer;
	CGRect latestPlayerLayerBoundsAtRendering;
	CGRect latestSubtitleLayoutAtRendering;
	BOOL shouldObservePlayer;
	BOOL isObservingPlayer;
	BOOL hasPlayerToObserve;
	NSSet* KVOInvokers;
	NSObject*<OS_dispatch_queue> serialQueue;
	BOOL isPresentationLayer;
	BOOL isReadyForDisplay;
	OpaqueFigSimpleMutexRef isReadyForDisplayMutex;
	AVPlayerItem* itemMarkedReadyForDisplay;
	CGSize presentationSize;
	CGSize latestPresentationSizeAtRendering;
	NSDictionary* pixelBufferAttributes;
	CATransform3D oldSublayerTransform;
	BOOL canDispatchOverrides;
	NSObject*<OS_dispatch_queue> queueForDispatchingOverrides;

}
@end

