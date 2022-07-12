// Generated from gen_events.py. DO NOT EDIT!
// source: structured.xml

#ifndef METRICS_STRUCTURED_STRUCTURED_EVENTS_H
#define METRICS_STRUCTURED_STRUCTURED_EVENTS_H

#include <cstdint>
#include <string>

#include "components/metrics/structured/enums.h"
#include "components/metrics/structured/event_base.h"

namespace metrics {
namespace structured {
namespace events {

namespace hindsight {

class CrOSActionEvent_FileOpened final : public ::metrics::structured::EventBase {
 public:
  CrOSActionEvent_FileOpened();
  ~CrOSActionEvent_FileOpened() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(6176288366907657397);
  static constexpr uint64_t kProjectNameHash = UINT64_C(16658867201751992801);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr IdScope kIdScope = IdScope::kPerProfile;
  static constexpr StructuredEventProto_EventType kEventType =
      StructuredEventProto_EventType_REGULAR;
  static constexpr int kKeyRotationPeriod =
      90;

  static constexpr uint64_t kFilenameNameHash = UINT64_C(1391895386658060561);
  CrOSActionEvent_FileOpened& SetFilename(const std::string& value);

  static constexpr uint64_t kOpenTypeNameHash = UINT64_C(10506272911216643482);
  CrOSActionEvent_FileOpened& SetOpenType(const int64_t value);

  static constexpr uint64_t kSequenceIdNameHash = UINT64_C(8860601784949375835);
  CrOSActionEvent_FileOpened& SetSequenceId(const int64_t value);

  static constexpr uint64_t kTimeSinceLastActionNameHash = UINT64_C(15150636701605912378);
  CrOSActionEvent_FileOpened& SetTimeSinceLastAction(const int64_t value);

};

class CrOSActionEvent_SearchResultLaunched final : public ::metrics::structured::EventBase {
 public:
  CrOSActionEvent_SearchResultLaunched();
  ~CrOSActionEvent_SearchResultLaunched() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(7258544623737125992);
  static constexpr uint64_t kProjectNameHash = UINT64_C(16658867201751992801);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr IdScope kIdScope = IdScope::kPerProfile;
  static constexpr StructuredEventProto_EventType kEventType =
      StructuredEventProto_EventType_REGULAR;
  static constexpr int kKeyRotationPeriod =
      90;

  static constexpr uint64_t kQueryNameHash = UINT64_C(7404398033256593499);
  CrOSActionEvent_SearchResultLaunched& SetQuery(const std::string& value);

  static constexpr uint64_t kResultTypeNameHash = UINT64_C(8293845286137751377);
  CrOSActionEvent_SearchResultLaunched& SetResultType(const int64_t value);

  static constexpr uint64_t kSearchResultIdNameHash = UINT64_C(8748164516837068211);
  CrOSActionEvent_SearchResultLaunched& SetSearchResultId(const std::string& value);

  static constexpr uint64_t kSequenceIdNameHash = UINT64_C(8860601784949375835);
  CrOSActionEvent_SearchResultLaunched& SetSequenceId(const int64_t value);

  static constexpr uint64_t kTimeSinceLastActionNameHash = UINT64_C(15150636701605912378);
  CrOSActionEvent_SearchResultLaunched& SetTimeSinceLastAction(const int64_t value);

};

class CrOSActionEvent_SettingChanged final : public ::metrics::structured::EventBase {
 public:
  CrOSActionEvent_SettingChanged();
  ~CrOSActionEvent_SettingChanged() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(15173432087155953262);
  static constexpr uint64_t kProjectNameHash = UINT64_C(16658867201751992801);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr IdScope kIdScope = IdScope::kPerProfile;
  static constexpr StructuredEventProto_EventType kEventType =
      StructuredEventProto_EventType_REGULAR;
  static constexpr int kKeyRotationPeriod =
      90;

  static constexpr uint64_t kCurrentValueNameHash = UINT64_C(4480604349707933716);
  CrOSActionEvent_SettingChanged& SetCurrentValue(const int64_t value);

  static constexpr uint64_t kPreviousValueNameHash = UINT64_C(12685882687934574180);
  CrOSActionEvent_SettingChanged& SetPreviousValue(const int64_t value);

