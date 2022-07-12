// Generated from gen_events.py. DO NOT EDIT!
// source: structured.xml

// #include "gen/components/metrics/structured/structured_events.h"
#include "components/metrics/structured/structured_events.h"

namespace metrics {
namespace structured {
namespace events {
namespace hindsight {

CrOSActionEvent_FileOpened::CrOSActionEvent_FileOpened() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash,
    kIdType, kIdScope, kEventType, kKeyRotationPeriod) {}
CrOSActionEvent_FileOpened::~CrOSActionEvent_FileOpened() = default;
CrOSActionEvent_FileOpened& CrOSActionEvent_FileOpened::SetFilename(const std::string& value) {
  AddHmacMetric(kFilenameNameHash, value);
  return *this;
}

CrOSActionEvent_FileOpened& CrOSActionEvent_FileOpened::SetOpenType(const int64_t value) {
  AddIntMetric(kOpenTypeNameHash, value);
  return *this;
}

CrOSActionEvent_FileOpened& CrOSActionEvent_FileOpened::SetSequenceId(const int64_t value) {
  AddIntMetric(kSequenceIdNameHash, value);
  return *this;
}

CrOSActionEvent_FileOpened& CrOSActionEvent_FileOpened::SetTimeSinceLastAction(const int64_t value) {
  AddIntMetric(kTimeSinceLastActionNameHash, value);
  return *this;
}

CrOSActionEvent_SearchResultLaunched::CrOSActionEvent_SearchResultLaunched() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash,
    kIdType, kIdScope, kEventType, kKeyRotationPeriod) {}
CrOSActionEvent_SearchResultLaunched::~CrOSActionEvent_SearchResultLaunched() = default;
CrOSActionEvent_SearchResultLaunched& CrOSActionEvent_SearchResultLaunched::SetQuery(const std::string& value) {
  AddHmacMetric(kQueryNameHash, value);
  return *this;
}

CrOSActionEvent_SearchResultLaunched& CrOSActionEvent_SearchResultLaunched::SetResultType(const int64_t value) {
  AddIntMetric(kResultTypeNameHash, value);
  return *this;
}

CrOSActionEvent_SearchResultLaunched& CrOSActionEvent_SearchResultLaunched::SetSearchResultId(const std::string& value) {
  AddHmacMetric(kSearchResultIdNameHash, value);
  return *this;
}

CrOSActionEvent_SearchResultLaunched& CrOSActionEvent_SearchResultLaunched::SetSequenceId(const int64_t value) {
  AddIntMetric(kSequenceIdNameHash, value);
  return *this;
}

CrOSActionEvent_SearchResultLaunched& CrOSActionEvent_SearchResultLaunched::SetTimeSinceLastAction(const int64_t value) {
  AddIntMetric(kTimeSinceLastActionNameHash, value);
  return *this;
}

CrOSActionEvent_SettingChanged::CrOSActionEvent_SettingChanged() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash,
    kIdType, kIdScope, kEventType, kKeyRotationPeriod) {}
CrOSActionEvent_SettingChanged::~CrOSActionEvent_SettingChanged() = default;
CrOSActionEvent_SettingChanged& CrOSActionEvent_SettingChanged::SetCurrentValue(const int64_t value) {
  AddIntMetric(kCurrentValueNameHash, value);
  return *this;
}

CrOSActionEvent_SettingChanged& CrOSActionEvent_SettingChanged::SetPreviousValue(const int64_t value) {
  AddIntMetric(kPreviousValueNameHash, value);
  return *this;
}

CrOSActionEvent_SettingChanged& CrOSActionEvent_SettingChanged::SetSequenceId(const int64_t value) {
  AddIntMetric(kSequenceIdNameHash, value);
  return *this;
}

CrOSActionEvent_SettingChanged& CrOSActionEvent_SettingChanged::SetSettingId(const int64_t value) {
  AddIntMetric(kSettingIdNameHash, value);
  return *this;
}

CrOSActionEvent_SettingChanged& CrOSActionEvent_SettingChanged::SetSettingType(const int64_t value) {
  AddIntMetric(kSettingTypeNameHash, value);
  return *this;
}

CrOSActionEvent_SettingChanged& CrOSActionEvent_SettingChanged::SetTimeSinceLastAction(const int64_t value) {
  AddIntMetric(kTimeSinceLastActionNameHash, value);
  return *this;
}

CrOSActionEvent_TabEvent_TabNavigated::CrOSActionEvent_TabEvent_TabNavigated() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash,
    kIdType, kIdScope, kEventType, kKeyRotationPeriod) {}
