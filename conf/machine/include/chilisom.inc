#@TYPE: Machine
#@NAME: GRINN Chilisom SoC module
#@DESCRIPTION: Machine configuration for Grinn's chilisom:
# - NAND Flash
# - DDR3 RAM
# - CPU
# - ...

require conf/machine/include/ti33x.inc
require conf/machine/include/chilisom-prefs.inc

EXTRA_IMAGEDEPENDS += "u-boot"

IMAGE_FSTYPES += "tar.bz2 jffs2"
EXTRA_IMAGECMD_jffs2 = "-lnp "

SERIAL_CONSOLE = "115200 ttyO0"

KERNEL_IMAGETYPE = "zImage"

KERNEL_DEVICETREE = "am335x-chiliboard-nand0-ram128.dtb"

MACHINE_KERNEL_PR_append ="-chili"

KERNEL_EXTRA_ARGS += "LOADADDR=${UBOOT_ENTRYPOINT}"

SPL_BINARY = "MLO"
UBOOT_SUFFIX = "img"
UBOOT_MACHINE = "chiliboard_ram128m_config"
UBOOT_ENTRYPOINT = "0x80008000"
UBOOT_LOADADDRESS = "0x80008000"

IMAGE_BOOT_FILES ?= "u-boot.${UBOOT_SUFFIX} MLO"
