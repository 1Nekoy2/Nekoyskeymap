EXTRAKEY_ENABLE = yes           # Audio control and System control
BACKLIGHT_ENABLE = no           # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no            # Enable WS2812 RGB underlight.
OLED_ENABLE= no                 # OLED display
LTO_ENABLE = yes                # memory optimization
OPT_DEFS += -DSIDE_$(SIDE)      # for if statement in config.h 

# If you want to change the display of OLED, you need to change here
SRC +=  ./lib/rgb_state_reader.c \
        ./lib/layer_state_reader.c \
        ./lib/logo_reader.c \
        ./lib/keylogger.c \
        # ./lib/mode_icon_reader.c \
        # ./lib/host_led_state_reader.c \
        # ./lib/timelogger.c \