  static constexpr uint64_t kSequenceIdNameHash = UINT64_C(8860601784949375835);
  CrOSActionEvent_SettingChanged& SetSequenceId(const int64_t value);

  static constexpr uint64_t kSettingIdNameHash = UINT64_C(8375811908993639483);
  CrOSActionEvent_SettingChanged& SetSettingId(const int64_t value);

  static constexpr uint64_t kSettingTypeNameHash = UINT64_C(211450250705861929);
  CrOSActionEvent_SettingChanged& SetSettingType(const int64_t value);

  static constexpr uint64_t kTimeSinceLastActionNameHash = UINT64_C(15150636701605912378);
  CrOSActionEvent_SettingChanged& SetTimeSinceLastAction(const int64_t value);

};

class CrOSActionEvent_TabEvent_TabNavigated final : public ::metrics::structured::EventBase {
 public:
  CrOSActionEvent_TabEvent_TabNavigated();
  ~CrOSActionEvent_TabEvent_TabNavigated() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(11495565264134779777);
  static constexpr uint64_t kProjectNameHash = UINT64_C(16658867201751992801);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr IdScope kIdScope = IdScope::kPerProfile;
  static constexpr StructuredEventProto_EventType kEventType =
      StructuredEventProto_EventType_REGULAR;
  static constexpr int kKeyRotationPeriod =
      90;

  static constexpr uint64_t kPageTransitionNameHash = UINT64_C(17736770626535281502);
  CrOSActionEvent_TabEvent_TabNavigated& SetPageTransition(const int64_t value);

  static constexpr uint64_t kSequenceIdNameHash = UINT64_C(8860601784949375835);
  CrOSActionEvent_TabEvent_TabNavigated& SetSequenceId(const int64_t value);

  static constexpr uint64_t kTimeSinceLastActionNameHash = UINT64_C(15150636701605912378);
  CrOSActionEvent_TabEvent_TabNavigated& SetTimeSinceLastAction(const int64_t value);

  static constexpr uint64_t kURLNameHash = UINT64_C(16623790803831280729);
  CrOSActionEvent_TabEvent_TabNavigated& SetURL(const std::string& value);

  static constexpr uint64_t kVisibilityNameHash = UINT64_C(1669047024429367828);
  CrOSActionEvent_TabEvent_TabNavigated& SetVisibility(const int64_t value);

};

class CrOSActionEvent_TabEvent_TabOpened final : public ::metrics::structured::EventBase {
 public:
  CrOSActionEvent_TabEvent_TabOpened();
  ~CrOSActionEvent_TabEvent_TabOpened() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(13824184328368382026);
  static constexpr uint64_t kProjectNameHash = UINT64_C(16658867201751992801);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr IdScope kIdScope = IdScope::kPerProfile;
  static constexpr StructuredEventProto_EventType kEventType =
      StructuredEventProto_EventType_REGULAR;
  static constexpr int kKeyRotationPeriod =
      90;

  static constexpr uint64_t kSequenceIdNameHash = UINT64_C(8860601784949375835);
  CrOSActionEvent_TabEvent_TabOpened& SetSequenceId(const int64_t value);

  static constexpr uint64_t kTimeSinceLastActionNameHash = UINT64_C(15150636701605912378);
  CrOSActionEvent_TabEvent_TabOpened& SetTimeSinceLastAction(const int64_t value);

  static constexpr uint64_t kURLNameHash = UINT64_C(16623790803831280729);
  CrOSActionEvent_TabEvent_TabOpened& SetURL(const std::string& value);

  static constexpr uint64_t kURLOpenedNameHash = UINT64_C(7878775340823931445);
  CrOSActionEvent_TabEvent_TabOpened& SetURLOpened(const std::string& value);

  static constexpr uint64_t kWindowOpenDispositionNameHash = UINT64_C(17804395139469765033);
  CrOSActionEvent_TabEvent_TabOpened& SetWindowOpenDisposition(const int64_t value);

};

class CrOSActionEvent_TabEvent_TabReactivated final : public ::metrics::structured::EventBase {
 public:
  CrOSActionEvent_TabEvent_TabReactivated();
  ~CrOSActionEvent_TabEvent_TabReactivated() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(1414982393805218127);
  static constexpr uint64_t kProjectNameHash = UINT64_C(16658867201751992801);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr IdScope kIdScope = IdScope::kPerProfile;
  static constexpr StructuredEventProto_EventType kEventType =
      StructuredEventProto_EventType_REGULAR;
  static constexpr int kKeyRotationPeriod =
      90;

