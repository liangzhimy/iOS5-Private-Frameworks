/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VoiceServices/VSRecognitionRecognizeAction.h>

@class NSMutableDictionary, NSString;

@interface VSRecognitionDisambiguateAction : VSRecognitionRecognizeAction
{
    NSString *_repeatedSpokenFeedbackString;
    NSString *_sequenceTag;
    NSMutableDictionary *_knownValues;
    NSMutableDictionary *_knownPhoneticValues;
    NSMutableDictionary *_ambiguousValues;
    NSMutableDictionary *_ambiguousPhoneticValues;
    void *_context;
}

- (void)dealloc;
- (int)completionType;
- (void)setRepeatedSpokenFeedbackString:(id)arg1;
- (id)repeatedSpokenFeedbackString;
- (id)sequenceTag;
- (void)setSequenceTag:(id)arg1;
- (id)knownValueForClassIdentifier:(id)arg1;
- (void)setKnownValue:(id)arg1 phoneticValue:(id)arg2 forClassIdentifier:(id)arg3;
- (id)knownValuesForClassIdentifier:(id)arg1;
- (void)setKnownValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3;
- (id)ambiguousValuesForClassIdentifier:(id)arg1;
- (void)setAmbiguousValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3;
- (id)_keywords;
- (BOOL)_keywordIndexChanged;
- (void)setKeywords:(id)arg1;
- (struct __VSRecognitionDisambiguationContext *)_disambiguationContext;
- (struct __VSRecognition *)_createRecognitionInstanceWithCallbacks:(CDStruct_90f67059 *)arg1 info:(void *)arg2;
- (id)_actionForEmptyResults;

@end

