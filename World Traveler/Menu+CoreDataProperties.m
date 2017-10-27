//
//  Menu+CoreDataProperties.m
//  World Traveler
//
//  Created by Murari Varma on 27/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "Menu+CoreDataProperties.h"

@implementation Menu (CoreDataProperties)

+ (NSFetchRequest<Menu *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Menu"];
}

@dynamic url;
@dynamic label;
@dynamic venue;

@end
