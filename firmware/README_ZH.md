# ESP32-S3-LCD-2.8 出厂固件

[English](README.md)

| 文件 | 用途 |
| --- | --- |
| [`ESP32-S3-LCD-2.8_FactoryOnly_20261120.bin`](ESP32-S3-LCD-2.8_FactoryOnly_20261120.bin) | 测试 ESP32-S3-LCD-2.8（SKU 30223）的板载功能。 |

测试镜像及 Arduino 源码和依赖见[官方示例包](https://files.waveshare.com/wiki/ESP32-S3-LCD-2.8/ESP32-S3-LCD-2.8-Demo.zip)。工程位于包内的 `Arduino/examples/LVGL_Arduino/`，依赖位于 `Arduino/libraries/`。

使用 USB 数据线连接开发板。在本目录打开终端，使用 esptool 5 或更新版本，将 `PORT` 替换为开发板的串口。整片擦除 Flash 会清除设备中的固件、设置和用户数据，请先备份。

```sh
python -m esptool --chip esp32s3 --port PORT erase-flash
python -m esptool --chip esp32s3 --port PORT write-flash 0x0 ESP32-S3-LCD-2.8_FactoryOnly_20261120.bin
```

烧录完成后复位开发板，确认测试程序正常启动。使用图形工具烧录请参阅[官方烧录说明](https://docs.waveshare.com/ESP32-S3-LCD-2.8/Firmware-Flashing)。
