SRC_URI += "https://proxy.golang.org/github.com/onsi/ginkgo/@v/v1.16.5.zip;srcoutput=github.com/onsi/ginkgo;srcinput=github.com/onsi/ginkgo@v1.16.5;downloadfilename=github-com-onsi-ginkgo-1.16.5.zip;name=github-com-onsi-ginkgo"
SRC_URI[github-com-onsi-ginkgo.sha256sum] = "e23fc33b0affa73a4f4c63410af931bf1f8d5b9db266b3461177036d725eacc5"

GOSRC_LICENSE += "\
    MIT \
"
LIC_FILES_CHKSUM += "\
    file://src/github.com/onsi/ginkgo/LICENSE;md5=570603114d52313cb86c0206401c9af7 \
    file://src/github.com/onsi/ginkgo/reporters/stenographer/support/go-colorable/LICENSE;md5=24ce168f90aec2456a73de1839037245 \
    file://src/github.com/onsi/ginkgo/reporters/stenographer/support/go-isatty/LICENSE;md5=f509beadd5a11227c27b5d2ad6c9f2c6 \
"

GOSRC_INCLUDEGUARD += "github.com-onsi-ginkgo-sources.inc"

require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-go-task-slim-sprig-sources.inc', '', 'github.com-go-task-slim-sprig-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-nxadm-tail-sources.inc', '', 'github.com-nxadm-tail-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-onsi-gomega-sources.inc', '', 'github.com-onsi-gomega-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'golang.org-x-sys-sources.inc', '', 'golang.org-x-sys-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'golang.org-x-tools-sources.inc', '', 'golang.org-x-tools-sources.inc', d)}
