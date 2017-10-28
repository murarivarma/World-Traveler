//
//  FourSquareSessionManager.m
//  World Traveler
//
//  Created by Murari Varma on 28/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//

#import "FourSquareSessionManager.h"

static NSString *const FoursquareBaseURLString = @"https://api.foursquare.com/v2/";

@implementation FourSquareSessionManager

+(instancetype)sharedClient {
    
    static FourSquareSessionManager *_sharedClient = nil;
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedClient = [[FourSquareSessionManager alloc] initWithBaseURL:[NSURL URLWithString:FoursquareBaseURLString]];
    });
    
    return _sharedClient;
}

@end
