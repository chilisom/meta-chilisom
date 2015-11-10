PREFERRED_PROVIDER_jpeg = "libjpeg-turbo"
PREFERRED_PROVIDER_jpeg-native = "libjpeg-turbo-native"

# Uncomment to get latest kernel provided by meta-ti
PREFERRED_PROVIDER_virtual/kernel = "linux-ti-staging"
PREFERRED_VERSION_linux-ti-staging = "3.14%"
PREFERRED_PROVIDER_virtual/bootloader = "u-boot-ti-staging"
PREFERRED_PROVIDER_u-boot = "u-boot-ti-staging"
PREFERRED_VERSION_u-boot-ti-staging = "2014.07%"


PREFERRED_PROVIDER_virtual/egl = "libgles-omap3"
PREFERRED_PROVIDER_virtual/libgles1 = "libgles-omap3"
PREFERRED_PROVIDER_virtual/libgles2 = "libgles-omap3"

# libgles-omap3:requires libdrm (>= 2.4.59)
PREFERRED_VERSION_libdrm = "2.4.59"
