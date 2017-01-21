$(call inherit-product, device/samsung/lt03lte/lt03lte.mk)

# Inherit some common CM stuff.
$(call inherit-product, vendor/cm/config/common_full_phone.mk)

BOARD_VENDOR := samsung
PRODUCT_DEVICE := lt03lte
PRODUCT_NAME := lineage_lt03lte
TARGET_VENDOR := samsung
