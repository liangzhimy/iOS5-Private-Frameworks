/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "OABBasePropertiesManager-Protocol.h"

@protocol OABPropertiesManager <OABBasePropertiesManager>
- (BOOL)isFillOK;
- (BOOL)isStrokeOK;
- (BOOL)isShadowOK;
- (BOOL)isTextPath;
- (id)textPathUnicodeString;
- (int)textPathTextAlignment;
- (long)textPathFontSize;
- (id)textPathFontFamily;
- (BOOL)textPathBold;
- (BOOL)textPathItalic;
- (BOOL)textPathUnderline;
- (BOOL)textPathSmallcaps;
- (BOOL)textPathStrikethrough;
- (BOOL)hidden;
@end
