//
//  Venue+CoreDataProperties.h
//  World Traveler
//
//  Created by Murari Varma on 28/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//

#import "Venue+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Venue (CoreDataProperties)

+ (NSFetchRequest<Venue *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *id;
@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, retain) FSCategory *categories;
@property (nullable, nonatomic, retain) Contact *contact;
@property (nullable, nonatomic, retain) Location *location;
@property (nullable, nonatomic, retain) Menu *menu;

@end

NS_ASSUME_NONNULL_END
