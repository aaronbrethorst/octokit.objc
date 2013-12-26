//
//  OCTClient+Issues.m
//  OctoKit
//
//  Created by Aaron Brethorst on 12/19/13.
//  Copyright (c) 2013 GitHub. All rights reserved.
//

#import "OCTClient+Issues.h"
#import "OCTRepository.h"
#import "OCTIssue.h"
#import "OCTIssueComment.h"
#import "RACSignal+OCTClientAdditions.h"
#import <ReactiveCocoa/ReactiveCocoa.h>

@implementation OCTClient (Issues)

- (RACSignal *)fetchIssuesForRepository:(OCTRepository *)repository {
	NSURLRequest *request = [self requestWithMethod:@"GET"
											   path:[NSString stringWithFormat:@"/repos/%@/%@/issues", repository.ownerLogin, repository.name]
										 parameters:nil
									notMatchingEtag:nil];
	return [[self enqueueRequest:request resultClass:OCTIssue.class] oct_parsedResults];
}

- (RACSignal*)fetchCommentsForIssue:(OCTIssue*)issue {
	NSString *issuePath = issue.URL.path;
	NSURLRequest* request = [self requestWithMethod:@"GET" path:[NSString stringWithFormat:@"%@/comments", issuePath]
										 parameters:nil];
	return [[self enqueueRequest:request resultClass:OCTIssueComment.class] oct_parsedResults];
}

@end
