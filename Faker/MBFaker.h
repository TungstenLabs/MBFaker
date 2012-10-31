//
//  MBFaker.h
//  Faker
//
//  Created by Michał Banasiak on 10/29/12.
//  Copyright (c) 2012 Michał Banasiak. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBFakerHelper.h"

@interface MBFaker : NSObject

+ (MBFaker*)sharedFaker;

- (NSArray*)availableLanguages;
- (NSString*)fetchStringWithKey:(NSString*)key;

@property (nonatomic, copy) NSString* language;



@end
