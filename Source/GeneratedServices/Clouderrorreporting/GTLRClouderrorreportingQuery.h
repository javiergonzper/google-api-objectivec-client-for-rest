// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Error Reporting API (clouderrorreporting/v1beta1)
// Description:
//   Groups and counts similar errors from cloud services and applications,
//   reports new errors, and provides access to error groups and their
//   associated errors.
// Documentation:
//   https://cloud.google.com/error-reporting/

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRClouderrorreporting_ErrorGroup;
@class GTLRClouderrorreporting_ReportedErrorEvent;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// alignment

/** Value: "ALIGNMENT_EQUAL_AT_END" */
FOUNDATION_EXTERN NSString * const kGTLRClouderrorreportingAlignmentAlignmentEqualAtEnd;
/** Value: "ALIGNMENT_EQUAL_ROUNDED" */
FOUNDATION_EXTERN NSString * const kGTLRClouderrorreportingAlignmentAlignmentEqualRounded;
/** Value: "ERROR_COUNT_ALIGNMENT_UNSPECIFIED" */
FOUNDATION_EXTERN NSString * const kGTLRClouderrorreportingAlignmentErrorCountAlignmentUnspecified;

// ----------------------------------------------------------------------------
// order

/** Value: "AFFECTED_USERS_DESC" */
FOUNDATION_EXTERN NSString * const kGTLRClouderrorreportingOrderAffectedUsersDesc;
/** Value: "COUNT_DESC" */
FOUNDATION_EXTERN NSString * const kGTLRClouderrorreportingOrderCountDesc;
/** Value: "CREATED_DESC" */
FOUNDATION_EXTERN NSString * const kGTLRClouderrorreportingOrderCreatedDesc;
/** Value: "GROUP_ORDER_UNSPECIFIED" */
FOUNDATION_EXTERN NSString * const kGTLRClouderrorreportingOrderGroupOrderUnspecified;
/** Value: "LAST_SEEN_DESC" */
FOUNDATION_EXTERN NSString * const kGTLRClouderrorreportingOrderLastSeenDesc;

// ----------------------------------------------------------------------------
// timeRangePeriod

/** Value: "PERIOD_1_DAY" */
FOUNDATION_EXTERN NSString * const kGTLRClouderrorreportingTimeRangePeriodPeriod1Day;
/** Value: "PERIOD_1_HOUR" */
FOUNDATION_EXTERN NSString * const kGTLRClouderrorreportingTimeRangePeriodPeriod1Hour;
/** Value: "PERIOD_1_WEEK" */
FOUNDATION_EXTERN NSString * const kGTLRClouderrorreportingTimeRangePeriodPeriod1Week;
/** Value: "PERIOD_30_DAYS" */
FOUNDATION_EXTERN NSString * const kGTLRClouderrorreportingTimeRangePeriodPeriod30Days;
/** Value: "PERIOD_6_HOURS" */
FOUNDATION_EXTERN NSString * const kGTLRClouderrorreportingTimeRangePeriodPeriod6Hours;
/** Value: "PERIOD_UNSPECIFIED" */
FOUNDATION_EXTERN NSString * const kGTLRClouderrorreportingTimeRangePeriodPeriodUnspecified;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Clouderrorreporting query classes.
 */
@interface GTLRClouderrorreportingQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Deletes all error events of a given project.
 *
 *  Method: clouderrorreporting.projects.deleteEvents
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeClouderrorreportingCloudPlatform
 */
@interface GTLRClouderrorreportingQuery_ProjectsDeleteEvents : GTLRClouderrorreportingQuery
// Previous library name was
//   +[GTLQueryClouderrorreporting queryForProjectsDeleteEventsWithprojectName:]

/**
 *  Required. The resource name of the Google Cloud Platform project. Written
 *  as `projects/{projectID}`, where `{projectID}` is the
 *  [Google Cloud Platform project
 *  ID](https://support.google.com/cloud/answer/6158840).
 *  Example: `projects/my-project-123`.
 */
@property(nonatomic, copy, nullable) NSString *projectName;

/**
 *  Fetches a @c GTLRClouderrorreporting_DeleteEventsResponse.
 *
 *  Deletes all error events of a given project.
 *
 *  @param projectName Required. The resource name of the Google Cloud Platform
 *    project. Written
 *    as `projects/{projectID}`, where `{projectID}` is the
 *    [Google Cloud Platform project
 *    ID](https://support.google.com/cloud/answer/6158840).
 *    Example: `projects/my-project-123`.
 *
 *  @return GTLRClouderrorreportingQuery_ProjectsDeleteEvents
 */
