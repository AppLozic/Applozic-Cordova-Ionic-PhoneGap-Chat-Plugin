//
//  ALChatManager.h
//  applozicdemo
//
//  Created by Devashish on 28/12/15.
//  Copyright © 2015 applozic Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Applozic/ALChatLauncher.h>
#import <Applozic/ALUser.h>
#import <Applozic/ALConversationService.h>
#import <Applozic/ALRegisterUserClientService.h>
#import <Cordova/CDV.h>
#import "alChatManager.h"

#define APPLICATION_ID @"applozic-sample-app"


@interface ALChatManagerCDVPlugin : CDVPlugin

-(NSString *)getApplicationKey;

- (ALChatManager *)getALChatManager:(NSString*)applicationId;

- (void) chatDemo:(CDVInvokedUrlCommand*)command;

- (void) registerALUser:(CDVInvokedUrlCommand*)command;

- (void) openChat:(CDVInvokedUrlCommand*)command;

- (void) launchChatWithUserId:(CDVInvokedUrlCommand*)command;

- (void) launchChatWithGroupId:(CDVInvokedUrlCommand*)command;

- (void) launchChatWithClientGroupId:(CDVInvokedUrlCommand*)command;

- (void) logout:(CDVInvokedUrlCommand*)command;

@end