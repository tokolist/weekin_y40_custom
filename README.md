# Custom Weekin-Y40 Firmware

This is custom firmware for Weekin-Y40 DIY keyboard. Author didn't provide QMK configuration source code which was limiting customization with only VIA capabilities. I developed custom firmware to get much more flexible customization through QMK configuration.

## Setup

### Prerequisites:

* Setup QMK environment according to guides provided on official website
* Optional: Install (or open web version of) VIA if you want to use both QMK and VIA customization

### Steps:

* Copy `weekin` directory to QMK `keyboards` directory
* Build with `qmk compile -kb weekin/y40 -km default` command. Alternatively, you can build Bongo Cat version with `qmk compile -kb weekin/y40 -km bongocat`, but VIA and RGB functions will be disabled due to limited MCU memory.
* Flash firmware from `.build` directory following instructions provided with Weekin-Y40 kit
* Optional: Load `weekin_y40_v3_custom.json` into VIA following instructions provided with Weekin-Y40 kit
* If everything went fine now you can make your own customization, rebuild and reflash QMK firmware

## Useful links

* Weekin files and instructions: https://drive.google.com/drive/folders/1bD-vkSpvNxJluQtI-UCH9j5VFVNjMyaC
* QMK environment setup guide: https://docs.qmk.fm/#/newbs_getting_started