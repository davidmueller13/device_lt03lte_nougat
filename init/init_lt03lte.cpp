/*
   Copyright (c) 2013, The Linux Foundation. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdlib.h>
#include <stdio.h>

#define _REALLY_INCLUDE_SYS__SYSTEM_PROPERTIES_H_
#include <sys/_system_properties.h>

#include "vendor_init.h"
#include "property_service.h"
#include "log.h"
#include "util.h"

#include "init_msm8974.h"

#define ISMATCH(a, b) (!strncmp((a), (b), PROP_VALUE_MAX))

void property_override(char const prop[], char const value[])
{
    prop_info *pi;

    pi = (prop_info*) __system_property_find(prop);
    if (pi)
        __system_property_update(pi, value, strlen(value));
    else
        __system_property_add(prop, strlen(prop), value, strlen(value));
}

void init_target_properties()
{
    std::string bootloader = property_get("ro.bootloader");

    if (bootloader == "P605M") {
        /* lt03ltecmo */
        property_override("ro.build.fingerprint", "samsung/lt03ltecmo/lt03lte:4.4.2/KOT49H/P605MUBUCNH1:user/release-keys");
        property_override("ro.build.description", "lt03lteusc-user 4.4.2 KOT49H P605MUBUCNH1 release-keys");
        property_override("ro.product.model", "SM-P605M");
        property_override("ro.product.device", "lt03ltecmo");
        property_override("ro.telephony.default_network", "9");
        property_override("ro.telephony.ril.v3", "newDialCode");
        property_override("telephony.lteOnGsmDevice", "1");
    } else if (bootloader == "P605S") {
        /* lt03ltesks */
        property_override("ro.build.fingerprint", "samsung/lt03ltesks/lt03lte:5.1.1/LMY47X/P605XXU1EOI5:user/release-keys");
        property_override("ro.build.description", "lt03lteusc-user 5.1.1 LMY47X P605XXU1EOI5 release-keys");
        property_override("ro.product.model", "SM-P605S");
        property_override("ro.product.device", "lt03ltesks");
        property_override("ro.telephony.default_network", "9");
        property_override("ro.telephony.ril.v3", "newDialCode");
        property_override("telephony.lteOnGsmDevice", "1");
    } else if (bootloader == "P605V") {
        /* lt03ltevzw */
        property_override("ro.build.fingerprint", "samsung/lt03ltevzw/lt03lte:5.1.1/LMY47X/P605VVRUDOH2:user/release-keys");
        property_override("ro.build.description", "lt03ltevzw-user 5.1.1 LMY47X P605VVRUDOH2 release-keys");
        property_override("ro.product.model", "SM-P605V");
        property_override("ro.product.device", "lt03ltevzw");
        property_override("ro.cdma.home.operator.alpha", "Verizon");
        property_override("ro.cdma.home.operator.numeric", "311480");
        property_override("ro.telephony.default_cdma_sub", "0"); // 0: RUIM/SIM  1: NV
        property_override("ro.telephony.default_network", "10");
        property_override("ro.telephony.ril.v3", "newDriverCallU,newDialCode");
        property_override("telephony.lteOnCdmaDevice", "1");

    } else if (bootloader == "P607T") {
        /* lt03ltetmo */
        property_override("ro.build.fingerprint", "samsung/lt03ltetmo/lt03ltetmo:5.1.1/LMY47X/P607TUVUBOI2:user/release-keys");
        property_override("ro.build.description", "lt03ltetmo-user 5.1.1 LMY47X P607TUVUBOI2 release-keys");
        property_override("ro.product.model", "SM-P607T");
        property_override("ro.product.device", "lt03ltetmo");
        property_override("ro.telephony.default_network", "9");
        property_override("ro.telephony.ril.v3", "newDialCode");
        property_override("telephony.lteOnGsmDevice", "1");
    } else {
        /* lt03ltexx */
        property_override("ro.build.fingerprint", "samsung/lt03ltexx/lt03lte:4.4.2/KOT49H/P605XXUDOB1:user/release-keys");
        property_override("ro.build.description", "lt03ltexx-user 4.4.2 KOT49H P605XXUDOB1 release-keys");
        property_override("ro.product.model", "SM-P605");
        property_override("ro.product.device", "lt03ltexx");
        property_override("ro.telephony.default_network", "9");
        property_override("ro.telephony.ril.v3", "newDialCode");
        property_override("telephony.lteOnGsmDevice", "1");
    }
    std::string device = property_get("ro.product.device");
    ERROR("Found bootloader id %s setting build properties for %s device\n", bootloader.c_str(), device.c_str());
}
