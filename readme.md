# Maxipad88 Macropad

![maxipad88](https://github.com/ssianen/My-Macropad/blob/main/maxipad88.jpg)

The Maxipad88 is a simple macropad mapped to a 0-9 numpad, with arrow keys, backspace key, and return key. <br>
Currently, the RGB, OLED display, and rotary encoder are not supported; they do not work likely due to wiring issues. <br>
In this project, I got to explore aspects of electrical and mechanical engineering. Through the hands-on workshops, I developed skills in <br>
schematic and PCB design (KiCad), enclosure design (Autodesk Fusion), firmware programming (QMK), and soldering to build a custom macropad.

* Keyboard Maintainer: [ssianen](https://github.com/ssianen)
* Hardware Supported: Custom PCB

Make example for this keyboard (after setting up your build environment):

    make maxipad88:default

Flashing example for this keyboard:

    make maxipad88:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard.
* **Physical reset button**: Briefly press the button on Raspberry Pi Pico, located on the back of the PCB, then plug in the keyboard.
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available.
