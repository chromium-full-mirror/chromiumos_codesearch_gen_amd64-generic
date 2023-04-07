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

  // Stops VM.
  virtual vm_tools::concierge::StopVmResponse StopVm(
      const vm_tools::concierge::StopVmRequest& in_request) = 0;
  // Stops all running VMs.
  virtual void StopAllVms() = 0;
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

    itf->AddSimpleMethodHandler(
        "StopVm",
        base::Unretained(interface_),
        &VmConciergeInterface::StopVm);
    itf->AddSimpleMethodHandler(
        "StopAllVms",
        base::Unretained(interface_),
        &VmConciergeInterface::StopAllVms);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/VmConcierge"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.VmConcierge\">\n"
        "    <method name=\"StopVm\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"response\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"StopAllVms\">\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  VmConciergeInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_AMD64_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_VM_HOST_TOOLS_OUT_DEFAULT_GEN_INCLUDE_VM_TOOLS_CONCIERGE_DBUS_ADAPTORS_ORG_CHROMIUM_VMCONCIERGE_H
