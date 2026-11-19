# 板载外设检测和 MP3 播放

[English](README.md) | [简体中文](README_ZH.md)

## 功能

通过 LVGL 显示板载外设检测界面和 MP3 播放器。状态页显示 Flash 与 microSD 容量、电池电压、运动传感器和 RTC 读数，以及 Wi-Fi 扫描结果。

## 硬件需求

- ESP32-S3-LCD-2.8 开发板和 USB 数据线
- 播放音乐需连接扬声器，并使用根目录放有 MP3 文件的 FAT32 格式 microSD 卡
- 测量电池电压需连接兼容电池

## 怎么运行

使用 [仓库首页](../../../README_ZH.md) 所列版本的 ESP-IDF，在本目录打开 ESP-IDF 终端。

```bash
idf.py set-target esp32s3
idf.py build flash monitor
```

## 预期现象

LCD 显示状态页和音乐播放器。单击 BOOT 选择下一个控件，双击选择上一个控件，长按操作当前控件。短按电源键切换页面。

## 常见问题

此示例使用实体按键操作。若播放器找不到曲目，请检查存储卡的格式和 MP3 文件是否位于卡的根目录。
