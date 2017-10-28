//
//  Venue+CoreDataProperties.m
//  World Traveler
//
//  Created by Murari Varma on 28/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//

#import "Venue+CoreDataProperties.h"

@implementation Venue (CoreDataProperties)

+ (NSFetchRequest<Venue *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Venue"];
}

@dynamic id;
@dynamic name;
@dynamic categories;
@dynamic contact;
@dynamic location;
@dynamic menu;

+(NSString *)keyPathForResponseObject {
    return @"response.venues";
}

@end
