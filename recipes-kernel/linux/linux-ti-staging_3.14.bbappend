FILESEXTRAPATHS_prepend := "${THISDIR}/linux:"

SRC_URI += "file://linux-001-chiliboard.patch"
SRC_URI += "file://linux-002-dts-move-uart0.patch"

# linux-ti kernels contains own extensions for building kernel.
# Disable building of multiple kernels:
do_disable_multiconfig() {
    touch ${WORKDIR}/configs/empty
}
addtask disable_multiconfig after do_preparekernel before do_compileconfigs




