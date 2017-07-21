$(call inherit-product, device/samsung/lt03lte/lt03lte.mk)

# Inherit some common CM stuff.
$(call inherit-product, vendor/omni/config/common_tablet.mk)

BOARD_VENDOR := samsung
PRODUCT_DEVICE := lt03lte
PRODUCT_NAME := omni_lt03lte
TARGET_VENDOR := samsung
