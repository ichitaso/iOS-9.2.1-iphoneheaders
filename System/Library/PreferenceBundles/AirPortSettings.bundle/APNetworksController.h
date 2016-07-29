/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <AirPortSettings/AirPortAssistantControllerDelegate.h>

@class WiFiManager, NSMutableArray, PSSpecifier, NSMutableDictionary, NSString, NSTimer, APPasswordAlert, APAlert, APPersonalHotspotAlert, APCarPlayAlert, UIAlertView, UIView, NSMutableSet, NSArray, NSDictionary, UINavigationController, WiFiNetwork;

@interface APNetworksController : PSListController <AirPortAssistantControllerDelegate> {

	WiFiManager* _manager;
	NSMutableArray* _group1;
	NSMutableArray* _alwaysVisibleGroup;
	NSMutableArray* _poweredOnGroup;
	NSMutableArray* _askToJoinGroup;
	NSMutableArray* _knownNetworksGroup;
	NSMutableArray* _buddyGroup;
	PSSpecifier* _networksGroup;
	PSSpecifier* _powerSpecifier;
	PSSpecifier* _diagnosticsSpecifier;
	NSMutableArray* _networks;
	NSMutableDictionary* _networksDict;
	PSSpecifier* _unconfigGroup;
	NSMutableArray* _unconfig;
	NSMutableDictionary* _config;
	NSMutableDictionary* _unconfigSpecifiers;
	PSSpecifier* _adhocGroup;
	NSMutableArray* _adhocs;
	NSMutableDictionary* _adhocSpecifiers;
	PSSpecifier* _hotspotsGroup;
	NSMutableArray* _hotspots;
	NSMutableDictionary* _hotspotsSpecifiers;
	NSMutableDictionary* _securityDict;
	NSString* _enterprisePrompt;
	NSString* _autojoinOn;
	NSString* _autojoinOff;
	NSString* _locationWarning;
	PSSpecifier* _knownNetworks;
	PSSpecifier* _currentNetworkSpecifier;
	NSMutableArray* _tetheringGroup;
	BOOL _tetheringGroupVisible;
	BOOL _power;
	NSTimer* _scanTimer;
	BOOL _scanning;
	BOOL _disclosing;
	BOOL _joining;
	BOOL _joiningEnterprise;
	BOOL _showingCert;
	BOOL _showKnownNetworks;
	NSString* _lastNetworkName;
	PSSpecifier* _joiningSpecifier;
	APPasswordAlert* _passwordAlert;
	APAlert* _alert;
	APPersonalHotspotAlert* _hotspotAlert;
	APCarPlayAlert* _carplayAlert;
	UIAlertView* _adhocJoinAlert;
	UIAlertView* _tetheringFailureAlert;
	UIView* _buddyHeaderView;
	UIView* _buddyFooterView;
	UIView* _buddyIPadContainerView;
	PSSpecifier* _otherSpecifier;
	NSMutableSet* _currentScanList;
	int _role;
	NSArray* _certificateChain;
	NSDictionary* _scanDictForTrustRequest;
	BOOL _formSheetVisible;
	BOOL _willResign;
	UINavigationController* _assistantNavController;
	BOOL _buddyGroupVisible;
	BOOL _buddyButtonCellular;
	BOOL _buddySimpleMode;
	BOOL _visible;
	WiFiNetwork* _otherUINetworkToJoin;
	BOOL _joinRequestedFromSettings;
	BOOL _joinedFromSettings;

}
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(BOOL)alertViewShouldEnableFirstOtherButton:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)formSheetViewWillDisappear;
-(void)handleURL:(id)arg1 ;
-(void)willUnlock;
-(void)didWake;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)formSheetViewDidDisappear;
-(void)cancelButtonClicked;
-(void)airPortAssistantComplete:(id)arg1 result:(int)arg2 context:(id)arg3 animated:(BOOL)arg4 ;
-(id)specifiers;
-(void)networkChanged:(id)arg1 ;
-(void)requestJoinFromSettings:(id)arg1 ;
-(void)_updateCurrentNetwork:(id)arg1 ;
-(void)updateCurrentNetworkUI;
-(void)scanForNetworks:(id)arg1 ;
-(void)_enableTable:(id)arg1 ;
-(void)_insertSpecifiersForAdhocNetworks:(id)arg1 animated:(BOOL)arg2 ;
-(void)_insertSpecifiersForNewNetworks:(id)arg1 animated:(BOOL)arg2 ;
-(id)_createSpecifierForNetwork:(id)arg1 ;
-(void)_deleteSpecifiersForLostAdhocNetworks:(id)arg1 originalSpecifiers:(id)arg2 animated:(BOOL)arg3 ;
-(void)_deleteSpecifiersForLostNetworks:(id)arg1 originalSpecifiers:(id)arg2 animated:(BOOL)arg3 ;
-(void)dismissCertificateSheet;
-(void)_updateHotspotsUI;
-(void)__reloadSpecifiersWithName:(id)arg1 ;
-(void)_processJoinFromSettingsSuccess:(id)arg1 ;
-(void)setJoiningEnterpriseNetwork:(BOOL)arg1 ;
-(void)hotspotDisabledNowJoin;
-(void)passwordSheetDismissed:(id)arg1 password:(id)arg2 forNetwork:(id)arg3 ;
-(void)_joinFromOtherUI;
-(void)carplayDisabledNowJoin;
-(BOOL)_joinNetwork:(id)arg1 isOtherNetwork:(BOOL)arg2 ;
-(unsigned long long)indexOfNetwork:(id)arg1 fromArray:(id)arg2 ;
-(int)networksOffset;
-(id)_unconfigSpecifierForNetwork:(id)arg1 ;
-(void)_updateUnconfigNetworksLabel:(BOOL)arg1 ;
-(void)setTimeForNextScan:(double)arg1 ;
-(void)_deleteSpecifiersForLostUnconfigNetworks:(id)arg1 originalSpecifiers:(id)arg2 animated:(BOOL)arg3 ;
-(void)_insertSpecifiersForUnconfigNetworks:(id)arg1 animated:(BOOL)arg2 ;
-(void)_deleteSpecifiersForLostHotspotNetworks:(id)arg1 originalSpecifiers:(id)arg2 animated:(BOOL)arg3 ;
-(void)_insertSpecifiersForHotspotNetworks:(id)arg1 animated:(BOOL)arg2 ;
-(void)setNetworks:(id)arg1 animated:(BOOL)arg2 scanComplete:(BOOL)arg3 ;
-(void)_attemptJoinToNetwork:(id)arg1 ;
-(void)_showCertificateSheet:(BOOL)arg1 ;
-(void)notifyAirPortSettingsVisible:(BOOL)arg1 ;
-(void)_scrollToCurrentNetwork;
-(void)stopScanning;
-(void)updateKnownNetworksItemAnimated:(BOOL)arg1 ;
-(void)_viewMovedToForeground;
-(void)_handleEnterpriseRequest;
-(void)scanComplete:(id)arg1 ;
-(void)partialScanComplete:(id)arg1 ;
-(void)hotspotsScanComplete:(id)arg1 ;
-(void)scanFailed:(id)arg1 ;
-(void)networkSettingsChanged:(id)arg1 ;
-(void)powerChanged:(id)arg1 ;
-(void)joinFailed:(id)arg1 ;
-(void)joinSuccess:(id)arg1 ;
-(void)hotspotHack:(id)arg1 ;
-(void)hotspotJoinFailed:(id)arg1 ;
-(void)hs20NetworkUpdate:(id)arg1 ;
-(void)cnPlugInUpdate:(id)arg1 ;
-(void)chooseOtherTapped:(id)arg1 ;
-(BOOL)checkPersonalHotspotPrompt:(id)arg1 isHidden:(BOOL)arg2 ;
-(BOOL)checkCarPlayPromptForJoining:(id)arg1 isHidden:(BOOL)arg2 currentNetwork:(id)arg3 ;
-(void)dumpSpecifiers;
-(void)buddyButtonPressed:(id)arg1 ;
-(void)enterpriseStatusChanged:(id)arg1 ;
-(void)_startTetheringAssociation:(id)arg1 ;
-(void)configureBaseStation:(id)arg1 ;
-(void)rejectCertificate;
-(void)acceptCertificate:(id)arg1 ;
-(id)specifierWithLabel:(id)arg1 ;
-(id)airportEnabled:(id)arg1 ;
-(void)enableAirport:(id)arg1 ;
-(void)setAirportEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)autojoin:(id)arg1 ;
-(void)setAutojoin:(id)arg1 specifier:(id)arg2 ;
-(BOOL)joinOtherNetwork:(id)arg1 ;
-(void)controllerWasPushed;
-(void)setBuddyGroupVisible:(BOOL)arg1 ;
-(void)setBuddyButtonIsCellular:(BOOL)arg1 ;
-(void)setBuddySimpleMode:(BOOL)arg1 ;
@end
