
/*
 * This file is auto-generated from a NativeModule spec file in js.
 *
 * This is a C++ Spec class that should be used with MakeTurboModuleProvider to register native modules
 * in a way that also verifies at compile time that the native module matches the interface required
 * by the TurboModule JS spec.
 */
#pragma once
// clang-format off

// #include "NativeConfigModuleDataTypes.g.h" before this file to use the generated type definition
#include <NativeModules.h>
#include <tuple>

namespace RNCConfigCodegen {

inline winrt::Microsoft::ReactNative::FieldMap GetStructInfo(ConfigModuleSpec_getConstants_returnType*) noexcept {
    winrt::Microsoft::ReactNative::FieldMap fieldMap {
        {L"constants", &ConfigModuleSpec_getConstants_returnType::constants},
    };
    return fieldMap;
}

struct ConfigModuleSpec : winrt::Microsoft::ReactNative::TurboModuleSpec {
  static constexpr auto methods = std::tuple{
      SyncMethod<ConfigModuleSpec_getConstants_returnType() noexcept>{0, L"getConstants"},
  };

  template <class TModule>
  static constexpr void ValidateModule() noexcept {
    constexpr auto methodCheckResults = CheckMethods<TModule, ConfigModuleSpec>();

    REACT_SHOW_METHOD_SPEC_ERRORS(
          0,
          "getConstants",
          "    REACT_SYNC_METHOD(GetConstants) ConfigModuleSpec_Constants getConstants() noexcept {/*implementation*/}\n"
          "    REACT_SYNC_METHOD(GetConstants) static ConfigModuleSpec_Constants getConstants() noexcept {/*implementation*/}\n");
  }
};

} // namespace RNCConfigCodegen
