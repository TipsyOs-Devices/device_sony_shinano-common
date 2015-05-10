#include <stdlib.h>

// The devices to init for Xperia Z
const char *mr_init_devices[] = {
    "/sys/class/graphics/fb0",
    "/sys/class/graphics/fb1",
    "/sys/class/graphics/fb2",
    "/sys/class/misc/android_adb",
    "/sys/class/android_usb/android0/f_adb",
    "/sys/class/tty/ptmx",
    "/sys/class/misc/uinput",
    "/sys/class/input/input*",
    "/sys/class/input/event*",

    // storage devices
    "/sys/dev/block*",
    "/sys/block/mmcblk0",
    "/sys/module/mmc_core",
    "/sys/module/mmcblk",

    "/sys/bus*",
    "/sys/devices*",

    NULL
};