  static constexpr uint64_t kSequenceIdNameHash = UINT64_C(8860601784949375835);
  CrOSActionEvent_TabEvent_TabReactivated& SetSequenceId(const int64_t value);

  static constexpr uint64_t kTimeSinceLastActionNameHash = UINT64_C(15150636701605912378);
  CrOSActionEvent_TabEvent_TabReactivated& SetTimeSinceLastAction(const int64_t value);

  static constexpr uint64_t kURLNameHash = UINT64_C(16623790803831280729);
  CrOSActionEvent_TabEvent_TabReactivated& SetURL(const std::string& value);

};

}  // namespace hindsight

namespace launcher_usage {

class LauncherUsage final : public ::metrics::structured::EventBase {
 public:
  LauncherUsage();
  ~LauncherUsage() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(338987758122020898);
  static constexpr uint64_t kProjectNameHash = UINT64_C(10270819838268357145);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr IdScope kIdScope = IdScope::kPerProfile;
  static constexpr StructuredEventProto_EventType kEventType =
      StructuredEventProto_EventType_REGULAR;
  static constexpr int kKeyRotationPeriod =
      90;

  static constexpr uint64_t kAppNameHash = UINT64_C(12431693315825569690);
  LauncherUsage& SetApp(const std::string& value);

  static constexpr uint64_t kDomainNameHash = UINT64_C(16926279638941368063);
  LauncherUsage& SetDomain(const std::string& value);

  static constexpr uint64_t kHourNameHash = UINT64_C(13068971801390763210);
  LauncherUsage& SetHour(const int64_t value);

  static constexpr uint64_t kProviderTypeNameHash = UINT64_C(15485758544594317646);
  LauncherUsage& SetProviderType(const int64_t value);

  static constexpr uint64_t kScoreNameHash = UINT64_C(6760243690594795363);
  LauncherUsage& SetScore(const int64_t value);

  static constexpr uint64_t kSearchQueryNameHash = UINT64_C(3417621012679571145);
  LauncherUsage& SetSearchQuery(const std::string& value);

  static constexpr uint64_t kSearchQueryLengthNameHash = UINT64_C(12117433152880007486);
  LauncherUsage& SetSearchQueryLength(const int64_t value);

  static constexpr uint64_t kTargetNameHash = UINT64_C(14130661245465482316);
  LauncherUsage& SetTarget(const std::string& value);

};

}  // namespace launcher_usage

namespace neutrino_devices {

class ClientIdChanged final : public ::metrics::structured::EventBase {
 public:
  ClientIdChanged();
  ~ClientIdChanged() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(2888140562247159830);
  static constexpr uint64_t kProjectNameHash = UINT64_C(1369821459961765830);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr IdScope kIdScope = IdScope::kPerDevice;
  static constexpr StructuredEventProto_EventType kEventType =
      StructuredEventProto_EventType_REGULAR;
  static constexpr int kKeyRotationPeriod =
      90;

  static constexpr uint64_t kInitialClientIdNameHash = UINT64_C(18368651781459629433);
  ClientIdChanged& SetInitialClientId(const std::string& value);

  static constexpr uint64_t kFinalClientIdNameHash = UINT64_C(13625814886334086921);
  ClientIdChanged& SetFinalClientId(const std::string& value);

  static constexpr uint64_t kLog2TimeSinceInstallationNameHash = UINT64_C(7029029478579911768);
  ClientIdChanged& SetLog2TimeSinceInstallation(const int64_t value);

  static constexpr uint64_t kLog2TimeSinceMetricsEnabledNameHash = UINT64_C(6436869382301622128);
  ClientIdChanged& SetLog2TimeSinceMetricsEnabled(const int64_t value);

  static constexpr uint64_t kLocationNameHash = UINT64_C(14869748323867449793);
  ClientIdChanged& SetLocation(const int64_t value);

