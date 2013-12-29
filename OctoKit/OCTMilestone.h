//
//  OCTMilestone.h
//  OctoKit
//
//  Created by Aaron Brethorst on 12/29/13.
//  Copyright (c) 2013 GitHub. All rights reserved.
//

#import "OCTObject.h"

@interface OCTMilestone : OCTObject

@property (nonatomic, readonly) NSUInteger closedIssues;

@property (nonatomic, copy, readonly) NSString *body;

@property (nonatomic, copy, readonly) NSDate *createdAt;

@property (nonatomic, copy, readonly) NSDate *dueOn;

@property (nonatomic, readonly) NSUInteger openIssues;

@property (nonatomic, copy, readonly) NSString *state;

@property (nonatomic, copy, readonly) NSString *title;

@property (nonatomic, copy, readonly) NSURL *URL;

@end