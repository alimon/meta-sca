SUMMARY = "Security auditing tool for Linux, macOS, and UNIX-based systems"
HOMEPAGE = "https://github.com/CISOfy/lynis"
LICENSE = "GPL-3.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3edd6782854304fd11da4975ab9799c1"

SRC_URI = "git://github.com/CISOfy/lynis.git;protocol=https;tag=${PV} \
           file://lynis.sca.description"

S = "${WORKDIR}/git"

inherit autotools-brokensep
inherit sca-sanity

do_compile() {
    :
}

do_configure() {
    :
}

do_install_class-native () {
    install -d ${D}/${datadir}

    install ${WORKDIR}/lynis.sca.description ${D}${datadir}
}

do_install_class-target () {
    install -d ${D}/${bindir}
    install -d ${D}/${sysconfdir}/lynis
    install -m 555 ${S}/lynis ${D}/${bindir}

    install -d ${D}/${datadir}/lynis/db
    install -d ${D}/${datadir}/lynis/plugins
    install -d ${D}/${datadir}/lynis/include
    install -d ${D}/${datadir}/lynis/extras

    cp -r ${S}/db/* ${D}/${datadir}/lynis/db/.
    cp -r ${S}/plugins/*  ${D}/${datadir}/lynis/plugins/.
    cp -r ${S}/include/* ${D}/${datadir}/lynis/include/.
    cp -r ${S}/extras/*  ${D}/${datadir}/lynis/extras/.
    cp ${S}/*.prf ${D}/${sysconfdir}/lynis
}

FILES_${PN}_class-native = "${datadir}"
FILES_${PN}_class-target = "${datadir} ${sysconfdir} ${bindir}"

RDEPENDS_${PN}_class-target += "procps"
DEPENDS_class_native += "${BPN}"

BBCLASSEXTEND = "native"
