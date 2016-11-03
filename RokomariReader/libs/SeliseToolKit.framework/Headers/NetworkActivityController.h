//
//  NetworkActivityController.h
//  Prokasona
//
//  Created by Towhid Islam on 1/10/14.
//  Copyright (c) 2014 Towhid Islam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Reachability.h"
#define kInternetReachableKey @"isInternetReachable"
extern NSString *const InternetReachableNotification;

@interface NetworkActivityController : NSObject
+ (id) sharedInstance;
- (void) startNetworkActivity;
- (void) stopNetworkActivity;
- (BOOL) isWifiReachable;
- (BOOL) isWWANReachable;
- (BOOL) isHostReachable;
- (BOOL) isInternetReachable; //every thing is merge into this
- (void) activateReachabilityObserverWithHostAddress:(NSString*)remoteHostName;
- (void) deactivateReachabilityObserver;
@end
