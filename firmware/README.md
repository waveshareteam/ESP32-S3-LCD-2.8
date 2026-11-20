# ESP32-S3-LCD-2.8 Factory Firmware

[简体中文](README_ZH.md)

| File | Purpose |
| --- | --- |
| [`ESP32-S3-LCD-2.8_FactoryOnly_20261120.bin`](ESP32-S3-LCD-2.8_FactoryOnly_20261120.bin) | Tests the onboard functions of the ESP32-S3-LCD-2.8 (SKU 30223). |

The [official example package](https://files.waveshare.com/wiki/ESP32-S3-LCD-2.8/ESP32-S3-LCD-2.8-Demo.zip) includes the test image, Arduino source under `Arduino/examples/LVGL_Arduino/`, and dependencies under `Arduino/libraries/`.

Connect the board with a USB data cable. Open a terminal in this directory, use esptool 5 or later, and replace `PORT` with the board's serial port. Back up your data before erasing the entire flash, which clears the firmware, settings, and user data.

```sh
python -m esptool --chip esp32s3 --port PORT erase-flash
python -m esptool --chip esp32s3 --port PORT write-flash 0x0 ESP32-S3-LCD-2.8_FactoryOnly_20261120.bin
```

Reset the board and confirm that the test program starts. For graphical flashing tools, see the [official flashing guide](https://docs.waveshare.com/ESP32-S3-LCD-2.8/Firmware-Flashing).
