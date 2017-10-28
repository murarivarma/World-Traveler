//
//  Menu+CoreDataProperties.h
//  World Traveler
//
//  Created by Murari Varma on 28/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//

#import "Menu+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Menu (CoreDataProperties)

+ (NSFetchRequest<Menu *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *label;
@property (nullable, nonatomic, copy) NSString *url;
@property (nullable, nonatomic, retain) Venue *venue;

@end

NS_ASSUME_NONNULL_END
