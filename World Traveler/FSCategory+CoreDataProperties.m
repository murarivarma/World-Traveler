//
//  FSCategory+CoreDataProperties.m
//  World Traveler
//
//  Created by Murari Varma on 28/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//

#import "FSCategory+CoreDataProperties.h"

@implementation FSCategory (CoreDataProperties)

+ (NSFetchRequest<FSCategory *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"FSCategory"];
}

@dynamic id;
@dynamic name;
@dynamic venue;

@end
