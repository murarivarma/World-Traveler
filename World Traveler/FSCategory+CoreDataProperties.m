//
//  FSCategory+CoreDataProperties.m
//  World Traveler
//
//  Created by Murari Varma on 27/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//  This file was automatically generated and should not be edited.
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
