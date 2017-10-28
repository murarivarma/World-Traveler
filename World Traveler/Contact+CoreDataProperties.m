//
//  Contact+CoreDataProperties.m
//  World Traveler
//
//  Created by Murari Varma on 28/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//

#import "Contact+CoreDataProperties.h"

@implementation Contact (CoreDataProperties)

+ (NSFetchRequest<Contact *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Contact"];
}

@dynamic formattedPhone;
@dynamic phone;
@dynamic venue;

@end
