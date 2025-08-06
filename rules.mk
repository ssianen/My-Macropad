# rules.mk
# Rotary encoder setup
ENCODER_MAP_ENABLE = yes
ENCODER_ENABLE = yes

# WS2812 RGB LED setup
WS2812_DRIVER_REQUIRED = yes
RGBLIGHT_ENABLE = yes
WS2812_DRIVER = vendor

# OLED setup
OLED_ENABLE = yes
OLED_DRIVER = ssd1306
OLED_TRANSPORT = i2c

CONSOLE_ENABLE = yes

#For single key
#AUTO_SHIFT_ENABLE = yes

