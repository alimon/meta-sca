SRC_URI += "https://proxy.golang.org/github.com/gobuffalo/clara/v2/@v/v2.0.5.zip;srcoutput=github.com/gobuffalo/clara/v2;srcinput=github.com/gobuffalo/clara/v2@v2.0.5;downloadfilename=github-com-gobuffalo-clara-v2-2.0.5.zip;name=github-com-gobuffalo-clara-v2"
SRC_URI[github-com-gobuffalo-clara-v2.sha256sum] = "6132cf14ab4c42bd20caeb3e0b781357eb04975ead446f5502785e40ff9d823c"

GOSRC_LICENSE += "\
    MIT \
"
LIC_FILES_CHKSUM += "\
    file://src/github.com/gobuffalo/clara/v2/LICENSE;md5=e15c553ebb88e0f83deb605759a42839 \
"

GOSRC_INCLUDEGUARD += "github.com-gobuffalo-clara-v2-sources.inc"

require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-fatih-color-sources.inc', '', 'github.com-fatih-color-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-gobuffalo-genny-v2-sources.inc', '', 'github.com-gobuffalo-genny-v2-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-gobuffalo-here-sources.inc', '', 'github.com-gobuffalo-here-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-gobuffalo-logger-sources.inc', '', 'github.com-gobuffalo-logger-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-gobuffalo-meta-sources.inc', '', 'github.com-gobuffalo-meta-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-gobuffalo-plush-v4-sources.inc', '', 'github.com-gobuffalo-plush-v4-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-masterminds-semver-sources.inc', '', 'github.com-masterminds-semver-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-spf13-pflag-sources.inc', '', 'github.com-spf13-pflag-sources.inc', d)}
