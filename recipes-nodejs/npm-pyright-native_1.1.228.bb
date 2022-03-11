SUMMARY = "NPM: pyright"
DESCRIPTION = "Type checker for the Python language"
HOMEPAGE = "https://github.com/Microsoft/pyright#readme"
DEFAULT_PREFERENCE = "${SCA_DEFAULT_PREFERENCE}"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=a2a1e4d251b834bf3e0ceee69ab1d4c9"

DEPENDS = ""

SRC_URI = "https://registry.npmjs.org/pyright/-/pyright-1.1.228.tgz"
SRC_URI[md5sum] = "ea3e04c37ab308100340eb59d9f3580c"
SRC_URI[sha256sum] = "5d39872b6edaa7bf04fb27eba890b4b2204f9b94ebb67e30aa8bb248ecc3c97f"

NPM_PKGNAME = "pyright"

inherit npmhelper
inherit native
