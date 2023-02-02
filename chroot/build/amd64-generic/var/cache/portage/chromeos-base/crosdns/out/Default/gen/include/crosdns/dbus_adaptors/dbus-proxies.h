// Automatic generation of D-Bus interfaces:
//  - org.chromium.CrosDns
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_AMD64_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CROSDNS_OUT_DEFAULT_GEN_INCLUDE_CROSDNS_DBUS_ADAPTORS_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_AMD64_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CROSDNS_OUT_DEFAULT_GEN_INCLUDE_CROSDNS_DBUS_ADAPTORS_DBUS_PROXIES_H
#include <memory>
#include <string>
#include <vector>

#include <base/files/scoped_file.h>
#include <base/functional/bind.h>
#include <base/functional/callback.h>
#include <base/logging.h>
#include <base/memory/ref_counted.h>
#include <brillo/any.h>
#include <brillo/dbus/dbus_method_invoker.h>
#include <brillo/dbus/dbus_property.h>
#include <brillo/dbus/dbus_signal_handler.h>
#include <brillo/dbus/file_descriptor.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <dbus/bus.h>
#include <dbus/message.h>
#include <dbus/object_manager.h>
#include <dbus/object_path.h>
#include <dbus/object_proxy.h>

namespace org {
namespace chromium {

// Abstract interface proxy for org::chromium::CrosDns.
class CrosDnsProxyInterface {
 public:
  virtual ~CrosDnsProxyInterface() = default;

  // This method takes a hostname, IPv4 and IPv6 addresses and will set that
  // mapping in the name resolution service. Either IP address may be empty,
  // but not both. Currently only IPv4 is supported.
  virtual bool SetHostnameIpMapping(
      const std::string& in_hostname,
      const std::string& in_ipv4,
      const std::string& in_ipv6,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // This method takes a hostname, IPv4 and IPv6 addresses and will set that
  // mapping in the name resolution service. Either IP address may be empty,
  // but not both. Currently only IPv4 is supported.
  virtual void SetHostnameIpMappingAsync(
      const std::string& in_hostname,
      const std::string& in_ipv4,
      const std::string& in_ipv6,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // This method takes a hostname and will remove that mapping from the
  // name resolution service if it was previously set.
  virtual bool RemoveHostnameIpMapping(
      const std::string& in_hostname,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  // This method takes a hostname and will remove that mapping from the
  // name resolution service if it was previously set.
  virtual void RemoveHostnameIpMappingAsync(
      const std::string& in_hostname,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::CrosDns.
class CrosDnsProxy final : public CrosDnsProxyInterface {
 public:
  CrosDnsProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  CrosDnsProxy(const CrosDnsProxy&) = delete;
  CrosDnsProxy& operator=(const CrosDnsProxy&) = delete;

  ~CrosDnsProxy() override {
  }

  void ReleaseObjectProxy(base::OnceClosure callback) {
    bus_->RemoveObjectProxy(service_name_, object_path_, std::move(callback));
  }

  const dbus::ObjectPath& GetObjectPath() const override {
    return object_path_;
  }

  dbus::ObjectProxy* GetObjectProxy() const override {
    return dbus_object_proxy_;
  }

  // This method takes a hostname, IPv4 and IPv6 addresses and will set that
  // mapping in the name resolution service. Either IP address may be empty,
  // but not both. Currently only IPv4 is supported.
  bool SetHostnameIpMapping(
      const std::string& in_hostname,
      const std::string& in_ipv4,
      const std::string& in_ipv6,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CrosDns",
        "SetHostnameIpMapping",
        error,
        in_hostname,
        in_ipv4,
        in_ipv6);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // This method takes a hostname, IPv4 and IPv6 addresses and will set that
  // mapping in the name resolution service. Either IP address may be empty,
  // but not both. Currently only IPv4 is supported.
  void SetHostnameIpMappingAsync(
      const std::string& in_hostname,
      const std::string& in_ipv4,
      const std::string& in_ipv6,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CrosDns",
        "SetHostnameIpMapping",
        std::move(success_callback),
        std::move(error_callback),
        in_hostname,
        in_ipv4,
        in_ipv6);
  }

  // This method takes a hostname and will remove that mapping from the
  // name resolution service if it was previously set.
  bool RemoveHostnameIpMapping(
      const std::string& in_hostname,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CrosDns",
        "RemoveHostnameIpMapping",
        error,
        in_hostname);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  // This method takes a hostname and will remove that mapping from the
  // name resolution service if it was previously set.
  void RemoveHostnameIpMappingAsync(
      const std::string& in_hostname,
      base::OnceCallback<void()> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.CrosDns",
        "RemoveHostnameIpMapping",
        std::move(success_callback),
        std::move(error_callback),
        in_hostname);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.CrosDns"};
  const dbus::ObjectPath object_path_{"/org/chromium/CrosDns"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_AMD64_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_CROSDNS_OUT_DEFAULT_GEN_INCLUDE_CROSDNS_DBUS_ADAPTORS_DBUS_PROXIES_H
