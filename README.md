# clackups keyboard projects

## Mirrored keyboard for one-handed input

The goal of the project is to build an inexpensive keyboard for
one-handed users, mainly targeting Ukrainians injured in the war.

The design is based on the [publication of Edgar
Matias](https://www.billbuxton.com/matias93.html), using the [CSTC40
keyboard by
KPrepublic](https://kprepublic.com/products/cstc40-40-rgb-40-hot-swappable-mechanical-keyboard-pcb-programmed-qmk-via-vial-firmware-rgb-switch-underglow-type-c-planck).

Right-handed layout:

![CSTC40 keyboard for one-handed right-hand typing with hand-written keycap markings for ASCII and Ukrainian](cstc40_clackups_1hr.jpg)

To build your own keyboard, refer to the [keymap file](keyboards/kprepublic/cstc40/single_pcb/keymaps/clackups_1hr/keymap.c).

Left-handed layout is coming soon.

### Parts needed:

* A CSTC40 keyboard from
  [AliExpress](https://www.aliexpress.com/item/1005004702079962.html)
  or
  [KPrepublic](https://kprepublic.com/products/cstc40-40-rgb-40-hot-swappable-mechanical-keyboard-pcb-programmed-qmk-via-vial-firmware-rgb-switch-underglow-type-c-planck). Take
  the Kit2 or Kit3 (Kit3 comes with an USB cable).

* A set of XDA keycaps. The one on the photo is using [this
  set](https://www.aliexpress.com/item/1005006164294060.html), but any
  other full set will work fine.

* A few blank XDA keycaps. [this
  set](https://www.aliexpress.com/item/1005006562057208.html), for
  example, is convenient because it has both 1u and 2u keycaps.

* 0.3 or 0.4mm permanent markers. For example, [edding 8407 cable
  marker](https://www.edding.com/products/edding-8407-cable-marker/).


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
```

5. Flash the firware onto the keyboard

If the compilation finished without errors, disconnect the CSTC40
keyboard from USB, press and hold the key in the upper left corner,
connect the USB cable, then release the key after a second or two. If
the flasher can't connect, repeat the procedure.

```
# right-handed keymap
qmk flash -kb kprepublic/cstc40/single_pcb -km clackups_1hr
```

6. Use the keyboard at your convenience. All the feedback will be highly apreciated.




## Reverse-engineered X.Tips X3S (aka X3)

The keyboard is sold as "X3 Wired Corne Keyboard" on Aliexpress, and
it declares itself as "X.Tips X3S" in USB.

See more details [in the project
folder](keyboards/clackups/xtips_x3s).


# Copyright and license

This work is published and distributed under the WTFPL license conditions.
