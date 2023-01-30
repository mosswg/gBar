#pragma once
#include <string>
#include <vector>

class Config 
{
public:
    std::string cpuThermalZone = ""; // idk, no standard way of doing this.
    std::string suspendCommand = "systemctl suspend";
    std::string lockCommand = ""; // idk, no standard way of doing this.
    std::string exitCommand = ""; // idk, no standard way of doing this.
    std::string batteryFolder = ""; // this can be BAT0, BAT1, etc. Usually in /sys/class/power_supply
    std::vector<std::string> workspaceSymbols = std::vector<std::string>(9, "");
    std::string defaultWorkspaceSymbol = "";

    bool centerTime = true;

    static void Load(int = 0);
    static const Config& Get();
};
