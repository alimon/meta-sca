SUMMARY = "NPM: rollup"
DESCRIPTION = "Rollup is a module bundler for JavaScript which compiles small pieces of code into something larger and more complex, such as a library or application."
HOMEPAGE = "https://github.com/rollup/rollup.git"

DEFAULT_PREFERENCE = "${SCA_DEFAULT_PREFERENCE}"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.md;md5=a175944a7ba559a0b5ecfe0c0ae31ee2"

SRC_URI = "https://registry.npmjs.org/rollup/-/rollup-2.70.1.tgz"
SRC_URI[md5sum] = "73888a7a1573472e7ac74632c20ea1ed"
SRC_URI[sha256sum] = "60f7491cf2d28475aff1273297fd5c5dfdb55684abcfe4c43a43986321b7136c"

NPM_PKGNAME = "rollup"

inherit npmhelper
inherit native
