# nekoy's lily58 layout

## Key features

- Qwerty, Colemak-DH
- Dedicated gaming layer with arrow arrow cluster
- Navigational layer (arowkeys set like vim motions)
- Numpad

## Build instructions

- `cd /path/to/qmk_firmware`
- Ensure latest libraries are loaded `make git-submodule`
- the first time you flash any side of the keyboard you should flash handedness into eeprom ([`for more info click here`](https://docs.qmk.fm/features/split_keyboard)) for me the command looks like this `qmk flash -kb lily58 -km Nekoys_keymap -bl avrdude-split-left` for left module and `mk flash -kb lily58 -km Nekoys_keymap -bl avrdude-split-left` for the right