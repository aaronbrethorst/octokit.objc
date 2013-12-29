//
//  OCTIssue.h
//  OctoKit
//
//  Created by Justin Spahr-Summers on 2012-10-02.
//  Copyright (c) 2012 GitHub. All rights reserved.
//

#import "OCTObject.h"

@class OCTMilestone;
@class OCTPullRequest;
@class OCTUser;

// An issue on a repository.
@interface OCTIssue : OCTObject

// The user to whom this issue is currently assigned,
// or nil if this issue is unassigned.
@property (nonatomic, copy, readonly) OCTUser *assignee;

// The body of this issue.
@property (nonatomic, copy, readonly) NSString *body;

// The number of comments on this issue.
@property (nonatomic, readonly) NSUInteger comments;

// The date this issue was created at.
@property (nonatomic, copy, readonly) NSDate *createdAt;

// The webpage URL for this issue.
@property (nonatomic, copy, readonly) NSURL *HTMLURL;

// The milestone to which this issue is assigned, if any.
@property (nonatomic, copy, readonly) OCTMilestone *milestone;

// The pull request that is attached to (i.e., the same as) this issue, or nil
// if this issue does not have code attached.
@property (nonatomic, copy, readonly) OCTPullRequest *pullRequest;

// The title of this issue.
@property (nonatomic, copy, readonly) NSString *title;

// The date this issue was last updated at.
@property (nonatomic, copy, readonly) NSDate *updatedAt;

// The API URL for this issue.
@property (nonatomic, copy, readonly) NSURL *URL;

@end
