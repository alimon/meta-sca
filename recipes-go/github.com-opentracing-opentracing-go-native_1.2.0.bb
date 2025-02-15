SUMMARY = "go.mod: github.com/opentracing/opentracing-go"
HOMEPAGE = "https://pkg.go.dev/github.com/opentracing/opentracing-go"

# License is determined by the modules included and will be therefore computed
DEFAULT_PREFERENCE = "${SCA_DEFAULT_PREFERENCE}"
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-opentracing-opentracing-go-sources.inc

EXTRA_DEPENDS += "\
    github.com-stretchr-testify-native \
"

GO_IMPORT = "github.com/opentracing/opentracing-go"

inherit gosrc
inherit native
