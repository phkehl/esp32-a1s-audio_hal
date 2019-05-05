ifeq ($(findstring /xtensa-esp32-elf,$(PATH)),)
$(error Please add /path/to/xtensa-esp32-elf to your $$PATH)
endif

ifeq ($(ADF_PATH),)
$(error Please add IDF_PATH=/path/to/esp-adf to your environment)
endif

# doesn't seem to work for esp-adf... (works for esp-idf projects, and the components/audio_hal symlink wouldn't be necessary)
#EXTRA_COMPONENT_DIRS := ../

PROJECT_NAME := play_mp3
include $(ADF_PATH)/project.mk

