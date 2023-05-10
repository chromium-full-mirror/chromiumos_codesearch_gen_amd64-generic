// Automatic generation of D-Bus interfaces:
//  - org.chromium.VmConcierge
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_AMD64_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_VM_HOST_TOOLS_OUT_DEFAULT_GEN_INCLUDE_VM_TOOLS_CONCIERGE_DBUS_ADAPTORS_ORG_CHROMIUM_VMCONCIERGE_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_AMD64_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_VM_HOST_TOOLS_OUT_DEFAULT_GEN_INCLUDE_VM_TOOLS_CONCIERGE_DBUS_ADAPTORS_ORG_CHROMIUM_VMCONCIERGE_H
#include <memory>
#include <string>
#include <tuple>
#include <vector>

#include <base/files/scoped_file.h>
#include <dbus/object_path.h>
#include <brillo/any.h>
#include <brillo/dbus/dbus_object.h>
#include <brillo/dbus/exported_object_manager.h>
#include <brillo/variant_dictionary.h>

namespace org {
namespace chromium {

// Interface definition for org::chromium::VmConcierge.
class VmConciergeInterface {
 public:
  virtual ~VmConciergeInterface() = default;

  // Adds group permission to directories created by mesa for a specified VM.
  virtual bool AddGroupPermissionMesa(
      brillo::ErrorPtr* error,
      const vm_tools::concierge::AddGroupPermissionMesaRequest& in_request) = 0;
  // Adjusts parameters of a given VM.
  virtual vm_tools::concierge::AdjustVmResponse AdjustVm(
      const vm_tools::concierge::AdjustVmRequest& in_request) = 0;
  // Inflate balloon in a vm until perceptible processes in the guest are
  // tried to kill.
  virtual void AggressiveBalloon(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<vm_tools::concierge::AggressiveBalloonResponse>> response,
      const vm_tools::concierge::AggressiveBalloonRequest& in_request) = 0;
  // Completes the boot of an ARCVM VM.
  virtual vm_tools::concierge::ArcVmCompleteBootResponse ArcVmCompleteBoot(
      const vm_tools::concierge::ArcVmCompleteBootRequest& in_request) = 0;
  // Attaches a USB device to a VM.
  virtual vm_tools::concierge::AttachUsbDeviceResponse AttachUsbDevice(
      const vm_tools::concierge::AttachUsbDeviceRequest& in_request,
      const base::ScopedFD& in_fd) = 0;
  // Cancels a disk image operation.
  virtual vm_tools::concierge::CancelDiskImageResponse CancelDiskImageOperation(
      const vm_tools::concierge::CancelDiskImageRequest& in_request) = 0;
  // Creates a disk image.
  virtual void CreateDiskImage(
      dbus::MethodCall* method_call,
      brillo::dbus_utils::ResponseSender sender) = 0;
  // Destroys a disk image.
  virtual vm_tools::concierge::DestroyDiskImageResponse DestroyDiskImage(
      const vm_tools::concierge::DestroyDiskImageRequest& in_request) = 0;
  // Detaches a USB device from a VM.
  virtual vm_tools::concierge::DetachUsbDeviceResponse DetachUsbDevice(
      const vm_tools::concierge::DetachUsbDeviceRequest& in_request) = 0;
  // Checks status of a disk image operation.
  virtual vm_tools::concierge::DiskImageStatusResponse DiskImageStatus(
      const vm_tools::concierge::DiskImageStatusRequest& in_request) = 0;
  // Exports a VM disk image.
  virtual void ExportDiskImage(
      dbus::MethodCall* method_call,
      brillo::dbus_utils::ResponseSender sender) = 0;
  // Gets DNS info.
  virtual vm_tools::concierge::DnsSettings GetDnsSettings() = 0;
  // Gets VM info specific to enterprise reporting.
  virtual vm_tools::concierge::GetVmEnterpriseReportingInfoResponse GetVmEnterpriseReportingInfo(
      const vm_tools::concierge::GetVmEnterpriseReportingInfoRequest& in_request) = 0;
  // Gets VM's GPU cache path.
  virtual bool GetVmGpuCachePath(
      brillo::ErrorPtr* error,
      const vm_tools::concierge::GetVmGpuCachePathRequest& in_request,
      vm_tools::concierge::GetVmGpuCachePathResponse* out_response) = 0;
  // Gets VM info.
  virtual vm_tools::concierge::GetVmInfoResponse GetVmInfo(
      const vm_tools::concierge::GetVmInfoRequest& in_request) = 0;
  // Get if allowed to launch VM.
  virtual vm_tools::concierge::GetVmLaunchAllowedResponse GetVmLaunchAllowed(
      const vm_tools::concierge::GetVmLaunchAllowedRequest& in_response) = 0;
  // Gets VM logs.
  virtual bool GetVmLogs(
      brillo::ErrorPtr* error,
      const vm_tools::concierge::GetVmLogsRequest& in_request,
      vm_tools::concierge::GetVmLogsResponse* out_response) = 0;
  // Imports a disk image.
  virtual vm_tools::concierge::ImportDiskImageResponse ImportDiskImage(
      const vm_tools::concierge::ImportDiskImageRequest& in_request,
      const base::ScopedFD& in_in_fd) = 0;
  // Installs the Pflash image associated with a VM.
  virtual vm_tools::concierge::InstallPflashResponse InstallPflash(
      const vm_tools::concierge::InstallPflashRequest& in_request,
      const base::ScopedFD& in_plash_src_fd) = 0;
  // Lists USB devices.
  virtual vm_tools::concierge::ListUsbDeviceResponse ListUsbDevices(
      const vm_tools::concierge::ListUsbDeviceRequest& in_request) = 0;
  // Lists existing disk images.
  virtual vm_tools::concierge::ListVmDisksResponse ListVmDisks(
      const vm_tools::concierge::ListVmDisksRequest& in_request) = 0;
  // Lists Vms.
  virtual vm_tools::concierge::ListVmsResponse ListVms(
      const vm_tools::concierge::ListVmsRequest& in_request) = 0;
  // Resizes a disk image. Can return asynchronously.
  virtual vm_tools::concierge::ResizeDiskImageResponse ResizeDiskImage(
      const vm_tools::concierge::ResizeDiskImageRequest& in_request) = 0;
  // Resumes a VM.
  virtual vm_tools::concierge::ResumeVmResponse ResumeVm(
      const vm_tools::concierge::ResumeVmRequest& in_request) = 0;
  // Updates balloon timer.
  virtual vm_tools::concierge::SetBalloonTimerResponse SetBalloonTimer(
      const vm_tools::concierge::SetBalloonTimerRequest& in_request) = 0;
  // Set VM's CPU restriction state.
  virtual vm_tools::concierge::SetVmCpuRestrictionResponse SetVmCpuRestriction(
      const vm_tools::concierge::SetVmCpuRestrictionRequest& in_request) = 0;
  // Stops VM.
  virtual vm_tools::concierge::StopVmResponse StopVm(
      const vm_tools::concierge::StopVmRequest& in_request) = 0;
  // Stops all running VMs.
  virtual void StopAllVms() = 0;
  // Suspends a VM.
  virtual vm_tools::concierge::SuspendVmResponse SuspendVm(
      const vm_tools::concierge::SuspendVmRequest& in_request) = 0;
  // Handles a request to change VM swap state.
  virtual vm_tools::concierge::SwapVmResponse SwapVm(
      const vm_tools::concierge::SwapVmRequest& in_request) = 0;
  // Updates all VMs' times to the current host time.
  virtual vm_tools::concierge::SyncVmTimesResponse SyncVmTimes() = 0;
};

// Interface adaptor for org::chromium::VmConcierge.
class VmConciergeAdaptor {
 public:
  VmConciergeAdaptor(VmConciergeInterface* interface) : interface_(interface) {}
  VmConciergeAdaptor(const VmConciergeAdaptor&) = delete;
  VmConciergeAdaptor& operator=(const VmConciergeAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.VmConcierge");

    itf->AddSimpleMethodHandlerWithError(
        "AddGroupPermissionMesa",
        base::Unretained(interface_),
        &VmConciergeInterface::AddGroupPermissionMesa);
    itf->AddSimpleMethodHandler(
        "AdjustVm",
        base::Unretained(interface_),
        &VmConciergeInterface::AdjustVm);
    itf->AddMethodHandler(
        "AggressiveBalloon",
        base::Unretained(interface_),
        &VmConciergeInterface::AggressiveBalloon);
    itf->AddSimpleMethodHandler(
        "ArcVmCompleteBoot",
        base::Unretained(interface_),
        &VmConciergeInterface::ArcVmCompleteBoot);
    itf->AddSimpleMethodHandler(
        "AttachUsbDevice",
        base::Unretained(interface_),
        &VmConciergeInterface::AttachUsbDevice);
    itf->AddSimpleMethodHandler(
        "CancelDiskImageOperation",
        base::Unretained(interface_),
        &VmConciergeInterface::CancelDiskImageOperation);
    itf->AddRawMethodHandler(
        "CreateDiskImage",
        base::Unretained(interface_),
        &VmConciergeInterface::CreateDiskImage);
    itf->AddSimpleMethodHandler(
        "DestroyDiskImage",
        base::Unretained(interface_),
        &VmConciergeInterface::DestroyDiskImage);
    itf->AddSimpleMethodHandler(
        "DetachUsbDevice",
        base::Unretained(interface_),
        &VmConciergeInterface::DetachUsbDevice);
    itf->AddSimpleMethodHandler(
        "DiskImageStatus",
        base::Unretained(interface_),
        &VmConciergeInterface::DiskImageStatus);
    itf->AddRawMethodHandler(
        "ExportDiskImage",
        base::Unretained(interface_),
        &VmConciergeInterface::ExportDiskImage);
    itf->AddSimpleMethodHandler(
        "GetDnsSettings",
        base::Unretained(interface_),
        &VmConciergeInterface::GetDnsSettings);
    itf->AddSimpleMethodHandler(
        "GetVmEnterpriseReportingInfo",
        base::Unretained(interface_),
        &VmConciergeInterface::GetVmEnterpriseReportingInfo);
    itf->AddSimpleMethodHandlerWithError(
        "GetVmGpuCachePath",
        base::Unretained(interface_),
        &VmConciergeInterface::GetVmGpuCachePath);
    itf->AddSimpleMethodHandler(
        "GetVmInfo",
        base::Unretained(interface_),
        &VmConciergeInterface::GetVmInfo);
    itf->AddSimpleMethodHandler(
        "GetVmLaunchAllowed",
        base::Unretained(interface_),
        &VmConciergeInterface::GetVmLaunchAllowed);
    itf->AddSimpleMethodHandlerWithError(
        "GetVmLogs",
        base::Unretained(interface_),
        &VmConciergeInterface::GetVmLogs);
    itf->AddSimpleMethodHandler(
        "ImportDiskImage",
        base::Unretained(interface_),
        &VmConciergeInterface::ImportDiskImage);
    itf->AddSimpleMethodHandler(
        "InstallPflash",
        base::Unretained(interface_),
        &VmConciergeInterface::InstallPflash);
    itf->AddSimpleMethodHandler(
        "ListUsbDevices",
        base::Unretained(interface_),
        &VmConciergeInterface::ListUsbDevices);
    itf->AddSimpleMethodHandler(
        "ListVmDisks",
        base::Unretained(interface_),
        &VmConciergeInterface::ListVmDisks);
    itf->AddSimpleMethodHandler(
        "ListVms",
        base::Unretained(interface_),
        &VmConciergeInterface::ListVms);
    itf->AddSimpleMethodHandler(
        "ResizeDiskImage",
        base::Unretained(interface_),
        &VmConciergeInterface::ResizeDiskImage);
    itf->AddSimpleMethodHandler(
        "ResumeVm",
        base::Unretained(interface_),
        &VmConciergeInterface::ResumeVm);
    itf->AddSimpleMethodHandler(
        "SetBalloonTimer",
        base::Unretained(interface_),
        &VmConciergeInterface::SetBalloonTimer);
    itf->AddSimpleMethodHandler(
        "SetVmCpuRestriction",
        base::Unretained(interface_),
        &VmConciergeInterface::SetVmCpuRestriction);
    itf->AddSimpleMethodHandler(
        "StopVm",
        base::Unretained(interface_),
        &VmConciergeInterface::StopVm);
    itf->AddSimpleMethodHandler(
        "StopAllVms",
        base::Unretained(interface_),
        &VmConciergeInterface::StopAllVms);
    itf->AddSimpleMethodHandler(
        "SuspendVm",
        base::Unretained(interface_),
        &VmConciergeInterface::SuspendVm);
    itf->AddSimpleMethodHandler(
        "SwapVm",
        base::Unretained(interface_),
        &VmConciergeInterface::SwapVm);
    itf->AddSimpleMethodHandler(
        "SyncVmTimes",
        base::Unretained(interface_),
        &VmConciergeInterface::SyncVmTimes);

    signal_DiskImageProgress_ = itf->RegisterSignalOfType<SignalDiskImageProgressType>("DiskImageProgress");
    signal_VmGuestUserlandReadySignal_ = itf->RegisterSignalOfType<SignalVmGuestUserlandReadySignalType>("VmGuestUserlandReadySignal");
    signal_DnsSettingsChanged_ = itf->RegisterSignalOfType<SignalDnsSettingsChangedType>("DnsSettingsChanged");
    signal_VmStartedSignal_ = itf->RegisterSignalOfType<SignalVmStartedSignalType>("VmStartedSignal");
    signal_VmStartingUpSignal_ = itf->RegisterSignalOfType<SignalVmStartingUpSignalType>("VmStartingUpSignal");
    signal_VmStoppedSignal_ = itf->RegisterSignalOfType<SignalVmStoppedSignalType>("VmStoppedSignal");
    signal_VmStoppingSignal_ = itf->RegisterSignalOfType<SignalVmStoppingSignalType>("VmStoppingSignal");
    signal_VmSwappingSignal_ = itf->RegisterSignalOfType<SignalVmSwappingSignalType>("VmSwappingSignal");
  }

