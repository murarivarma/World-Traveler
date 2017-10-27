//
//  Menu+CoreDataProperties.h
//  World Traveler
//
//  Created by Murari Varma on 27/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "Menu+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Menu (CoreDataProperties)

+ (NSFetchRequest<Menu *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *url;
@property (nullable, nonatomic, copy) NSString *label;
@property (nullable, nonatomic, retain) Venue *venue;

@end

NS_ASSUME_NONNULL_END
