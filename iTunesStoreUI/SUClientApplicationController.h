/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUClientController.h>

#import "SUTabBarControllerDelegate-Protocol.h"

@class ISOperation, NSString, NSURL, SSRemoteNotificationClient, SULocationObserver, SUPlaceholderViewController, SUSectionsResponse, SUTabBarController, UINavigationController;

@interface SUClientApplicationController : SUClientController <SUTabBarControllerDelegate>
{
    SUPlaceholderViewController *_fetchSectionsPlaceholder;
    int _ignoreDownloadQueueChangeCount;
    NSURL *_launchURL;
    SUSectionsResponse *_lastBackgroundSectionsResponse;
    SUSectionsResponse *_lastSectionsResponse;
    ISOperation *_loadSectionsOperation;
    SULocationObserver *_locationObserver;
    BOOL _reloadForStorefrontChangeAfterAccountSetup;
    BOOL _reloadSectionsOnNextLaunch;
    SSRemoteNotificationClient *_remoteNotificationClient;
    SUTabBarController *_tabBarController;
}

+ (id)sharedController;
+ (void)setSharedController:(id)arg1;
@property(readonly, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
- (BOOL)_showWildcatAccountViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_setupTabBarController;
- (id)_resumableViewController;
- (void)_cancelSuspendAfterDialogsDismissed;
- (void)_beginObservingLocation;
- (id)_accountViewController;
- (void)_handleSearchURL:(id)arg1;
- (void)_handleAccountURL:(id)arg1;
- (void)_defaultHandleApplicationURLRequestProperties:(id)arg1;
- (void)_retrySectionsAfterNetworkTransition;
- (void)_reloadWithSectionsResponse:(id)arg1;
- (BOOL)_reloadForStorefrontChange;
- (void)_presentSectionFetchUI;
- (BOOL)_loadSectionsAllowingCache:(BOOL)arg1 withCompletionBlock:(id)arg2;
- (void)_handleSectionsLoadFailedWithError:(id)arg1;
- (void)_handleFinishedLoadSectionsOperation:(id)arg1;
- (void)_handleFinishedBackgroundLoadSectionsOperation:(id)arg1;
- (void)_cancelSectionFetchPlaceholder;
- (void)_cancelLoadSectionsOperation;
- (void)_storeFrontChangedNotification:(id)arg1;
- (void)_selectFooterSectionNotification:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_remoteNotificationsAvailableNotification:(id)arg1;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (void)_dialogDidFinishNotification:(id)arg1;
- (void)bagDidLoadNotification:(id)arg1;
- (void)_accountControllerDisappearedNotification:(id)arg1;
- (void)resignActive;
- (BOOL)presentOverlayBackgroundViewController:(id)arg1;
- (void)presentExternalURLViewController:(id)arg1;
- (BOOL)presentAccountViewController:(id)arg1 showNavigationBar:(BOOL)arg2 animated:(BOOL)arg3;
- (id)overlayBackgroundViewController;
- (BOOL)openClientURL:(id)arg1;
- (BOOL)gotoStorePage:(id)arg1 animated:(BOOL)arg2;
- (BOOL)displayClientURL:(id)arg1;
- (BOOL)dismissTopViewControllerAnimated:(BOOL)arg1;
- (void)dismissOverlayBackgroundViewController;
- (void)cancelAllOperations;
- (void)becomeActive;
@property(readonly, nonatomic, getter=wasLaunchedFromLibrary) BOOL launchedFromLibrary;
@property(readonly, nonatomic) UINavigationController *topNavigationController;
- (void)tearDownUI;
@property(readonly, nonatomic) SUTabBarController *tabBarController;
- (id)showMainPageForItemKind:(id)arg1 sectionIdentifiers:(id)arg2;
- (void)setupUI;
- (BOOL)selectSectionWithIdentifier:(id)arg1;
- (void)returnToLibrary;
- (BOOL)reloadSectionWithIdentifier:(id)arg1 url:(id)arg2;
- (void)performActionForRemoteNotification:(id)arg1;
@property(readonly, nonatomic, getter=isTabBarControllerLoaded) BOOL tabBarControllerLoaded;
@property(readonly, nonatomic, getter=isIgnoringDownloadQueueChanges) BOOL ignoringDownloadQueueChanges;
- (void)exitStoreAfterDialogsDismiss;
- (void)endIgnoringDownloadQueueChanges;
- (void)dequeueRemoteNotifications;
@property(readonly, nonatomic) NSString *defaultPNGNameForSuspend;
- (double)defaultImageSnapshotExpiration;
- (id)copySuspendSettings;
- (void)beginIgnoringDownloadQueueChanges;
- (void)dealloc;
- (id)initWithClientIdentifier:(id)arg1;

@end