CrOSActionEvent_TabEvent_TabNavigated::~CrOSActionEvent_TabEvent_TabNavigated() = default;
CrOSActionEvent_TabEvent_TabNavigated& CrOSActionEvent_TabEvent_TabNavigated::SetPageTransition(const int64_t value) {
  AddIntMetric(kPageTransitionNameHash, value);
  return *this;
}

CrOSActionEvent_TabEvent_TabNavigated& CrOSActionEvent_TabEvent_TabNavigated::SetSequenceId(const int64_t value) {
  AddIntMetric(kSequenceIdNameHash, value);
  return *this;
}

CrOSActionEvent_TabEvent_TabNavigated& CrOSActionEvent_TabEvent_TabNavigated::SetTimeSinceLastAction(const int64_t value) {
  AddIntMetric(kTimeSinceLastActionNameHash, value);
  return *this;
}

CrOSActionEvent_TabEvent_TabNavigated& CrOSActionEvent_TabEvent_TabNavigated::SetURL(const std::string& value) {
  AddHmacMetric(kURLNameHash, value);
  return *this;
}

CrOSActionEvent_TabEvent_TabNavigated& CrOSActionEvent_TabEvent_TabNavigated::SetVisibility(const int64_t value) {
  AddIntMetric(kVisibilityNameHash, value);
  return *this;
}

CrOSActionEvent_TabEvent_TabOpened::CrOSActionEvent_TabEvent_TabOpened() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash,
    kIdType, kIdScope, kEventType, kKeyRotationPeriod) {}
CrOSActionEvent_TabEvent_TabOpened::~CrOSActionEvent_TabEvent_TabOpened() = default;
CrOSActionEvent_TabEvent_TabOpened& CrOSActionEvent_TabEvent_TabOpened::SetSequenceId(const int64_t value) {
  AddIntMetric(kSequenceIdNameHash, value);
  return *this;
}

CrOSActionEvent_TabEvent_TabOpened& CrOSActionEvent_TabEvent_TabOpened::SetTimeSinceLastAction(const int64_t value) {
  AddIntMetric(kTimeSinceLastActionNameHash, value);
  return *this;
}

CrOSActionEvent_TabEvent_TabOpened& CrOSActionEvent_TabEvent_TabOpened::SetURL(const std::string& value) {
  AddHmacMetric(kURLNameHash, value);
  return *this;
}

CrOSActionEvent_TabEvent_TabOpened& CrOSActionEvent_TabEvent_TabOpened::SetURLOpened(const std::string& value) {
  AddHmacMetric(kURLOpenedNameHash, value);
  return *this;
}

CrOSActionEvent_TabEvent_TabOpened& CrOSActionEvent_TabEvent_TabOpened::SetWindowOpenDisposition(const int64_t value) {
  AddIntMetric(kWindowOpenDispositionNameHash, value);
  return *this;
}

CrOSActionEvent_TabEvent_TabReactivated::CrOSActionEvent_TabEvent_TabReactivated() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash,
    kIdType, kIdScope, kEventType, kKeyRotationPeriod) {}
CrOSActionEvent_TabEvent_TabReactivated::~CrOSActionEvent_TabEvent_TabReactivated() = default;
CrOSActionEvent_TabEvent_TabReactivated& CrOSActionEvent_TabEvent_TabReactivated::SetSequenceId(const int64_t value) {
  AddIntMetric(kSequenceIdNameHash, value);
  return *this;
}

CrOSActionEvent_TabEvent_TabReactivated& CrOSActionEvent_TabEvent_TabReactivated::SetTimeSinceLastAction(const int64_t value) {
  AddIntMetric(kTimeSinceLastActionNameHash, value);
  return *this;
}

