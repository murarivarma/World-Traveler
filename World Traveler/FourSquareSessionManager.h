//
//  FourSquareSessionManager.h
//  World Traveler
//
//  Created by Murari Varma on 28/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//

#import <AFNetworking/AFNetworking.h>

@interface FourSquareSessionManager : AFHTTPSessionManager

+(instancetype)sharedClient;

@end
