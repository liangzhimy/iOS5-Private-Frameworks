/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AccountsManager, NSArray, NoteContext;

@interface AccountUtilities : NSObject
{
    AccountsManager *_accountsManager;
    NSArray *_syncableAccounts;
    NoteContext *_noteContext;
}

+ (id)sharedAccountUtilities;
- (void).cxx_destruct;
- (BOOL)localNotesExist;
- (BOOL)isDeviceLocalAccount:(id)arg1;
- (id)defaultStoreSyncIdWithDesiredSyncId:(id)arg1;
- (id)syncAccountIdForDisplayAccountId:(id)arg1;
- (id)allDisplayAccounts;
- (id)allSyncableAccounts;
- (void)dealloc;
- (id)init;
- (void)accountsChanged;
- (id)accountsManager;

@end