+ (instancetype)queryWithProjectName:(NSString *)projectName;

@end

/**
 *  Lists the specified events.
 *
 *  Method: clouderrorreporting.projects.events.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeClouderrorreportingCloudPlatform
 */
@interface GTLRClouderrorreportingQuery_ProjectsEventsList : GTLRClouderrorreportingQuery
// Previous library name was
//   +[GTLQueryClouderrorreporting queryForProjectsEventsListWithprojectName:]

/** Required. The group for which events shall be returned. */
@property(nonatomic, copy, nullable) NSString *groupId;

/** Optional. The maximum number of results to return per response. */
@property(nonatomic, assign) NSInteger pageSize;

/** Optional. A `next_page_token` provided by a previous response. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The resource name of the Google Cloud Platform project. Written
 *  as `projects/{projectID}`, where `{projectID}` is the
 *  [Google Cloud Platform project
 *  ID](https://support.google.com/cloud/answer/6158840).
 *  Example: `projects/my-project-123`.
 */
@property(nonatomic, copy, nullable) NSString *projectName;

/**
 *  Optional. The exact value to match against
 *  [`ServiceContext.resource_type`](/error-reporting/reference/rest/v1beta1/ServiceContext#FIELDS.resource_type).
 */
@property(nonatomic, copy, nullable) NSString *serviceFilterResourceType;

/**
 *  Optional. The exact value to match against
 *  [`ServiceContext.service`](/error-reporting/reference/rest/v1beta1/ServiceContext#FIELDS.service).
 */
@property(nonatomic, copy, nullable) NSString *serviceFilterService;

/**
 *  Optional. The exact value to match against
 *  [`ServiceContext.version`](/error-reporting/reference/rest/v1beta1/ServiceContext#FIELDS.version).
 */
@property(nonatomic, copy, nullable) NSString *serviceFilterVersion;

/**
 *  Restricts the query to the specified time range.
 *
 *  Likely values:
 *    @arg @c kGTLRClouderrorreportingTimeRangePeriodPeriodUnspecified Value
 *        "PERIOD_UNSPECIFIED"
 *    @arg @c kGTLRClouderrorreportingTimeRangePeriodPeriod1Hour Value
 *        "PERIOD_1_HOUR"
 *    @arg @c kGTLRClouderrorreportingTimeRangePeriodPeriod6Hours Value
 *        "PERIOD_6_HOURS"
 *    @arg @c kGTLRClouderrorreportingTimeRangePeriodPeriod1Day Value
 *        "PERIOD_1_DAY"
 *    @arg @c kGTLRClouderrorreportingTimeRangePeriodPeriod1Week Value
 *        "PERIOD_1_WEEK"
 *    @arg @c kGTLRClouderrorreportingTimeRangePeriodPeriod30Days Value
 *        "PERIOD_30_DAYS"
 */
@property(nonatomic, copy, nullable) NSString *timeRangePeriod;

/**
 *  Fetches a @c GTLRClouderrorreporting_ListEventsResponse.
 *
 *  Lists the specified events.
 *
 *  @param projectName Required. The resource name of the Google Cloud Platform
 *    project. Written
 *    as `projects/{projectID}`, where `{projectID}` is the
 *    [Google Cloud Platform project
 *    ID](https://support.google.com/cloud/answer/6158840).
 *    Example: `projects/my-project-123`.
 *
 *  @return GTLRClouderrorreportingQuery_ProjectsEventsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProjectName:(NSString *)projectName;

@end

/**
 *  Report an individual error event.
 *  This endpoint accepts **either** an OAuth token,
 *  **or** an [API key](https://support.google.com/cloud/answer/6158862)
 *  for authentication. To use an API key, append it to the URL as the value of
 *  a `key` parameter. For example:
 *  `POST
 *  https://clouderrorreporting.googleapis.com/v1beta1/{projectName}/events:report?key=123ABC456`
 *
 *  Method: clouderrorreporting.projects.events.report
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeClouderrorreportingCloudPlatform
 */
@interface GTLRClouderrorreportingQuery_ProjectsEventsReport : GTLRClouderrorreportingQuery
// Previous library name was
//   +[GTLQueryClouderrorreporting queryForProjectsEventsReportWithObject:projectName:]

/**
 *  Required. The resource name of the Google Cloud Platform project. Written
 *  as `projects/{projectId}`, where `{projectId}` is the
 *  [Google Cloud Platform project
 *  ID](https://support.google.com/cloud/answer/6158840).
 *  Example: // `projects/my-project-123`.
 */
@property(nonatomic, copy, nullable) NSString *projectName;

