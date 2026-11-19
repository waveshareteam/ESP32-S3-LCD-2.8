# Board diagnostics and MP3 playback

[English](README.md) | [简体中文](README_ZH.md)

## What It Does

Displays onboard diagnostics and an MP3 player using LVGL. The status page shows Flash and microSD capacity, battery voltage, motion sensor and RTC readings, and Wi-Fi scan results.

## Hardware Required

- ESP32-S3-LCD-2.8 development board and USB data cable
- Speaker and FAT32-formatted microSD card with MP3 files in its root directory for playback
- Compatible battery for the battery voltage check

## How to Run

Open an ESP-IDF terminal in this directory using the version listed in the [repository README](../../../README.md).

```bash
idf.py set-target esp32s3
idf.py build flash monitor
```

## Expected Result

The LCD shows a status page and a music player. Press BOOT once to select the next control, twice to select the previous control, or hold it to activate the selected control. Press the power button briefly to switch pages.

## Troubleshooting

This example uses the physical buttons for navigation. If the player does not find tracks, check the card format and confirm the MP3 files are in the card root.
