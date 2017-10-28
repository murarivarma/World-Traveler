//
//  Menu+CoreDataProperties.m
//  World Traveler
//
//  Created by Murari Varma on 28/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//

#import "Menu+CoreDataProperties.h"

@implementation Menu (CoreDataProperties)

+ (NSFetchRequest<Menu *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Menu"];
}

@dynamic label;
@dynamic url;
@dynamic venue;

@end
