// Automatic generation of D-Bus interfaces:
//  - org.chromium.ManaTEEInterface
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_AMD64_GENERIC_TMP_PORTAGE_CHROMEOS_BASE_MANATEE_CLIENT_0_0_1_R292_WORK_BUILD_OUT_DEFAULT_GEN_INCLUDE_MANATEE_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_AMD64_GENERIC_TMP_PORTAGE_CHROMEOS_BASE_MANATEE_CLIENT_0_0_1_R292_WORK_BUILD_OUT_DEFAULT_GEN_INCLUDE_MANATEE_DBUS_PROXIES_H
#include <memory>
#include <string>
#include <vector>

#include <base/bind.h>
#include <base/callback.h>
#include <base/files/scoped_file.h>
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

// Abstract interface proxy for org::chromium::ManaTEEInterface.
class ManaTEEInterfaceProxyInterface {
 public:
  virtual ~ManaTEEInterfaceProxyInterface() = default;

  virtual bool StartTEEApplication(
      const std::string& in_app_id,
      const std::vector<std::string>& in_args,
      bool in_allow_unverified,
      int32_t* out_error_code,
      base::ScopedFD* out_fd_in,
      base::ScopedFD* out_fd_out,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StartTEEApplicationAsync(
      const std::string& in_app_id,
      const std::vector<std::string>& in_args,
      bool in_allow_unverified,
      base::OnceCallback<void(int32_t /*error_code*/, const base::ScopedFD& /*fd_in*/, const base::ScopedFD& /*fd_out*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SystemEvent(
      const std::string& in_event,
      std::string* out_error_msg,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SystemEventAsync(
      const std::string& in_event,
      base::OnceCallback<void(const std::string& /*error_msg*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetManateeMemoryServiceSocket(
      base::ScopedFD* out_fd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetManateeMemoryServiceSocketAsync(
      base::OnceCallback<void(const base::ScopedFD& /*fd*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::ManaTEEInterface.
class ManaTEEInterfaceProxy final : public ManaTEEInterfaceProxyInterface {
 public:
  ManaTEEInterfaceProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  ManaTEEInterfaceProxy(const ManaTEEInterfaceProxy&) = delete;
  ManaTEEInterfaceProxy& operator=(const ManaTEEInterfaceProxy&) = delete;

  ~ManaTEEInterfaceProxy() override {
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

  bool StartTEEApplication(
      const std::string& in_app_id,
      const std::vector<std::string>& in_args,
      bool in_allow_unverified,
      int32_t* out_error_code,
      base::ScopedFD* out_fd_in,
      base::ScopedFD* out_fd_out,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ManaTEEInterface",
        "StartTEEApplication",
        error,
        in_app_id,
        in_args,
        in_allow_unverified);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_error_code, out_fd_in, out_fd_out);
  }

  void StartTEEApplicationAsync(
      const std::string& in_app_id,
      const std::vector<std::string>& in_args,
      bool in_allow_unverified,
      base::OnceCallback<void(int32_t /*error_code*/, const base::ScopedFD& /*fd_in*/, const base::ScopedFD& /*fd_out*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ManaTEEInterface",
        "StartTEEApplication",
        std::move(success_callback),
        std::move(error_callback),
        in_app_id,
        in_args,
        in_allow_unverified);
  }

  bool SystemEvent(
      const std::string& in_event,
      std::string* out_error_msg,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ManaTEEInterface",
        "SystemEvent",
        error,
        in_event);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_error_msg);
  }

  void SystemEventAsync(
      const std::string& in_event,
      base::OnceCallback<void(const std::string& /*error_msg*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ManaTEEInterface",
        "SystemEvent",
        std::move(success_callback),
        std::move(error_callback),
        in_event);
  }

  bool GetManateeMemoryServiceSocket(
      base::ScopedFD* out_fd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ManaTEEInterface",
        "GetManateeMemoryServiceSocket",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_fd);
  }

  void GetManateeMemoryServiceSocketAsync(
      base::OnceCallback<void(const base::ScopedFD& /*fd*/)> success_callback,
      base::OnceCallback<void(brillo::Error*)> error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.ManaTEEInterface",
        "GetManateeMemoryServiceSocket",
        std::move(success_callback),
        std::move(error_callback));
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.ManaTEE"};
  const dbus::ObjectPath object_path_{"/org/chromium/ManaTEE1"};
  dbus::ObjectProxy* dbus_object_proxy_;

};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_AMD64_GENERIC_TMP_PORTAGE_CHROMEOS_BASE_MANATEE_CLIENT_0_0_1_R292_WORK_BUILD_OUT_DEFAULT_GEN_INCLUDE_MANATEE_DBUS_PROXIES_H
