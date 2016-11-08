# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit from lt03lte device
$(call inherit-product, device/samsung/lt03lte/device.mk)

# Set those variables here to overwrite the inherited values.
PRODUCT_DEVICE := lt03lte
PRODUCT_NAME := full_lt03lte
PRODUCT_BRAND := samsung
PRODUCT_MODEL := Samsung Galaxy Tab 10.1 (2014) LTE
PRODUCT_MANUFACTURER := samsung
