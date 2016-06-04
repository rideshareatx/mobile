//
//  Client.h
//  mobile-ios
//
//  Created by Daniel Zapata on 6/4/16.
//  Copyright © 2016 rideshareatx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UGClient.h"

@interface Client : NSObject

@property (nonatomic, strong) UGClient *usergridClient;
@property (nonatomic, strong) UGUser *user;

-(bool)login:(NSString*)username
withPassword:(NSString*)password;

-(bool)createUser:(NSString*)username
         withName:(NSString*)name
        withEmail:(NSString*)email
     withPassword:(NSString*)password;

-(bool)postMessage:(NSString*)message;


-(NSArray*)getMessages;

-(NSArray*)getFollowing;

-(bool)followUser:(NSString*)username;


@end
