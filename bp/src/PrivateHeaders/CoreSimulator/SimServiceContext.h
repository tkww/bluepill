//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString, SimProfilesPathMonitor;

@interface SimServiceContext : NSObject
{
    NSMutableArray *_supportedDeviceTypes;
    NSMutableDictionary *_supportedDeviceTypesByIdentifier;
    NSMutableDictionary *_supportedDeviceTypesByAlias;
    NSMutableArray *_supportedRuntimes;
    NSMutableDictionary *_supportedRuntimesByIdentifier;
    NSMutableDictionary *_supportedRuntimesByAlias;
    NSString *_developerDir;
    NSMutableDictionary *_allDeviceSets;
    NSMutableDictionary *_supportedChromeBundles;
    BOOL _valid;
    BOOL _initialized;
    long long _connectionType;
    NSObject *_serviceConnection;
    NSObject *_serviceConnectionQueue;
    NSDate *_lastConnectionTime;
    SimProfilesPathMonitor *_profileMonitor;
    NSObject *_profileQueue;
    NSObject *_allDeviceSetsQueue;
}

+ (void)setSharedContextConnectionType:(long long)arg1;
+ (id)serviceContextForDeveloperDir:(id)arg1 connectionType:(long long)arg2 error:(id *)arg3;
+ (id)sharedServiceContextForDeveloperDir:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSObject *allDeviceSetsQueue; // @synthesize allDeviceSetsQueue=_allDeviceSetsQueue;
@property(nonatomic) BOOL initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *profileQueue; // @synthesize profileQueue=_profileQueue;
@property(retain, nonatomic) SimProfilesPathMonitor *profileMonitor; // @synthesize profileMonitor=_profileMonitor;
@property(retain, nonatomic) NSDate *lastConnectionTime; // @synthesize lastConnectionTime=_lastConnectionTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serviceConnectionQueue; // @synthesize serviceConnectionQueue=_serviceConnectionQueue;
@property(retain, nonatomic) NSObject *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
@property(nonatomic) BOOL valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSString *developerDir; // @synthesize developerDir=_developerDir;
@property(nonatomic) long long connectionType; // @synthesize connectionType=_connectionType;
@property(readonly, nonatomic) NSDictionary *supportedChromeBundles;
- (void)supportedChromeBundlesAddProfilesAtPath:(id)arg1;
- (void)handleXPCEvent:(id)arg1;
- (void)handleReconnectionBookkeeping;
- (void)addProfilesForDeveloperDir:(id)arg1;
- (void)supportedRuntimesAddProfilesAtPath:(id)arg1;
- (void)supportedDeviceTypesAddProfilesAtPath:(id)arg1;
- (void)serviceAddProfilesAtPath:(id)arg1;
- (void)addProfilesAtPath:(id)arg1;
@property(readonly, nonatomic) NSDictionary *supportedRuntimesByAlias;
@property(readonly, nonatomic) NSDictionary *supportedRuntimesByIdentifier;
@property(readonly, nonatomic) NSArray *bundledRuntimes;
@property(readonly, nonatomic) NSArray *supportedRuntimes;
@property(readonly, nonatomic) NSDictionary *supportedDeviceTypesByAlias;
@property(readonly, nonatomic) NSDictionary *supportedDeviceTypesByIdentifier;
@property(readonly, nonatomic) NSArray *bundledDeviceTypes;
@property(readonly, nonatomic) NSArray *supportedDeviceTypes;
- (id)allDeviceSets;
- (id)deviceSetWithPath:(id)arg1 error:(id *)arg2;
- (id)defaultDeviceSetWithError:(id *)arg1;
- (void)dealloc;
- (void)connect;
- (id)initWithDeveloperDir:(id)arg1 connectionType:(long long)arg2;

@end

