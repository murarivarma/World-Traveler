//
//  FSCategory+CoreDataProperties.h
//  World Traveler
//
//  Created by Murari Varma on 27/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "FSCategory+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface FSCategory (CoreDataProperties)

+ (NSFetchRequest<FSCategory *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *id;
@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, retain) Venue *venue;

@end

NS_ASSUME_NONNULL_END