  // Signaled by Concierge after an ImportDiskImage
  // call has been made and an update about the status of the import
  // is available.
  void SendDiskImageProgressSignal(
      const vm_tools::concierge::DiskImageStatusResponse& in_signal) {
    auto signal = signal_DiskImageProgress_.lock();
    if (signal)
      signal->Send(in_signal);
  }
  // Indicates VM started up and guest user space system application is ready
  // for communication. Useful for detecting when to stop boosting guest OS
  // for short-term boot performance.
  void SendVmGuestUserlandReadySignalSignal(
      const vm_tools::concierge::VmGuestUserlandReadySignal& in_signal) {
    auto signal = signal_VmGuestUserlandReadySignal_.lock();
    if (signal)
      signal->Send(in_signal);
  }
  // Signal to let Parallels dispatcher aware of DNS settings change.
  void SendDnsSettingsChangedSignal(
      const vm_tools::concierge::DnsSettings& in_signal) {
    auto signal = signal_DnsSettingsChanged_.lock();
    if (signal)
      signal->Send(in_signal);
  }
  // Indicates that the concierge successfully launched crosvm as its child
  // process. If you want guest userland state use VmGuestUserlandReadySignal.
  void SendVmStartedSignalSignal(
      const vm_tools::concierge::VmStartedSignal& in_signal) {
    auto signal = signal_VmStartedSignal_.lock();
    if (signal)
      signal->Send(in_signal);
  }
  // Indicates a new vm is starting so logging can be captured as early as
  // possible.
  void SendVmStartingUpSignalSignal(
      const vm_tools::concierge::ExtendedVmInfo& in_signal) {
    auto signal = signal_VmStartingUpSignal_.lock();
    if (signal)
      signal->Send(in_signal);
  }
  // Indicates VM is stopped.
  void SendVmStoppedSignalSignal(
      const vm_tools::concierge::VmStoppedSignal& in_signal) {
    auto signal = signal_VmStoppedSignal_.lock();
    if (signal)
      signal->Send(in_signal);
  }
  // Indicates VM is stopping.
  void SendVmStoppingSignalSignal(
      const vm_tools::concierge::VmStoppingSignal& in_signal) {
    auto signal = signal_VmStoppingSignal_.lock();
    if (signal)
      signal->Send(in_signal);
  }
  // Indicates a VM is starting memory swap out so the receiver can
  // expect the VM will experience a transitional jank.
  void SendVmSwappingSignalSignal(
      const vm_tools::concierge::VmSwappingSignal& in_signal) {
    auto signal = signal_VmSwappingSignal_.lock();
    if (signal)
      signal->Send(in_signal);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/VmConcierge"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.VmConcierge\">\n"
        "    <method name=\"AddGroupPermissionMesa\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"AdjustVm\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"AggressiveBalloon\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ArcVmCompleteBoot\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"AttachUsbDevice\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"fd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"CancelDiskImageOperation\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"CreateDiskImage\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"in_fd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"DestroyDiskImage\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"DetachUsbDevice\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"DiskImageStatus\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ExportDiskImage\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"storage_fd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"digest_fd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetDnsSettings\">\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetVmEnterpriseReportingInfo\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetVmGpuCachePath\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetVmInfo\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetVmLaunchAllowed\">\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetVmLogs\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ImportDiskImage\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"in_fd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"InstallPflash\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"plash_src_fd\" type=\"h\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ListUsbDevices\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ListVmDisks\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ListVms\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ResizeDiskImage\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"ResumeVm\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetBalloonTimer\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SetVmCpuRestriction\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"StopVm\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"StopAllVms\">\n"
        "    </method>\n"
        "    <method name=\"SuspendVm\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SwapVm\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"SyncVmTimes\">\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <signal name=\"DiskImageProgress\">\n"
        "      <arg name=\"signal\" type=\"ay\"/>\n"
        "    </signal>\n"
        "    <signal name=\"VmGuestUserlandReadySignal\">\n"
        "      <arg name=\"signal\" type=\"ay\"/>\n"
        "    </signal>\n"
        "    <signal name=\"DnsSettingsChanged\">\n"
        "      <arg name=\"signal\" type=\"ay\"/>\n"
        "    </signal>\n"
        "    <signal name=\"VmStartedSignal\">\n"
        "      <arg name=\"signal\" type=\"ay\"/>\n"
        "    </signal>\n"
        "    <signal name=\"VmStartingUpSignal\">\n"
        "      <arg name=\"signal\" type=\"ay\"/>\n"
        "    </signal>\n"
        "    <signal name=\"VmStoppedSignal\">\n"
        "      <arg name=\"signal\" type=\"ay\"/>\n"
        "    </signal>\n"
        "    <signal name=\"VmStoppingSignal\">\n"
        "      <arg name=\"signal\" type=\"ay\"/>\n"
        "    </signal>\n"
        "    <signal name=\"VmSwappingSignal\">\n"
        "      <arg name=\"signal\" type=\"ay\"/>\n"
        "    </signal>\n"
        "  </interface>\n";
  }

