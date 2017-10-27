//
//  Location+CoreDataProperties.h
//  World Traveler
//
//  Created by Murari Varma on 27/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "Location+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Location (CoreDataProperties)

+ (NSFetchRequest<Location *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *state;
@property (nullable, nonatomic, copy) NSString *postalCode;
@property (nonatomic) float lat;
@property (nonatomic) float lng;
@property (nullable, nonatomic, copy) NSString *crossStreet;
@property (nullable, nonatomic, copy) NSString *country;
@property (nullable, nonatomic, copy) NSString *city;
@property (nullable, nonatomic, copy) NSString *cc;
@property (nullable, nonatomic, copy) NSString *address;
@property (nullable, nonatomic, retain) Venue *venue;

@end

NS_ASSUME_NONNULL_END
