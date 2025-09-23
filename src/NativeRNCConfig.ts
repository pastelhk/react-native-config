import type { TurboModule } from "react-native";
import { TurboModuleRegistry } from "react-native";

export interface Spec extends TurboModule {
  // Synchronous getters (supported on Windows TurboModules)
  getConstants(): { [key: string]: string };
}

export default TurboModuleRegistry.getEnforcing<Spec>("RNCConfigModule");
