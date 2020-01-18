# esp-adf (esp-idf) audio_hal component for AI-Thinker's ESP32-A1S module (AC101 codec)

This is a *audio_hal* component for AI-Thinker's *ESP32-A1S* [1] module
respectively *ESP32 Audio Kit* [2]. The audio_hal component shipped with the
esp-adf [3] unfortunately doesn't provide any interface to add third-party
codec. This is based on AI-Thinker's code [4], which is an esp-adf fork with
modifications for this codec (AC101).

How to use:

Clone this repository into *components/audio_hal* of your esp-adf project:

```
cd /path/to/your/project
git clone https://github.com/phkehl/esp32-a1s-audio_hal.git components/audio_hal
```

Or add it as a git submodule:

```
cd /path/to/your/project
git submodule add -b master https://github.com/phkehl/esp32-a1s-audio_hal.git components/audio_hal
```

This will then take precedence over the one in *$ADF_PATH/components/audio_hal*.

The modifications to *audio_hal.h* and *audio_hal.h* are very minimal and
upgrading this with later versions of the esp-adf should be easy. There is one
additional function *esp_err_t audio_hal_pa_power(bool enable)* not present in
the original code. Use this to controls the power of the power amplifier on AI's
*ESP32 Audio Kit* board.

There is an example in the *example* subdirectory. Note the symlink
*example/components/audio_hal*.

Happy hacking!

References:
- [1] http://wiki.ai-thinker.com/esp32-a1s
- [2] http://wiki.ai-thinker.com/esp32-audio-kit
- [3] https://github.com/espressif/esp-adf
- [4] https://github.com/donny681/esp-adf
