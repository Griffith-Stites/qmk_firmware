# Maeve's Qmk Firmware Repo

### QMK commands
* [Setup](https://docs.qmk.fm/#/newbs_getting_started)
* Build: qmk compile -kb <keyboard> -km <keymap>
* Flash: qmk flash -kb <my_keyboard> -km <my_keymap> OR:

### Flash (Longer form)
1. Enter bootloader (esc and plug in on pebble)
2. Check that keyboard chip shows up with sudo dmesg
3. Clear memory: sudo dfu-programmer atmega32u4 erase --force
4. Flash: sudo dfu-programmer atmega32u4 flash kb_default.hex


## Layout Notes
### Standards
Layers:
1) QWERTY
2) DVORAK
3) Secondary Function Layer
4) Settings Layer
* Esc: RESET
* 1: QWERTY
* 2: DVORAK
* 3: BS_SWAP
* 4: BS_NORM
* Space: Version
* RGB
  * QA: Hue
  * WS: Saturation
  * E: Toggle
  * RF: Brightness
  * TG: Speed
  * YH: Mode

Other Rules:
* Capslock is ctl/Capslock
* Tab is Layer 3/tab, split shift function should  also access layer 3
* Layer 4 is accessed on a bottom right fn key


### Pebble (dz60rgb_wkl)
* Holding caps lock is ctl
* Holding tab is layer 2

* Can get to layer 3 settings layer with the right super key
  * RGB Control and keyboard configuration
  * Esc is RESET
  * 1 is QWERTY
  * 2 is Dvorak
  * 3 swaps backspace and slash
  * 4 unswaps
  * Enter exit
  * Space prints version
