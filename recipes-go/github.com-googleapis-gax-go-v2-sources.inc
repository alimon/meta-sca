SRC_URI += "https://proxy.golang.org/github.com/googleapis/gax-go/v2/@v/v2.1.1.zip;srcoutput=github.com/googleapis/gax-go/v2;srcinput=github.com/googleapis/gax-go/v2@v2.1.1;downloadfilename=github-com-googleapis-gax-go-v2-2.1.1.zip;name=github-com-googleapis-gax-go-v2"
SRC_URI[github-com-googleapis-gax-go-v2.sha256sum] = "b8f7a0fd38ce167551e21a0c29c9bb3ebb4ccf179ecebe6c5b2504ce7f1baddd"

GOSRC_LICENSE += "\
    BSD-3-Clause \
"
LIC_FILES_CHKSUM += "\
    file://src/github.com/googleapis/gax-go/v2/LICENSE;md5=0dd48ae8103725bd7b401261520cdfbb \
"

GOSRC_INCLUDEGUARD += "github.com-googleapis-gax-go-v2-sources.inc"

require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-api-sources.inc', '', 'google.golang.org-api-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-genproto-sources.inc', '', 'google.golang.org-genproto-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-grpc-sources.inc', '', 'google.golang.org-grpc-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-protobuf-sources.inc', '', 'google.golang.org-protobuf-sources.inc', d)}
