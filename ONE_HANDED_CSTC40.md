# Mirrored keyboard for one-handed input

## Overview

The goal of the project is to build an inexpensive keyboard for
one-handed users, mainly targeting Ukrainians injured in the war.

The design is based on the [publication of Edgar
Matias](https://www.billbuxton.com/matias93.html), utilising the
[CSTC40 keyboard by
KPrepublic](https://kprepublic.com/products/cstc40-40-rgb-40-hot-swappable-mechanical-keyboard-pcb-programmed-qmk-via-vial-firmware-rgb-switch-underglow-type-c-planck).

The layout is still a work in progress, so sugestions are very much
welcome.

The three keys in the bottom row, spannig the double-size space bar
(yellow and grey on the photo below) are all acting as a space bar and
a layer switcher. You hold the space bar and tap the keys from the
mirrored half (on the right-hand keyboard on the photo, Space+L would
produce the letter "s", or Ukrainian "i").

ALT, SHIFT and CTRL are made sticky: you can tap and leave the key,
and proceed with the letter. So, tapping SHIFT, then Space+H on the
right-hand keyboard will produce the capital G or Ukrainian capital
"Pe".

Space+0 switches the keyboard into the mouse control mode. The "I" key
moves the mouse pointer up. The keys to the left and right from it act
as mouse buttons. The three keys below are used for navigating the
mouse pointer to the left, down, and right. In addition, the key to
the left from double-sized space bar on the right-handed layout (or
the one to the right from the space bar on the left-handed layout)
acts as a mouse button. "0" returns the keyboard into the default
mode. The arrow keys remain with their function for cursor movements.


On the photo, the right-handed keyboard is on the top, and the
left-handed one is on the bottom:

![CSTC40 keyboard for one-handed typing with hand-written
 keycap markings for ASCII and Ukrainian](cstc40_clackups_1hr_1hl.jpg)

The keymap files for the
[right](keyboards/kprepublic/cstc40/single_pcb/keymaps/clackups_1hr/keymap.c)
and
[left](keyboards/kprepublic/cstc40/single_pcb/keymaps/clackups_1hl/keymap.c)
hands will help if you need to customize it or build your own
keyboard.



## Building it


### Parts needed:

* A CSTC40 keyboard from
  [AliExpress](https://www.aliexpress.com/item/1005004702079962.html)
  or
  [KPrepublic](https://kprepublic.com/products/cstc40-40-rgb-40-hot-swappable-mechanical-keyboard-pcb-programmed-qmk-via-vial-firmware-rgb-switch-underglow-type-c-planck). Take
  the Kit2 or Kit3 (Kit3 comes with an USB cable).

* A set of XDA keycaps. The top one on the photo is using [this
  set](https://www.aliexpress.com/item/1005006164294060.html), but any
  other full set will work fine.

* A few blank XDA keycaps. [This
  set](https://www.aliexpress.com/item/1005006562057208.html), for
  example, is convenient because it has both 1u and 2u keycaps.

* 0.3 or 0.4mm permanent markers. For example, [edding 8407 cable
  marker](https://www.edding.com/products/edding-8407-cable-marker/).

* corrector pen, in case if you make a mistake in labeling.


### Installation instructions:

You need a Linux computer with a USB port. MacOS and Windows should also work, in theory.

1. Follow the [installation
instructions](https://docs.qmk.fm/newbs_getting_started) for the QMK
firmware suite.

2. Clone the clackups sources from Github:

```
cd
git clone https://github.com/clackups/qmk_userspace.git
```

3. Add the userspace to the QMK suite:

```
qmk config user.overlay_dir=${HOME}/qmk_userspace
```

4. Compile the firmware

```
# right-handed keymap
qmk compile -kb kprepublic/cstc40/single_pcb -km clackups_1hr

# left-handed keymap
qmk compile -kb kprepublic/cstc40/single_pcb -km clackups_1hl
```

5. Flash the firmware onto the keyboard

If the compilation finished without errors, disconnect the CSTC40
keyboard from USB, press and hold the key in the upper left corner,
connect the USB cable, then release the key after a second or two. If
the flasher can't connect, repeat the procedure.

```
# flash the right-handed keymap
qmk flash -kb kprepublic/cstc40/single_pcb -km clackups_1hr

# flash the left-handed keymap
qmk flash -kb kprepublic/cstc40/single_pcb -km clackups_1hl
```

6. Use the keyboard at your convenience. All the feedback will be
highly apreciated.


