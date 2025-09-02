# Maxipad8 Macropad

![maxipad8](https://github.com/ssianen/My-Macropad/blob/main/maxipad8.jpg)

The Maxipad8 is a simple macropad that features a 0-9 numpad, with arrow keys, a backspace key, and a return key. Currently, the RGB, OLED display, and rotary encoder are not supported; they do not work likely due to wiring issues. In this project, I explored aspects of electrical and mechanical engineering. Through the hands-on workshops offered by Women in Engineering, Science, and Technology (WEST) and Schneider Electric, I developed skills in schematic and PCB design (KiCad), enclosure design (Autodesk Fusion), firmware programming (QMK), and soldering to build a custom macropad.

* Keyboard Maintainer: [ssianen](https://github.com/ssianen)
* Hardware Supported: Custom PCB

Make example for this keyboard (after setting up your build environment):

    make maxipad8:default

Flashing example for this keyboard:

    make maxipad8:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard.
* **Physical reset button**: Briefly press the button on Raspberry Pi Pico, located on the back of the PCB, then plug in the keyboard.
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available.


Compile with command: 
```
qmk compile -kb maxipad8 -km default
```
Deploy by dragging .build/maxipad8_default.uf2 to Raspberry Pi Pico (RP1-RP2) in Finder / File Explorer. <br>
If successful, RP1-RP2 should disappear.

