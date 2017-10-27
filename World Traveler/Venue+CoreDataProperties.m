//
//  Venue+CoreDataProperties.m
//  World Traveler
//
//  Created by Murari Varma on 27/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "Venue+CoreDataProperties.h"

@implementation Venue (CoreDataProperties)

+ (NSFetchRequest<Venue *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Venue"];
}

@dynamic name;
@dynamic id;
@dynamic categories;
@dynamic contact;
@dynamic location;
@dynamic menu;

@end
