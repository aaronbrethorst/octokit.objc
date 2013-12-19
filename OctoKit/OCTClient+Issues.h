//
//  OCTClient+Issues.h
//  OctoKit
//
//  Created by Aaron Brethorst on 12/19/13.
//  Copyright (c) 2013 GitHub. All rights reserved.
//

#import "OCTClient.h"

@class OCTRepository;

@interface OCTClient (Issues)

// Fetches the specified repository's issues.
//
// Returns a signal which sends zero or more OCTIssue objects. Private
// repositories' issues will only be returned included if the client is
// `authenticated` and the `user` has permission to see them.
- (RACSignal *)fetchIssuesForRepository:(OCTRepository *)repository;

@end
