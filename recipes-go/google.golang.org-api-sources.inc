SRC_URI += "https://proxy.golang.org/google.golang.org/api/@v/v0.71.0.zip;srcoutput=google.golang.org/api;srcinput=google.golang.org/api@v0.71.0;downloadfilename=google-golang-org-api-0.71.0.zip;name=google-golang-org-api"
SRC_URI[google-golang-org-api.sha256sum] = "bc2fc5dcbaca5ec34d0bedbf50d4f1a3a14fd7c95c5b046f55c424514666e1d3"
GOSRC_REMOVEDIRS += "google.golang.org/api/integration-tests/byoid google.golang.org/api/integration-tests/downscope"

GOSRC_LICENSE += "\
    BSD-3-Clause \
"
LIC_FILES_CHKSUM += "\
    file://src/google.golang.org/api/LICENSE;md5=a651bb3d8b1c412632e28823bb432b40 \
    file://src/google.golang.org/api/internal/third_party/uritemplates/LICENSE;md5=4ee4feb2b545c2231749e5c54ace343e \
"

GOSRC_INCLUDEGUARD += "google.golang.org-api-sources.inc"

require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'cloud.google.com-go-compute-sources.inc', '', 'cloud.google.com-go-compute-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-googleapis-gax-go-v2-sources.inc', '', 'github.com-googleapis-gax-go-v2-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'go.opencensus.io-sources.inc', '', 'go.opencensus.io-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'golang.org-x-net-sources.inc', '', 'golang.org-x-net-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'golang.org-x-oauth2-sources.inc', '', 'golang.org-x-oauth2-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'golang.org-x-sync-sources.inc', '', 'golang.org-x-sync-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'golang.org-x-sys-sources.inc', '', 'golang.org-x-sys-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-appengine-sources.inc', '', 'google.golang.org-appengine-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-genproto-sources.inc', '', 'google.golang.org-genproto-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-grpc-sources.inc', '', 'google.golang.org-grpc-sources.inc', d)}