CrOSActionEvent_TabEvent_TabReactivated& CrOSActionEvent_TabEvent_TabReactivated::SetURL(const std::string& value) {
  AddHmacMetric(kURLNameHash, value);
  return *this;
}

}  // namespace hindsight

namespace launcher_usage {

LauncherUsage::LauncherUsage() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash,
    kIdType, kIdScope, kEventType, kKeyRotationPeriod) {}
LauncherUsage::~LauncherUsage() = default;
LauncherUsage& LauncherUsage::SetApp(const std::string& value) {
  AddHmacMetric(kAppNameHash, value);
  return *this;
}

LauncherUsage& LauncherUsage::SetDomain(const std::string& value) {
  AddHmacMetric(kDomainNameHash, value);
  return *this;
}

LauncherUsage& LauncherUsage::SetHour(const int64_t value) {
  AddIntMetric(kHourNameHash, value);
  return *this;
}

LauncherUsage& LauncherUsage::SetProviderType(const int64_t value) {
  AddIntMetric(kProviderTypeNameHash, value);
  return *this;
}

LauncherUsage& LauncherUsage::SetScore(const int64_t value) {
  AddIntMetric(kScoreNameHash, value);
  return *this;
}

LauncherUsage& LauncherUsage::SetSearchQuery(const std::string& value) {
  AddHmacMetric(kSearchQueryNameHash, value);
  return *this;
}

LauncherUsage& LauncherUsage::SetSearchQueryLength(const int64_t value) {
  AddIntMetric(kSearchQueryLengthNameHash, value);
  return *this;
}

LauncherUsage& LauncherUsage::SetTarget(const std::string& value) {
  AddHmacMetric(kTargetNameHash, value);
  return *this;
}

}  // namespace launcher_usage

namespace neutrino_devices {

ClientIdChanged::ClientIdChanged() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash,
    kIdType, kIdScope, kEventType, kKeyRotationPeriod) {}
ClientIdChanged::~ClientIdChanged() = default;
ClientIdChanged& ClientIdChanged::SetInitialClientId(const std::string& value) {
  AddHmacMetric(kInitialClientIdNameHash, value);
  return *this;
}

ClientIdChanged& ClientIdChanged::SetFinalClientId(const std::string& value) {
  AddHmacMetric(kFinalClientIdNameHash, value);
  return *this;
}

ClientIdChanged& ClientIdChanged::SetLog2TimeSinceInstallation(const int64_t value) {
  AddIntMetric(kLog2TimeSinceInstallationNameHash, value);
  return *this;
}

ClientIdChanged& ClientIdChanged::SetLog2TimeSinceMetricsEnabled(const int64_t value) {
  AddIntMetric(kLog2TimeSinceMetricsEnabledNameHash, value);
  return *this;
}

ClientIdChanged& ClientIdChanged::SetLocation(const int64_t value) {
  AddIntMetric(kLocationNameHash, value);
  return *this;
}

ClientIdChanged& ClientIdChanged::SetDaysSinceKeyRotation(const int64_t value) {
  AddIntMetric(kDaysSinceKeyRotationNameHash, value);
  return *this;
}

ClientIdCleared::ClientIdCleared() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash,
    kIdType, kIdScope, kEventType, kKeyRotationPeriod) {}
ClientIdCleared::~ClientIdCleared() = default;
ClientIdCleared& ClientIdCleared::SetInitialClientId(const std::string& value) {
  AddHmacMetric(kInitialClientIdNameHash, value);
  return *this;
}

ClientIdCleared& ClientIdCleared::SetLog2TimeSinceInstallation(const int64_t value) {
  AddIntMetric(kLog2TimeSinceInstallationNameHash, value);
  return *this;
}

ClientIdCleared& ClientIdCleared::SetLog2TimeSinceMetricsEnabled(const int64_t value) {
  AddIntMetric(kLog2TimeSinceMetricsEnabledNameHash, value);
  return *this;
}

Enrollment::Enrollment() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash,
    kIdType, kIdScope, kEventType, kKeyRotationPeriod) {}
