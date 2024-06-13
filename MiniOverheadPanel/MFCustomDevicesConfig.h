#pragma once

// Define your input custom devices and uncomment -DHAS_CONFIG_IN_FLASH
// in your MFCustomDevice_platformio.ini
const char CustomDeviceConfig[] PROGMEM =
    {
        "10.12.13.14.2.ShiftRegister:1.0.Nose TO:1.1.Land Retract:1.2.Land On:"
        "1.3.Seatbelts Off:1.4.Seatbelts On:3.5.Backlight Brt:1.6.Smoking Off:"
        "1.7.Smoking On:1.8.Fuel Pump:1.9.APU Master:1.10.APU Start:1.11.APU Bleed:"
        "3.15.Annunciator Brt:1.16.Ext Pwr:1.17.Battery:1.18.Anti Ice:1.19.Ext Light Off:"
        "1.20.Ext Light On:1.21.Nose Off:1.22.ADIRS ATT:1.26.ADIRS NAV:1.27.ADIRS Off:1.28.Calls:"};
