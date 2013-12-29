//
//  OCTMilestone.m
//  OctoKit
//
//  Created by Aaron Brethorst on 12/29/13.
//  Copyright (c) 2013 GitHub. All rights reserved.
//

#import "OCTMilestone.h"
#import "NSValueTransformer+OCTPredefinedTransformerAdditions.h"

@implementation OCTMilestone

#pragma mark MTLJSONSerializing

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
	return [super.JSONKeyPathsByPropertyKey mtl_dictionaryByAddingEntriesFromDictionary:@{
      @"body": @"description",
	  @"createdAt": @"created_at",
	  @"closedIssues": @"closed_issues",
	  @"dueOn": @"due_on",
	  @"objectID": @"number",
	  @"openIssues": @"open_issues",
	  @"state": @"state",
	  @"title": @"title",
	  @"URL": @"url"
	}];
}

+ (NSValueTransformer *)createdAtJSONTransformer {
	return [NSValueTransformer valueTransformerForName:OCTDateValueTransformerName];
}

+ (NSValueTransformer *)dueOnJSONTransformer {
	return [NSValueTransformer valueTransformerForName:OCTDateValueTransformerName];
}

+ (NSValueTransformer *)URLJSONTransformer {
	return [NSValueTransformer valueTransformerForName:MTLURLValueTransformerName];
}
@end
