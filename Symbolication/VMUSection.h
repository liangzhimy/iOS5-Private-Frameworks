/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface VMUSection : NSObject
{
    NSString *_sectionName;
    NSString *_segmentName;
    unsigned long long _addr;
    unsigned long long _size;
    unsigned int _offset;
    unsigned int _align;
    unsigned int _reloff;
    unsigned int _nreloc;
    unsigned int _flags;
    unsigned int _reserved1;
    unsigned int _reserved2;
}

- (BOOL)isSection32;
- (BOOL)isSection64;
- (id)sectionName;
- (id)segmentName;
- (unsigned long long)addr;
- (unsigned long long)size;
- (unsigned int)offset;
- (unsigned int)align;
- (unsigned int)reloff;
- (unsigned int)nreloc;
- (unsigned int)flags;
- (unsigned int)reserved1;
- (unsigned int)reserved2;
- (id)description;
- (void)dealloc;

@end