/**
 *  Fetches a @c GTLRClouderrorreporting_ReportErrorEventResponse.
 *
 *  Report an individual error event.
 *  This endpoint accepts **either** an OAuth token,
 *  **or** an [API key](https://support.google.com/cloud/answer/6158862)
 *  for authentication. To use an API key, append it to the URL as the value of
 *  a `key` parameter. For example:
 *  `POST
 *  https://clouderrorreporting.googleapis.com/v1beta1/{projectName}/events:report?key=123ABC456`
 *
 *  @param object The @c GTLRClouderrorreporting_ReportedErrorEvent to include
 *    in the query.
 *  @param projectName Required. The resource name of the Google Cloud Platform
 *    project. Written
 *    as `projects/{projectId}`, where `{projectId}` is the
 *    [Google Cloud Platform project
 *    ID](https://support.google.com/cloud/answer/6158840).
 *    Example: // `projects/my-project-123`.
 *
 *  @return GTLRClouderrorreportingQuery_ProjectsEventsReport
 */
+ (instancetype)queryWithObject:(GTLRClouderrorreporting_ReportedErrorEvent *)object
                    projectName:(NSString *)projectName;

@end

/**
 *  Get the specified group.
 *
 *  Method: clouderrorreporting.projects.groups.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeClouderrorreportingCloudPlatform
 */
@interface GTLRClouderrorreportingQuery_ProjectsGroupsGet : GTLRClouderrorreportingQuery
// Previous library name was
//   +[GTLQueryClouderrorreporting queryForProjectsGroupsGetWithgroupName:]

/**
 *  Required. The group resource name. Written as
 *  `projects/{projectID}/groups/{group_name}`. Call
 *  [`groupStats.list`](https://cloud.google.com/error-reporting/reference/rest/v1beta1/projects.groupStats/list)
 *  to return a list of groups belonging to this project.
 *  Example: `projects/my-project-123/groups/my-group`
 */
@property(nonatomic, copy, nullable) NSString *groupName;

/**
 *  Fetches a @c GTLRClouderrorreporting_ErrorGroup.
 *
 *  Get the specified group.
 *
 *  @param groupName Required. The group resource name. Written as
 *    `projects/{projectID}/groups/{group_name}`. Call
 *    [`groupStats.list`](https://cloud.google.com/error-reporting/reference/rest/v1beta1/projects.groupStats/list)
 *    to return a list of groups belonging to this project.
 *    Example: `projects/my-project-123/groups/my-group`
 *
 *  @return GTLRClouderrorreportingQuery_ProjectsGroupsGet
 */
+ (instancetype)queryWithGroupName:(NSString *)groupName;

@end

/**
 *  Lists the specified groups.
 *
 *  Method: clouderrorreporting.projects.groupStats.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeClouderrorreportingCloudPlatform
 */
@interface GTLRClouderrorreportingQuery_ProjectsGroupStatsList : GTLRClouderrorreportingQuery
// Previous library name was
//   +[GTLQueryClouderrorreporting queryForProjectsGroupStatsListWithprojectName:]

/**
 *  Optional. The alignment of the timed counts to be returned.
 *  Default is `ALIGNMENT_EQUAL_AT_END`.
 *
 *  Likely values:
 *    @arg @c kGTLRClouderrorreportingAlignmentErrorCountAlignmentUnspecified
 *        Value "ERROR_COUNT_ALIGNMENT_UNSPECIFIED"
 *    @arg @c kGTLRClouderrorreportingAlignmentAlignmentEqualRounded Value
 *        "ALIGNMENT_EQUAL_ROUNDED"
 *    @arg @c kGTLRClouderrorreportingAlignmentAlignmentEqualAtEnd Value
 *        "ALIGNMENT_EQUAL_AT_END"
 */
@property(nonatomic, copy, nullable) NSString *alignment;

/**
 *  Optional. Time where the timed counts shall be aligned if rounded
 *  alignment is chosen. Default is 00:00 UTC.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *alignmentTime;

/** Optional. List all <code>ErrorGroupStats</code> with these IDs. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *groupId;

/**
 *  Optional. The sort order in which the results are returned.
 *  Default is `COUNT_DESC`.
 *
 *  Likely values:
 *    @arg @c kGTLRClouderrorreportingOrderGroupOrderUnspecified Value
 *        "GROUP_ORDER_UNSPECIFIED"
 *    @arg @c kGTLRClouderrorreportingOrderCountDesc Value "COUNT_DESC"
 *    @arg @c kGTLRClouderrorreportingOrderLastSeenDesc Value "LAST_SEEN_DESC"
 *    @arg @c kGTLRClouderrorreportingOrderCreatedDesc Value "CREATED_DESC"
 *    @arg @c kGTLRClouderrorreportingOrderAffectedUsersDesc Value
 *        "AFFECTED_USERS_DESC"
 */