 private:
  using SignalDiskImageProgressType = brillo::dbus_utils::DBusSignal<
      vm_tools::concierge::DiskImageStatusResponse /*signal*/>;
  std::weak_ptr<SignalDiskImageProgressType> signal_DiskImageProgress_;

  using SignalVmGuestUserlandReadySignalType = brillo::dbus_utils::DBusSignal<
      vm_tools::concierge::VmGuestUserlandReadySignal /*signal*/>;
  std::weak_ptr<SignalVmGuestUserlandReadySignalType> signal_VmGuestUserlandReadySignal_;

  using SignalDnsSettingsChangedType = brillo::dbus_utils::DBusSignal<
      vm_tools::concierge::DnsSettings /*signal*/>;
  std::weak_ptr<SignalDnsSettingsChangedType> signal_DnsSettingsChanged_;

  using SignalVmStartedSignalType = brillo::dbus_utils::DBusSignal<
      vm_tools::concierge::VmStartedSignal /*signal*/>;
  std::weak_ptr<SignalVmStartedSignalType> signal_VmStartedSignal_;

  using SignalVmStartingUpSignalType = brillo::dbus_utils::DBusSignal<
      vm_tools::concierge::ExtendedVmInfo /*signal*/>;
  std::weak_ptr<SignalVmStartingUpSignalType> signal_VmStartingUpSignal_;

  using SignalVmStoppedSignalType = brillo::dbus_utils::DBusSignal<
      vm_tools::concierge::VmStoppedSignal /*signal*/>;
  std::weak_ptr<SignalVmStoppedSignalType> signal_VmStoppedSignal_;

  using SignalVmStoppingSignalType = brillo::dbus_utils::DBusSignal<
      vm_tools::concierge::VmStoppingSignal /*signal*/>;
  std::weak_ptr<SignalVmStoppingSignalType> signal_VmStoppingSignal_;

  using SignalVmSwappingSignalType = brillo::dbus_utils::DBusSignal<
      vm_tools::concierge::VmSwappingSignal /*signal*/>;
  std::weak_ptr<SignalVmSwappingSignalType> signal_VmSwappingSignal_;

  VmConciergeInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_AMD64_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_VM_HOST_TOOLS_OUT_DEFAULT_GEN_INCLUDE_VM_TOOLS_CONCIERGE_DBUS_ADAPTORS_ORG_CHROMIUM_VMCONCIERGE_H
