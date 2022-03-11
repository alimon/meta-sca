SUMMARY = "NPM: cross-env"
HOMEPAGE = "https://github.com/kentcdodds/cross-env"

DEFAULT_PREFERENCE = "${SCA_DEFAULT_PREFERENCE}"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=63d11d7016a56309d936f9d7b0dc9c71"

DEPENDS = "npm-cross-spawn-native"

SRC_URI = "https://registry.npmjs.org/cross-env/-/cross-env-7.0.3.tgz"
SRC_URI[md5sum] = "88297d1372431356d2d492c331505a49"
SRC_URI[sha256sum] = "d44ad3b6925ff024f64fc4eec88a7da8b8291dd66de858c34866be611ad3c5de"

NPM_PKGNAME = "cross-env"

inherit npmhelper
inherit native