@property(nonatomic, copy, nullable) NSString *order;

/**
 *  Optional. The maximum number of results to return per response.
 *  Default is 20.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Optional. A `next_page_token` provided by a previous response. To view
 *  additional results, pass this token along with the identical query
 *  parameters as the first request.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The resource name of the Google Cloud Platform project. Written
 *  as `projects/{projectID}`, where `{projectID}` is the
 *  [Google Cloud Platform project
 *  ID](https://support.google.com/cloud/answer/6158840).
 *  Example: `projects/my-project-123`.
 */
@property(nonatomic, copy, nullable) NSString *projectName;

/**
 *  Optional. The exact value to match against
 *  [`ServiceContext.resource_type`](/error-reporting/reference/rest/v1beta1/ServiceContext#FIELDS.resource_type).
 */
@property(nonatomic, copy, nullable) NSString *serviceFilterResourceType;

/**
 *  Optional. The exact value to match against
 *  [`ServiceContext.service`](/error-reporting/reference/rest/v1beta1/ServiceContext#FIELDS.service).
 */
@property(nonatomic, copy, nullable) NSString *serviceFilterService;

/**
 *  Optional. The exact value to match against
 *  [`ServiceContext.version`](/error-reporting/reference/rest/v1beta1/ServiceContext#FIELDS.version).
 */
@property(nonatomic, copy, nullable) NSString *serviceFilterVersion;

/**
 *  Optional. The preferred duration for a single returned `TimedCount`.
 *  If not set, no timed counts are returned.
 */
@property(nonatomic, strong, nullable) GTLRDuration *timedCountDuration;

/**
 *  Restricts the query to the specified time range.
 *
 *  Likely values:
 *    @arg @c kGTLRClouderrorreportingTimeRangePeriodPeriodUnspecified Value
 *        "PERIOD_UNSPECIFIED"
 *    @arg @c kGTLRClouderrorreportingTimeRangePeriodPeriod1Hour Value
 *        "PERIOD_1_HOUR"
 *    @arg @c kGTLRClouderrorreportingTimeRangePeriodPeriod6Hours Value
 *        "PERIOD_6_HOURS"
 *    @arg @c kGTLRClouderrorreportingTimeRangePeriodPeriod1Day Value
 *        "PERIOD_1_DAY"
 *    @arg @c kGTLRClouderrorreportingTimeRangePeriodPeriod1Week Value
 *        "PERIOD_1_WEEK"
 *    @arg @c kGTLRClouderrorreportingTimeRangePeriodPeriod30Days Value
 *        "PERIOD_30_DAYS"
 */
@property(nonatomic, copy, nullable) NSString *timeRangePeriod;

/**
 *  Fetches a @c GTLRClouderrorreporting_ListGroupStatsResponse.
 *
 *  Lists the specified groups.
 *
 *  @param projectName Required. The resource name of the Google Cloud Platform
 *    project. Written
 *    as `projects/{projectID}`, where `{projectID}` is the
 *    [Google Cloud Platform project
 *    ID](https://support.google.com/cloud/answer/6158840).
 *    Example: `projects/my-project-123`.
 *
 *  @return GTLRClouderrorreportingQuery_ProjectsGroupStatsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProjectName:(NSString *)projectName;

@end

/**
 *  Replace the data for the specified group.
 *  Fails if the group does not exist.
 *
 *  Method: clouderrorreporting.projects.groups.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeClouderrorreportingCloudPlatform
 */
@interface GTLRClouderrorreportingQuery_ProjectsGroupsUpdate : GTLRClouderrorreportingQuery
// Previous library name was
//   +[GTLQueryClouderrorreporting queryForProjectsGroupsUpdateWithObject:name:]

/**
 *  The group resource name.
 *  Example: <code>projects/my-project-123/groups/CNSgkpnppqKCUw</code>
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRClouderrorreporting_ErrorGroup.
 *
 *  Replace the data for the specified group.
 *  Fails if the group does not exist.
 *
 *  @param object The @c GTLRClouderrorreporting_ErrorGroup to include in the
 *    query.
 *  @param name The group resource name.
 *    Example: <code>projects/my-project-123/groups/CNSgkpnppqKCUw</code>
 *
 *  @return GTLRClouderrorreportingQuery_ProjectsGroupsUpdate
 */
+ (instancetype)queryWithObject:(GTLRClouderrorreporting_ErrorGroup *)object
                           name:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
