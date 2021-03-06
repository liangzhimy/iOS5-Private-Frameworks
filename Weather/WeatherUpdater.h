/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Weather/WeatherXMLHTTPRequest.h>

@class NSMutableArray;

@interface WeatherUpdater : WeatherXMLHTTPRequest
{
    NSMutableArray *_updatingCities;
    NSMutableArray *_pendingCities;
    id <WeatherUpdaterDelegate> _delegate;
}

- (BOOL)isDataValid:(id)arg1;
- (void)parsedResultCity:(id)arg1;
- (void)failCity:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)_updateNextPendingCity;
- (void)addCityToPendingQueue:(id)arg1;
- (void)_failed:(int)arg1;
- (void)processDocument:(struct _xmlDoc *)arg1;
- (void)loadRequestURL:(id)arg1 parameters:(id)arg2;
- (void)didProcessDocument;
- (void)failWithError:(id)arg1;
- (BOOL)isUpdatingCity:(id)arg1;

@end

