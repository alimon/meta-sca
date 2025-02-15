SRC_URI += "https://proxy.golang.org/sourcegraph.com/sourcegraph/appdash/@v/v0.0.0-20211028080628-e2786a622600.zip;srcoutput=sourcegraph.com/sourcegraph/appdash;srcinput=sourcegraph.com/sourcegraph/appdash@v0.0.0-20211028080628-e2786a622600;downloadfilename=sourcegraph-com-sourcegraph-appdash-0.0.0-20211028080628-e2786a622600.zip;name=sourcegraph-com-sourcegraph-appdash"
SRC_URI[sourcegraph-com-sourcegraph-appdash.sha256sum] = "02c23b0a2ef528cf30c087650de2fb5f13814f855c14d44fd9677b180bd95962"

GOSRC_LICENSE += "\
    BSD-3-Clause \
    MIT \
"
LIC_FILES_CHKSUM += "\
    file://src/sourcegraph.com/sourcegraph/appdash/LICENSE;md5=7382694b07abfd90abcab68784334326 \
"

GOSRC_INCLUDEGUARD += "sourcegraph.com-sourcegraph-appdash-sources.inc"

require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-gogo-protobuf-sources.inc', '', 'github.com-gogo-protobuf-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-gorilla-mux-sources.inc', '', 'github.com-gorilla-mux-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-jessevdk-go-flags-sources.inc', '', 'github.com-jessevdk-go-flags-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-opentracing-basictracer-go-sources.inc', '', 'github.com-opentracing-basictracer-go-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-opentracing-opentracing-go-sources.inc', '', 'github.com-opentracing-opentracing-go-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-urfave-negroni-sources.inc', '', 'github.com-urfave-negroni-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'sourcegraph.com-sourcegraph-appdash-data-sources.inc', '', 'sourcegraph.com-sourcegraph-appdash-data-sources.inc', d)}