Enrollment::~Enrollment() = default;
Enrollment& Enrollment::SetClientId(const std::string& value) {
  AddHmacMetric(kClientIdNameHash, value);
  return *this;
}

Enrollment& Enrollment::SetLocation(const int64_t value) {
  AddIntMetric(kLocationNameHash, value);
  return *this;
}

Enrollment& Enrollment::SetIsManagedDevice(const int64_t value) {
  AddIntMetric(kIsManagedDeviceNameHash, value);
  return *this;
}

Enrollment& Enrollment::SetIsManagedPolicy(const int64_t value) {
  AddIntMetric(kIsManagedPolicyNameHash, value);
  return *this;
}

CodePoint::CodePoint() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash,
    kIdType, kIdScope, kEventType, kKeyRotationPeriod) {}
CodePoint::~CodePoint() = default;
CodePoint& CodePoint::SetClientId(const std::string& value) {
  AddHmacMetric(kClientIdNameHash, value);
  return *this;
}

CodePoint& CodePoint::SetLocation(const int64_t value) {
  AddIntMetric(kLocationNameHash, value);
  return *this;
}

}  // namespace neutrino_devices

namespace structured_metrics {

Initialization::Initialization() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash,
    kIdType, kIdScope, kEventType, kKeyRotationPeriod) {}
Initialization::~Initialization() = default;
Initialization& Initialization::SetPlatform(const int64_t value) {
  AddIntMetric(kPlatformNameHash, value);
  return *this;
}

}  // namespace structured_metrics

namespace test_project_one {

TestEventOne::TestEventOne() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash,
    kIdType, kIdScope, kEventType, kKeyRotationPeriod) {}
TestEventOne::~TestEventOne() = default;
TestEventOne& TestEventOne::SetTestMetricOne(const std::string& value) {
  AddHmacMetric(kTestMetricOneNameHash, value);
  return *this;
}

TestEventOne& TestEventOne::SetTestMetricTwo(const int64_t value) {
  AddIntMetric(kTestMetricTwoNameHash, value);
  return *this;
}

}  // namespace test_project_one

namespace test_project_two {

TestEventThree::TestEventThree() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash,
    kIdType, kIdScope, kEventType, kKeyRotationPeriod) {}
TestEventThree::~TestEventThree() = default;
TestEventThree& TestEventThree::SetTestMetricFour(const std::string& value) {
  AddHmacMetric(kTestMetricFourNameHash, value);
  return *this;
}

TestEventTwo::TestEventTwo() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash,
    kIdType, kIdScope, kEventType, kKeyRotationPeriod) {}
TestEventTwo::~TestEventTwo() = default;
TestEventTwo& TestEventTwo::SetTestMetricThree(const std::string& value) {
  AddHmacMetric(kTestMetricThreeNameHash, value);
  return *this;
}

}  // namespace test_project_two

namespace test_project_three {

TestEventFour::TestEventFour() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash,
    kIdType, kIdScope, kEventType, kKeyRotationPeriod) {}
TestEventFour::~TestEventFour() = default;
TestEventFour& TestEventFour::SetTestMetricFour(const int64_t value) {
  AddIntMetric(kTestMetricFourNameHash, value);
  return *this;
}

}  // namespace test_project_three

namespace test_project_four {

TestEventFive::TestEventFive() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash,
    kIdType, kIdScope, kEventType, kKeyRotationPeriod) {}
TestEventFive::~TestEventFive() = default;
TestEventFive& TestEventFive::SetTestMetricFive(const std::string& value) {
  AddHmacMetric(kTestMetricFiveNameHash, value);
  return *this;
}

}  // namespace test_project_four

namespace test_project_five {

TestEventSix::TestEventSix() :
  ::metrics::structured::EventBase(kEventNameHash, kProjectNameHash,
    kIdType, kIdScope, kEventType, kKeyRotationPeriod) {}
TestEventSix::~TestEventSix() = default;
TestEventSix& TestEventSix::SetTestMetricSix(const std::string& value) {
  AddRawStringMetric(kTestMetricSixNameHash, value);
  return *this;
}

}  // namespace test_project_five


}  // namespace events
}  // namespace structured
}  // namespace metrics