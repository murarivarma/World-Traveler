//
//  Venue+CoreDataClass.h
//  World Traveler
//
//  Created by Murari Varma on 28/10/17.
//  Copyright © 2017 murarivarma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "WTRecord.h"

@class Contact, FSCategory, Location, Menu;

NS_ASSUME_NONNULL_BEGIN

@interface Venue : WTRecord

@end

NS_ASSUME_NONNULL_END

#import "Venue+CoreDataProperties.h"
