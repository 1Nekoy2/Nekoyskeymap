EXTRAKEY_ENABLE = yes           # Audio control and System control
BACKLIGHT_ENABLE = no           # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no            # Enable WS2812 RGB underlight.
SPLIT_KEYBOARD = yes            
OLED_ENABLE= yes                # OLED display
WPM_ENABLE = yes                
LTO_ENABLE = yes                # Memory optimization

# If you want to change the display of OLED, you need to change here
SRC +=  ./lib/logo_reader.c \
