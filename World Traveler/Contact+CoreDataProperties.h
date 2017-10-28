//
//  Contact+CoreDataProperties.h
//  World Traveler
//
//  Created by Murari Varma on 28/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//

#import "Contact+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Contact (CoreDataProperties)

+ (NSFetchRequest<Contact *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *formattedPhone;
@property (nullable, nonatomic, copy) NSString *phone;
@property (nullable, nonatomic, retain) Venue *venue;

@end

NS_ASSUME_NONNULL_END
