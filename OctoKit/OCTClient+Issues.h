//
//  OCTClient+Issues.h
//  OctoKit
//
//  Created by Aaron Brethorst on 12/19/13.
//  Copyright (c) 2013 GitHub. All rights reserved.
//

#import "OCTClient.h"

@class OCTIssue;
@class OCTRepository;

@interface OCTClient (Issues)

// Fetches the specified repository's issues.
//
// Returns a signal which sends zero or more OCTIssue objects. Private
// repositories' issues will only be returned included if the client is
// `authenticated` and the `user` has permission to see them.
- (RACSignal *)fetchIssuesForRepository:(OCTRepository *)repository;

// Fetches the specified issue's comments.
//
// Returns a signal which sends zero or more OCTIssueComment objects. Private
// repositories' `issue` comments will only be returned included if the client is
// `authenticated` and the `user` has permission to see them.
- (RACSignal*)fetchCommentsForIssue:(OCTIssue*)issue;


// Fetches the issue specified by `url`.
//
// Returns a signal which sends zero or one OCTIssue objects. A private
// repository's `issue` will only be returned included if the client is
// `authenticated` and the `user` has permission to see them.
- (RACSignal*)fetchIssue:(NSURL*)url;
@end
