SUMMARY = "SCA ruleset for pyright at recipes"
DESCRIPTION = "Rules to configure how pyright is affecting the build"

DEFAULT_PREFERENCE = "${SCA_DEFAULT_PREFERENCE}"
LICENSE = "BSD-2-Clause"
LIC_FILES_CHKSUM = "file://${SCA_LAYERDIR}/LICENSE;md5=a4a2bbea1db029f21b3a328c7a059172"

SRC_URI = "file://suppress \
           file://fatal"

inherit native

do_install() {
    install -d "${D}${datadir}"
    install "${WORKDIR}/fatal" "${D}${datadir}/pyright-recipe-fatal"
    install "${WORKDIR}/suppress" "${D}${datadir}/pyright-recipe-suppress"
}

FILES:${PN} = "${datadir}"
