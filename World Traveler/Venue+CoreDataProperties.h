//
//  Venue+CoreDataProperties.h
//  World Traveler
//
//  Created by Murari Varma on 27/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "Venue+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Venue (CoreDataProperties)

+ (NSFetchRequest<Venue *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, copy) NSString *id;
@property (nullable, nonatomic, retain) FSCategory *categories;
@property (nullable, nonatomic, retain) Contact *contact;
@property (nullable, nonatomic, retain) Location *location;
@property (nullable, nonatomic, retain) Menu *menu;

@end

NS_ASSUME_NONNULL_END
