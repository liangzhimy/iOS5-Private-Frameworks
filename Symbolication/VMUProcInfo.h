/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SafeVMUProcInfoProtocol-Protocol.h"

@class NSArray, NSString;

@interface VMUProcInfo : NSObject <SafeVMUProcInfoProtocol>
{
    unsigned int _task;
    BOOL _needTaskPortDealloc;
    NSString *_name;
    int _cpuType;
    NSArray *_arguments;
    NSArray *_envVars;
    NSString *_procTableName;
    NSString *_realAppName;
    NSString *_requestedAppName;
    NSString *_firstArg;
    int _pid;
    int _ppid;
    struct timeval _startTime;
}

+ (id)getProcessIds;
+ (BOOL)isProcessRunning:(int)arg1;
+ (int)processParentId:(int)arg1;
- (id)init;
- (id)initWithPid:(int)arg1;
- (id)initWithTask:(unsigned int)arg1;
- (void)dealloc;
- (void)finalize;
- (struct timeval)startTime;
- (id)procTableName;
- (id)_infoFromCommandLine:(int)arg1;
- (id)realAppName;
- (id)requestedAppName;
- (id)firstArgument;
- (id)arguments;
- (id)envVars;
- (id)userAppName;
- (id)name;
- (id)description;
- (int)pid;
- (int)ppid;
- (unsigned int)task;
- (void)update;
- (BOOL)isApp;
- (BOOL)isMachO;
- (BOOL)isCFM;
- (int)cpuType;
- (BOOL)isNative;
- (BOOL)isRunning;
- (BOOL)terminate;
- (BOOL)signal:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)compare:(id)arg1;
- (int)compareByName:(id)arg1;
- (int)compareByUserAppName:(id)arg1;
- (unsigned int)hash;

@end
