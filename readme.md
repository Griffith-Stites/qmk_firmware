## Maeve's Qmk Firmware Repo

## My Boards
* DZ60
* Pebble: qmk_firmware/keyboards/dztech/dz60rgb_wkl/v2

## Make Hex File
1. Navigate to qmk_firmware directory
2. Type make

## Flash
1. Press esc and plug in keyboard to enter bootloader mode
2. Check that keyboard chip shows up with dmesg. May have to run as sudo
3. Clear memory: sudo dfu-programmer atmega32u4 erase --force
4. Flash: sudo dfu-programmer atmega32u4 flash kb_default.hex
