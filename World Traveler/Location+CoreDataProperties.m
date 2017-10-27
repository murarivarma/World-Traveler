//
//  Location+CoreDataProperties.m
//  World Traveler
//
//  Created by Murari Varma on 27/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "Location+CoreDataProperties.h"

@implementation Location (CoreDataProperties)

+ (NSFetchRequest<Location *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Location"];
}

@dynamic state;
@dynamic postalCode;
@dynamic lat;
@dynamic lng;
@dynamic crossStreet;
@dynamic country;
@dynamic city;
@dynamic cc;
@dynamic address;
@dynamic venue;

@end
