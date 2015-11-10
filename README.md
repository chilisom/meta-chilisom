# meta-chilisom
OpenEmbedded/Yocto BSP layer for Grinns' Chilisom SoC module

Please refer http://wiki.chiliboard.org/

Project setup
=============

For faster download, make shallow clone (--depth 1) of poky repository:

  git clone git://git.yoctoproject.org/poky --depth 1 -b fido
  cd poky
  git clone git://git.yoctoproject.org/meta-ti --depth 1 -b fido
  git clone https://github.com/chilisom/meta-chilisom.git

  TEMPLATECONF=meta-chilisom/conf source ./oe-init-build-env

Please adapt conf/local.conf to your needs.

  bitbake core-image-base