  static constexpr uint64_t kDaysSinceKeyRotationNameHash = UINT64_C(6709138320168978679);
  ClientIdChanged& SetDaysSinceKeyRotation(const int64_t value);

};

class ClientIdCleared final : public ::metrics::structured::EventBase {
 public:
  ClientIdCleared();
  ~ClientIdCleared() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(570612858266007671);
  static constexpr uint64_t kProjectNameHash = UINT64_C(1369821459961765830);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr IdScope kIdScope = IdScope::kPerDevice;
  static constexpr StructuredEventProto_EventType kEventType =
      StructuredEventProto_EventType_REGULAR;
  static constexpr int kKeyRotationPeriod =
      90;

  static constexpr uint64_t kInitialClientIdNameHash = UINT64_C(18368651781459629433);
  ClientIdCleared& SetInitialClientId(const std::string& value);

  static constexpr uint64_t kLog2TimeSinceInstallationNameHash = UINT64_C(7029029478579911768);
  ClientIdCleared& SetLog2TimeSinceInstallation(const int64_t value);

  static constexpr uint64_t kLog2TimeSinceMetricsEnabledNameHash = UINT64_C(6436869382301622128);
  ClientIdCleared& SetLog2TimeSinceMetricsEnabled(const int64_t value);

};

class Enrollment final : public ::metrics::structured::EventBase {
 public:
  Enrollment();
  ~Enrollment() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(4371160630463553149);
  static constexpr uint64_t kProjectNameHash = UINT64_C(1369821459961765830);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr IdScope kIdScope = IdScope::kPerDevice;
  static constexpr StructuredEventProto_EventType kEventType =
      StructuredEventProto_EventType_REGULAR;
  static constexpr int kKeyRotationPeriod =
      90;

  static constexpr uint64_t kClientIdNameHash = UINT64_C(11665341722066567125);
  Enrollment& SetClientId(const std::string& value);

  static constexpr uint64_t kLocationNameHash = UINT64_C(14869748323867449793);
  Enrollment& SetLocation(const int64_t value);

  static constexpr uint64_t kIsManagedDeviceNameHash = UINT64_C(9235220770174068711);
  Enrollment& SetIsManagedDevice(const int64_t value);

  static constexpr uint64_t kIsManagedPolicyNameHash = UINT64_C(13392258382621385249);
  Enrollment& SetIsManagedPolicy(const int64_t value);

};

class CodePoint final : public ::metrics::structured::EventBase {
 public:
  CodePoint();
  ~CodePoint() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(17601339043824554108);
  static constexpr uint64_t kProjectNameHash = UINT64_C(1369821459961765830);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr IdScope kIdScope = IdScope::kPerDevice;
  static constexpr StructuredEventProto_EventType kEventType =
      StructuredEventProto_EventType_REGULAR;
  static constexpr int kKeyRotationPeriod =
      90;

  static constexpr uint64_t kClientIdNameHash = UINT64_C(11665341722066567125);
  CodePoint& SetClientId(const std::string& value);

  static constexpr uint64_t kLocationNameHash = UINT64_C(14869748323867449793);
  CodePoint& SetLocation(const int64_t value);

};

}  // namespace neutrino_devices

namespace structured_metrics {

class Initialization final : public ::metrics::structured::EventBase {
 public:
  Initialization();
  ~Initialization() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(17627823560409533063);
  static constexpr uint64_t kProjectNameHash = UINT64_C(12908457551569912491);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr IdScope kIdScope = IdScope::kPerDevice;
  static constexpr StructuredEventProto_EventType kEventType =
      StructuredEventProto_EventType_REGULAR;
  static constexpr int kKeyRotationPeriod =
      90;

  static constexpr uint64_t kPlatformNameHash = UINT64_C(4728558894243024398);
  Initialization& SetPlatform(const int64_t value);

};

}  // namespace structured_metrics

namespace test_project_one {

class TestEventOne final : public ::metrics::structured::EventBase {
 public:
  TestEventOne();
  ~TestEventOne() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(13593049295042080097);
  static constexpr uint64_t kProjectNameHash = UINT64_C(16881314472396226433);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr IdScope kIdScope = IdScope::kPerProfile;
  static constexpr StructuredEventProto_EventType kEventType =
      StructuredEventProto_EventType_REGULAR;
  static constexpr int kKeyRotationPeriod =
      90;

