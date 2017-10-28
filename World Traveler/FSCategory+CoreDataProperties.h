//
//  FSCategory+CoreDataProperties.h
//  World Traveler
//
//  Created by Murari Varma on 28/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
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
