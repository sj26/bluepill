//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, XCTCapabilities;

@interface XCTCapabilitiesBuilder : NSObject
{
    NSMutableDictionary *_capabilitiesDictionary;
}

+ (id)capabilitiesFromProvider:(Class)arg1;
@property(readonly, copy) NSMutableDictionary *capabilitiesDictionary; // @synthesize capabilitiesDictionary=_capabilitiesDictionary;
@property(readonly, copy) XCTCapabilities *capabilities;
- (void)upgradeCapability:(id)arg1 toVersion:(unsigned long long)arg2;
- (void)registerCapability:(id)arg1;
- (void)registerCapability:(id)arg1 version:(unsigned long long)arg2;
- (id)init;

@end

