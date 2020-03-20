#
# Samsung Galaxy Note 10.1 (2014) LTE
#

# Art
PRODUCT_PROPERTY_OVERRIDES += \
	dalvik.vm.dex2oat-swap=false

# Audio
PRODUCT_PROPERTY_OVERRIDES += \
	af.fast_track_multiplier=1 \
	audio.deep_buffer.media=true \
	audio.offload.buffer.size.kb=32 \
	audio.offload.pcm.16bit.enable=true \
	audio.offload.pcm.24bit.enable=true \
	audio.offload.video=true \
	persist.vendor.audio.fluence.speaker=true \
	persist.vendor.audio.fluence.voicecall=true \
	persist.vendor.audio.fluence.voicerec=false \
	ro.vendor.audio.sdk.fluencetype=fluence \
	vendor.audio.offload.multiple.enabled=false \
	vendor.audio_hal.period_size=192 \
	vendor.dedicated.device.for.voip=true \
	vendor.voice.path.for.pcm.voip=false

# Camera
PRODUCT_PROPERTY_OVERRIDES += \
	camera2.portability.force_api=1

# Dalvik heap
PRODUCT_PROPERTY_OVERRIDES += \
	dalvik.vm.heapstartsize=16m \
	dalvik.vm.heapgrowthlimit=192m \
	dalvik.vm.heapsize=512m \
	dalvik.vm.heaptargetutilization=0.75 \
	dalvik.vm.heapminfree=2m \
	dalvik.vm.heapmaxfree=8m

# Display
PRODUCT_PROPERTY_OVERRIDES += \
	debug.hwui.use_buffer_age=false \
	debug.sf.enable_gl_backpressure=1 \
	debug.sf.latch_unsignaled=1 \
	persist.graphics.vulkan.disable=true

# GPS
PRODUCT_PROPERTY_OVERRIDES += \
	persist.gps.qc_nlp_in_use=0 \
	ro.gps.agps_provider=1 \
	ro.qc.sdk.izat.premium_enabled=0 \
	ro.qc.sdk.izat.service_mask=0x0

# Media
PRODUCT_PROPERTY_OVERRIDES += \
	persist.media.treble_omx=false \
	debug.stagefright.ccodec=0 \
	debug.stagefright.omx_default_rank.sw-audio=1 \
	debug.stagefright.omx_default_rank=0

# Memory optimizations
PRODUCT_PROPERTY_OVERRIDES += \
    ro.vendor.qti.am.reschedule_service=true \
    ro.vendor.qti.sys.fw.bservice_enable=true

# Perf
PRODUCT_PROPERTY_OVERRIDES += \
	ro.vendor.extension_library=/vendor/lib/libqti-perfd-client.so

# RIL
PRODUCT_PROPERTY_OVERRIDES += \
	persist.data.netmgrd.qos.enable=true \
	persist.data.qmi.adb_logmask=0 \
	persist.radio.add_power_save=1 \
	rild.libpath=/system/vendor/lib/libsec-ril.so \
	ro.ril.telephony.qan_resp_strings=6 \
	ro.telephony.mms_data_profile=5 \
	ro.telephony.default_network=9 \
	telephony.lteOnGsmDevice=1 \
	ro.telephony.call_ring.multiple=0 \
	ro.telephony.get_imsi_from_sim=true

# Sensors
PRODUCT_PROPERTY_OVERRIDES += \
	debug.sensors=1

# Tethering
PRODUCT_PROPERTY_OVERRIDES += \
	net.tethering.noprovisioning=true

# Vendor security patch level
PRODUCT_PROPERTY_OVERRIDES += \
	ro.lineage.build.vendor_security_patch=2017-04-01 \
	ro.control_privapp_permissions=disable

# Wifi
PRODUCT_PROPERTY_OVERRIDES += \
	wifi.interface=wlan0