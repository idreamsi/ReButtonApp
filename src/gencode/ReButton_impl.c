﻿/*******************************************************************************************
 * This code was automatically generated by Digital Twin Code Generator tool 0.6.1.
 *
 * You need to add your implementation here to:
 *    - get telemetry data from device/sensor
 *    - set read-only property data
 *    - handle read-write property callback
 *    - process device command
 *
 * Generated Date: 2019年9月2日
 *******************************************************************************************/

#include "ReButton_impl.h"
#include "utilities/digitaltwin_serializer.h"
#include "utilities/deviceinfo_interface.h"
#include "utilities/battery_interface.h"
#include "utilities/pushbutton_interface.h"
#include "utilities/temphumidsensor_interface.h"

#define Payload_Buffer_Size 256

// double TempHumidSensor_Telemetry_ReadTemperature()
// {
//     // TODO: provide implementation here
//     return 0.0;
// }

// double TempHumidSensor_Telemetry_ReadHumidity()
// {
//     // TODO: provide implementation here
//     return 0.0;
// }

void SendTelemetry_Succeeded_Callback(const char* interfaceName, const char* telemetryName)
{
    // If needed, put your business logic here to handle the confirmation of the delivery for device telemetry on success.

    LogInfo("DigitalTwin successfully delivered telemetry message for %s::%s", interfaceName, telemetryName);
}

void SendTelemetry_Error_Callback(const char* interfaceName, const char* telemetryName)
{
    // If needed, put your business logic here to handle the confirmation of the delivery for device telemetry on failure.

    LogInfo("DigitalTwin failed to deliver telemetry message for %s::%s", interfaceName, telemetryName);
}

void ReportProperty_Succeeded_Callback(const char* interfaceName, const char* propertyName)
{
    // If needed, put your business logic here to handle the result callback reporting property on success.

    LogInfo("DigitalTwin successfully report writable property for %s::%s", interfaceName, propertyName);
}

void ReportProperty_Error_Callback(const char* interfaceName, const char* propertyName)
{
    // If needed, put your business logic here to handle the result callback of reporting property on failure.

    LogInfo("DigitalTwin failed to report writable property for %s::%s", interfaceName, propertyName);
}

char* DeviceInfo_Property_GetManufacturer()
{
    return "Seeed";
}

char* DeviceInfo_Property_GetModel()
{
    return "ReButton";
}

char* DeviceInfo_Property_GetSwVersion()
{
    return "2.0-TempHumid";
}

char* DeviceInfo_Property_GetOsName()
{
    return "Arduino+Mbed";
}

char* DeviceInfo_Property_GetProcessorArchitecture()
{
    return "EMW3166";
}

char* DeviceInfo_Property_GetProcessorManufacturer()
{
    return "MXCHIP";
}

long DeviceInfo_Property_GetTotalStorage()
{
    return 1024 * 1024;
}

long DeviceInfo_Property_GetTotalMemory()
{
    return 256 * 1024;
}

volatile int ReButton_Digital_Twin_Work_Flag;


