# Inherit some common CM stuff.
$(call inherit-product, vendor/aosp/common.mk)

$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit from lt03lte device
$(call inherit-product, device/samsung/lt03lte/device.mk)

BOARD_VENDOR := samsung
PRODUCT_DEVICE := lt03lte
PRODUCT_NAME := aosp_lt03lte
TARGET_VENDOR := samsung