  static constexpr uint64_t kTestMetricOneNameHash = UINT64_C(637929385654885975);
  TestEventOne& SetTestMetricOne(const std::string& value);

  static constexpr uint64_t kTestMetricTwoNameHash = UINT64_C(14083999144141567134);
  TestEventOne& SetTestMetricTwo(const int64_t value);

};

}  // namespace test_project_one

namespace test_project_two {

class TestEventThree final : public ::metrics::structured::EventBase {
 public:
  TestEventThree();
  ~TestEventThree() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(5848687377041124372);
  static constexpr uint64_t kProjectNameHash = UINT64_C(5876808001962504629);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr IdScope kIdScope = IdScope::kPerProfile;
  static constexpr StructuredEventProto_EventType kEventType =
      StructuredEventProto_EventType_REGULAR;
  static constexpr int kKeyRotationPeriod =
      90;

  static constexpr uint64_t kTestMetricFourNameHash = UINT64_C(2917855408523247722);
  TestEventThree& SetTestMetricFour(const std::string& value);

};

class TestEventTwo final : public ::metrics::structured::EventBase {
 public:
  TestEventTwo();
  ~TestEventTwo() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(8995967733561999410);
  static constexpr uint64_t kProjectNameHash = UINT64_C(5876808001962504629);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr IdScope kIdScope = IdScope::kPerProfile;
  static constexpr StructuredEventProto_EventType kEventType =
      StructuredEventProto_EventType_REGULAR;
  static constexpr int kKeyRotationPeriod =
      90;

  static constexpr uint64_t kTestMetricThreeNameHash = UINT64_C(13469300759843809564);
  TestEventTwo& SetTestMetricThree(const std::string& value);

};

}  // namespace test_project_two

namespace test_project_three {

class TestEventFour final : public ::metrics::structured::EventBase {
 public:
  TestEventFour();
  ~TestEventFour() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(1718797808092246258);
  static constexpr uint64_t kProjectNameHash = UINT64_C(10860358748803291132);
  static constexpr IdType kIdType = IdType::kUmaId;
  static constexpr IdScope kIdScope = IdScope::kPerProfile;
  static constexpr StructuredEventProto_EventType kEventType =
      StructuredEventProto_EventType_REGULAR;
  static constexpr int kKeyRotationPeriod =
      90;

  static constexpr uint64_t kTestMetricFourNameHash = UINT64_C(2917855408523247722);
  TestEventFour& SetTestMetricFour(const int64_t value);

};

}  // namespace test_project_three

namespace test_project_four {

class TestEventFive final : public ::metrics::structured::EventBase {
 public:
  TestEventFive();
  ~TestEventFive() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(7045523601811399253);
  static constexpr uint64_t kProjectNameHash = UINT64_C(6801665881746546626);
  static constexpr IdType kIdType = IdType::kProjectId;
  static constexpr IdScope kIdScope = IdScope::kPerDevice;
  static constexpr StructuredEventProto_EventType kEventType =
      StructuredEventProto_EventType_REGULAR;
  static constexpr int kKeyRotationPeriod =
      90;

  static constexpr uint64_t kTestMetricFiveNameHash = UINT64_C(8665976921794972190);
  TestEventFive& SetTestMetricFive(const std::string& value);

};

}  // namespace test_project_four

namespace test_project_five {

class TestEventSix final : public ::metrics::structured::EventBase {
 public:
  TestEventSix();
  ~TestEventSix() override;

  static constexpr uint64_t kEventNameHash = UINT64_C(2873337042686447043);
  static constexpr uint64_t kProjectNameHash = UINT64_C(3960582687892677139);
  static constexpr IdType kIdType = IdType::kUnidentified;
  static constexpr IdScope kIdScope = IdScope::kPerProfile;
  static constexpr StructuredEventProto_EventType kEventType =
      StructuredEventProto_EventType_RAW_STRING;
  static constexpr int kKeyRotationPeriod =
      90;

  static constexpr uint64_t kTestMetricSixNameHash = UINT64_C(3431522567539822144);
  TestEventSix& SetTestMetricSix(const std::string& value);

};

}  // namespace test_project_five



}  // namespace events
}  // namespace structured
}  // namespace metrics

#endif  // METRICS_STRUCTURED_STRUCTURED_EVENTS_H