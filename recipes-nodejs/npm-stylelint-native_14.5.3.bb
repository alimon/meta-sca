SUMMARY = "NPM: stylelint"
DESCRIPTION = "A mighty, modern CSS linter."
HOMEPAGE = "https://stylelint.io"
DEFAULT_PREFERENCE = "${SCA_DEFAULT_PREFERENCE}"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=0e0ecf49fffcf64b1f3fa0a956ea44a0"

DEPENDS = "npm-balanced-match-native \
           npm-colord-native \
           npm-cosmiconfig-native \
           npm-css-functions-list-native \
           npm-debug-native \
           npm-execall-native \
           npm-fast-glob-native \
           npm-fastest-levenshtein-native \
           npm-file-entry-cache-native \
           npm-get-stdin-native \
           npm-global-modules-native \
           npm-globby-native \
           npm-globjoin-native \
           npm-html-tags-native \
           npm-ignore-native \
           npm-import-lazy-native \
           npm-imurmurhash-native \
           npm-is-plain-object-native \
           npm-known-css-properties-native \
           npm-mathml-tag-names-native \
           npm-meow-native \
           npm-micromatch-native \
           npm-normalize-path-native \
           npm-normalize-selector-native \
           npm-picocolors-native \
           npm-postcss-media-query-parser-native \
           npm-postcss-native \
           npm-postcss-resolve-nested-selector-native \
           npm-postcss-safe-parser-native \
           npm-postcss-selector-parser-native \
           npm-postcss-value-parser-native \
           npm-resolve-from-native \
           npm-specificity-native \
           npm-string-width-native \
           npm-strip-ansi-native \
           npm-style-search-native \
           npm-supports-hyperlinks-native \
           npm-svg-tags-native \
           npm-table-native \
           npm-v8-compile-cache-native \
           npm-write-file-atomic-native"

SRC_URI = "https://registry.npmjs.org/stylelint/-/stylelint-14.5.3.tgz"
SRC_URI[md5sum] = "393e8538d110589ef7a4f50b61e913a5"
SRC_URI[sha256sum] = "b49b175b4c60314292377eeea771eb3ecd3a2f6a52662e93624bd5e2873ffcd0"

NPM_PKGNAME = "stylelint"

inherit npmhelper
inherit native
