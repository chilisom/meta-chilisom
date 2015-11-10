FILESEXTRAPATHS_prepend := "${THISDIR}/u-boot:"

# This revision corresponds to the tag "v2014.07"
# We use the revision in order to avoid having to fetch it from the repo during parse
SRCREV = "524123a70761110c5cf3ccc5f52f6d4da071b959"

SRC_URI += "file://uboot-001-chiliboard.patch"
SRC_URI += "file://uEnv.txt"

do_deploy_append () {
	install ${WORKDIR}/uEnv.txt ${DEPLOYDIR}/uEnv.txt
#	sed "s/KERNEL_DEVICETREE/${KERNEL_DEVICETREE}/" ${DEPLOYDIR}/uEnv.txt
	sed -i 's:%KERNEL_DEVICETREE%:${KERNEL_DEVICETREE}:g' ${DEPLOYDIR}/uEnv.txt
	echo "# File modified by recipe `basename ${FILE}`" >> ${DEPLOYDIR}/uEnv.txt
}
