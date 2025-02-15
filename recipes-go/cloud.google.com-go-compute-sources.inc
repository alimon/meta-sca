SRC_URI += "https://proxy.golang.org/cloud.google.com/go/compute/@v/v1.5.0.zip;srcoutput=cloud.google.com/go/compute;srcinput=cloud.google.com/go/compute@v1.5.0;downloadfilename=cloud-google-com-go-compute-1.5.0.zip;name=cloud-google-com-go-compute"
SRC_URI[cloud-google-com-go-compute.sha256sum] = "793a151d41c446edc42561a38155e644514e0dcc0a57ca7d8d263091206129e9"

GOSRC_LICENSE += "\
    Apache-2.0 \
"
LIC_FILES_CHKSUM += "\
    file://src/cloud.google.com/go/compute/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://src/cloud.google.com/go/compute/apiv1/license_codes_client.go;md5=600d359a286208ad4a7e73fd80f1cb4a \
    file://src/cloud.google.com/go/compute/apiv1/license_codes_client_example_test.go;md5=84d433f4cfbd6dbd7f48c4389c54d38a \
    file://src/cloud.google.com/go/compute/apiv1/licenses_client.go;md5=b02471b17a25fe6209bd2e2e1cff9637 \
    file://src/cloud.google.com/go/compute/apiv1/licenses_client_example_test.go;md5=9a58814aea41d4733bbe4bbed559c977 \
"

GOSRC_INCLUDEGUARD += "cloud.google.com-go-compute-sources.inc"

require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'cloud.google.com-go-sources.inc', '', 'cloud.google.com-go-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-googleapis-gax-go-v2-sources.inc', '', 'github.com-googleapis-gax-go-v2-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-api-sources.inc', '', 'google.golang.org-api-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-genproto-sources.inc', '', 'google.golang.org-genproto-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-grpc-sources.inc', '', 'google.golang.org-grpc-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-protobuf-sources.inc', '', 'google.golang.org-protobuf-sources.inc', d)}
