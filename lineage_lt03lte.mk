$(call inherit-product, device/samsung/lt03lte/lt03lte.mk)

# Inherit some common Lineage stuff.
$(call inherit-product, vendor/lineage/config/common_full_phone.mk)

BOARD_VENDOR := samsung
PRODUCT_DEVICE := lt03lte
PRODUCT_NAME := lineage_lt03lte
TARGET_VENDOR := samsung


BUILD_FINGERPRINT := samsung/lt03ltexx/lt03lte:4.4.2/KOT49H/P605XXUDOB1:user/release-keys
