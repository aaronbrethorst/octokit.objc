//
//  OCTIssue.h
//  OctoKit
//
//  Created by Justin Spahr-Summers on 2012-10-02.
//  Copyright (c) 2012 GitHub. All rights reserved.
//

#import "OCTObject.h"

@class OCTPullRequest;
@class OCTUser;

// An issue on a repository.
@interface OCTIssue : OCTObject

// The body of this issue.
@property (nonatomic, copy, readonly) NSString *body;

// The webpage URL for this issue.
@property (nonatomic, copy, readonly) NSURL *HTMLURL;

// The title of this issue.
@property (nonatomic, copy, readonly) NSString *title;

// The user to whom this issue is currently assigned,
// or nil if this issue is unassigned.
@property (nonatomic, copy, readonly) OCTUser *assignee;

// The pull request that is attached to (i.e., the same as) this issue, or nil
// if this issue does not have code attached.
@property (nonatomic, copy, readonly) OCTPullRequest *pullRequest;

@end
