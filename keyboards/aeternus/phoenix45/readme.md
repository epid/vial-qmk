# Phoenix45

![Phoenix45](https://i.imgur.com/xMyfiau.jpeg)

A compact 45% keyboard based on the [JD45](https://github.com/qmk/qmk_firmware/tree/master/keyboards/jd45).

* Keyboard Maintainer: [KnoblesseOblige](https://github.com/KnoblesseOblige)
* Hardware Supported: Phoenix45 PCB
* Hardware Availability: https://p3dstore.com/products/phoenix-pcb-only

Make example for this keyboard (after setting up your build environment):

    make phoenix45:default

There are pads on the bottom in case you'd like to add RGB leds for underglow.

![Phoenix45 RGB](https://i.imgur.com/JUQ0fiy.jpeg)

Make sure you edit rgb/config.h to specify the number of LEDs.

    #define RGBLED_NUM 13

To build the RGB version:

    make phoenix45/rgb:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
