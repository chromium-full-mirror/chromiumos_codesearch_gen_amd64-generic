// Automatic generation of D-Bus interfaces:
//  - org.chromium.CrosDns
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_AMD64_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CROSDNS_OUT_DEFAULT_GEN_INCLUDE_CROSDNS_DBUS_ADAPTORS_ORG_CHROMIUM_CROSDNS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_AMD64_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CROSDNS_OUT_DEFAULT_GEN_INCLUDE_CROSDNS_DBUS_ADAPTORS_ORG_CHROMIUM_CROSDNS_H
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

// Interface definition for org::chromium::CrosDns.
class CrosDnsInterface {
 public:
  virtual ~CrosDnsInterface() = default;

  // This method takes a hostname, IPv4 and IPv6 addresses and will set that
  // mapping in the name resolution service. Either IP address may be empty,
  // but not both. Currently only IPv4 is supported.
  virtual bool SetHostnameIpMapping(
      brillo::ErrorPtr* error,
      const std::string& in_hostname,
      const std::string& in_ipv4,
      const std::string& in_ipv6) = 0;
  // This method takes a hostname and will remove that mapping from the
  // name resolution service if it was previously set.
  virtual bool RemoveHostnameIpMapping(
      brillo::ErrorPtr* error,
      const std::string& in_hostname) = 0;
};

// Interface adaptor for org::chromium::CrosDns.
class CrosDnsAdaptor {
 public:
  CrosDnsAdaptor(CrosDnsInterface* interface) : interface_(interface) {}
  CrosDnsAdaptor(const CrosDnsAdaptor&) = delete;
  CrosDnsAdaptor& operator=(const CrosDnsAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.CrosDns");

    itf->AddSimpleMethodHandlerWithError(
        "SetHostnameIpMapping",
        base::Unretained(interface_),
        &CrosDnsInterface::SetHostnameIpMapping);
    itf->AddSimpleMethodHandlerWithError(
        "RemoveHostnameIpMapping",
        base::Unretained(interface_),
        &CrosDnsInterface::RemoveHostnameIpMapping);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/CrosDns"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.CrosDns\">\n"
        "    <method name=\"SetHostnameIpMapping\">\n"
        "      <arg name=\"hostname\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"ipv4\" type=\"s\" direction=\"in\"/>\n"
        "      <arg name=\"ipv6\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "    <method name=\"RemoveHostnameIpMapping\">\n"
        "      <arg name=\"hostname\" type=\"s\" direction=\"in\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  CrosDnsInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_AMD64_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CROSDNS_OUT_DEFAULT_GEN_INCLUDE_CROSDNS_DBUS_ADAPTORS_ORG_CHROMIUM_CROSDNS_H
