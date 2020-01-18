## Maeve's Qmk Firmware Repo

## My Boards
* DZ60
* Pebble: qmk_firmware/keyboards/dztech/dz60rgb_wkl/v2

## Make Hex File
1. Navigate to qmk_firmware directory
2. make dztech/dz60rgb_wkl/v2:maeve

## Flash
1. Enter bootloader (esc and plug in on pebble)
2. Check that keyboard chip shows up with sudo dmesg
3. Clear memory: sudo dfu-programmer atmega32u4 erase --force
4. Flash: sudo dfu-programmer atmega32u4 flash kb_default.hex
