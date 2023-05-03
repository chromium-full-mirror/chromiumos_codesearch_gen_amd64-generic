// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.ManaTEEInterface
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_AMD64_GENERIC_TMP_PORTAGE_CHROMEOS_BASE_MANATEE_CLIENT_0_0_1_R369_WORK_BUILD_OUT_DEFAULT_GEN_INCLUDE_MANATEE_DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_AMD64_GENERIC_TMP_PORTAGE_CHROMEOS_BASE_MANATEE_CLIENT_0_0_1_R369_WORK_BUILD_OUT_DEFAULT_GEN_INCLUDE_MANATEE_DBUS_PROXY_MOCKS_H
#include <string>
#include <vector>

#include <base/functional/callback_forward.h>
#include <base/logging.h>
#include <brillo/any.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <gmock/gmock.h>

#include "manatee/dbus-proxies.h"

namespace org {
namespace chromium {

// Mock object for ManaTEEInterfaceProxyInterface.
class ManaTEEInterfaceProxyMock : public ManaTEEInterfaceProxyInterface {
 public:
  ManaTEEInterfaceProxyMock() = default;
  ManaTEEInterfaceProxyMock(const ManaTEEInterfaceProxyMock&) = delete;
  ManaTEEInterfaceProxyMock& operator=(const ManaTEEInterfaceProxyMock&) = delete;

  MOCK_METHOD8(StartTEEApplication,
               bool(const std::string& /*in_app_id*/,
                    const std::vector<std::string>& /*in_args*/,
                    bool /*in_allow_unverified*/,
                    int32_t* /*out_error_code*/,
                    base::ScopedFD* /*out_fd_in*/,
                    base::ScopedFD* /*out_fd_out*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD6(StartTEEApplicationAsync,
               void(const std::string& /*in_app_id*/,
                    const std::vector<std::string>& /*in_args*/,
                    bool /*in_allow_unverified*/,
                    base::OnceCallback<void(int32_t /*error_code*/, const base::ScopedFD& /*fd_in*/, const base::ScopedFD& /*fd_out*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SystemEvent,
               bool(const std::string& /*in_event*/,
                    std::string* /*out_error_msg*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD4(SystemEventAsync,
               void(const std::string& /*in_event*/,
                    base::OnceCallback<void(const std::string& /*error_msg*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetManateeMemoryServiceSocket,
               bool(base::ScopedFD* /*out_fd*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetManateeMemoryServiceSocketAsync,
               void(base::OnceCallback<void(const base::ScopedFD& /*fd*/)> /*success_callback*/,
                    base::OnceCallback<void(brillo::Error*)> /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());
};
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_AMD64_GENERIC_TMP_PORTAGE_CHROMEOS_BASE_MANATEE_CLIENT_0_0_1_R369_WORK_BUILD_OUT_DEFAULT_GEN_INCLUDE_MANATEE_DBUS_PROXY_MOCKS_H
