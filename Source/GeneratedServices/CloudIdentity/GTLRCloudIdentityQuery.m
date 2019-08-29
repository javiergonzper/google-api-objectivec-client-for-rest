// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Identity API (cloudidentity/v1)
// Description:
//   API for provisioning and managing identity resources.
// Documentation:
//   https://cloud.google.com/identity/

#import "GTLRCloudIdentityQuery.h"

#import "GTLRCloudIdentityObjects.h"

// ----------------------------------------------------------------------------
// Constants

// view
NSString * const kGTLRCloudIdentityViewBasic           = @"BASIC";
NSString * const kGTLRCloudIdentityViewFull            = @"FULL";
NSString * const kGTLRCloudIdentityViewViewUnspecified = @"VIEW_UNSPECIFIED";

// ----------------------------------------------------------------------------
// Query Classes
//

@implementation GTLRCloudIdentityQuery

@dynamic fields;

@end

@implementation GTLRCloudIdentityQuery_GroupsCreate

+ (instancetype)queryWithObject:(GTLRCloudIdentity_Group *)object {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"v1/groups";
  GTLRCloudIdentityQuery_GroupsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.groups.create";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudIdentityQuery_GroupsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.groups.delete";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudIdentityQuery_GroupsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Group class];
  query.loggingName = @"cloudidentity.groups.get";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsList

@dynamic pageSize, pageToken, parent, view;

+ (instancetype)query {
  NSString *pathURITemplate = @"v1/groups";
  GTLRCloudIdentityQuery_GroupsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRCloudIdentity_ListGroupsResponse class];
  query.loggingName = @"cloudidentity.groups.list";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsLookup

@dynamic groupKeyId, groupKeyNamespace;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"groupKeyId" : @"groupKey.id",
    @"groupKeyNamespace" : @"groupKey.namespace"
  };
  return map;
}

+ (instancetype)query {
  NSString *pathURITemplate = @"v1/groups:lookup";
  GTLRCloudIdentityQuery_GroupsLookup *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRCloudIdentity_LookupGroupNameResponse class];
  query.loggingName = @"cloudidentity.groups.lookup";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsMembershipsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRCloudIdentity_Membership *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/memberships";
  GTLRCloudIdentityQuery_GroupsMembershipsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.groups.memberships.create";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsMembershipsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudIdentityQuery_GroupsMembershipsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.groups.memberships.delete";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsMembershipsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudIdentityQuery_GroupsMembershipsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Membership class];
  query.loggingName = @"cloudidentity.groups.memberships.get";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsMembershipsList

@dynamic pageSize, pageToken, parent, view;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/memberships";
  GTLRCloudIdentityQuery_GroupsMembershipsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudIdentity_ListMembershipsResponse class];
  query.loggingName = @"cloudidentity.groups.memberships.list";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsMembershipsLookup

@dynamic memberKeyId, memberKeyNamespace, parent;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"memberKeyId" : @"memberKey.id",
    @"memberKeyNamespace" : @"memberKey.namespace"
  };
  return map;
}

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/memberships:lookup";
  GTLRCloudIdentityQuery_GroupsMembershipsLookup *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudIdentity_LookupMembershipNameResponse class];
  query.loggingName = @"cloudidentity.groups.memberships.lookup";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRCloudIdentity_Group *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudIdentityQuery_GroupsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.groups.patch";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsSearch

@dynamic pageSize, pageToken, query, view;

+ (instancetype)query {
  NSString *pathURITemplate = @"v1/groups:search";
  GTLRCloudIdentityQuery_GroupsSearch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRCloudIdentity_SearchGroupsResponse class];
  query.loggingName = @"cloudidentity.groups.search";
  return query;
}

@end