/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * WidgetSettings.h
 * Copyright (C) 2011 Simon Newton
 */

#include "WProgram.h"

#ifndef WIDGET_SETTINGS_H
#define WIDGET_SETTINGS_H

/**
 * Manages reading & writing settings from EEPROM.
 */
class WidgetSettingsClass {
  public:
    WidgetSettingsClass() {}
    void Init();

    int StartAddress();
    void SetStartAddress(int start_address);

    int EstaId();
    void SetEstaId(int esta_id);
    // helper method to compare an array of bytes against the esta id
    bool MatchesEstaId(byte *data);

    long SerialNumber();
    void SetSerialNumber(long serial_number);
    // helper method to compare an array of bytes against the serial #
    bool MatchesSerialNumber(byte *data);

  private:
    static const byte MAGIC_NUMBER[];
    static const long DEFAULT_SERIAL_NUMBER;
};

extern WidgetSettingsClass WidgetSettings;
#endif  // USBPRO_SENDER_H
