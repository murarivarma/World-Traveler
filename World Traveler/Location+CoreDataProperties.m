//
//  Location+CoreDataProperties.m
//  World Traveler
//
//  Created by Murari Varma on 28/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//

#import "Location+CoreDataProperties.h"

@implementation Location (CoreDataProperties)

+ (NSFetchRequest<Location *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Location"];
}

@dynamic address;
@dynamic cc;
@dynamic city;
@dynamic country;
@dynamic crossStreet;
@dynamic lat;
@dynamic lng;
@dynamic postalCode;
@dynamic state;
@dynamic venue;

@end
