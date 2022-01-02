SUMMARY = "go.mod: github.com/VividCortex/gohistogram"
HOMEPAGE = "https://pkg.go.dev/github.com/VividCortex/gohistogram"
DEFAULT_PREFERENCE = "${SCA_DEFAULT_PREFERENCE}"
# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-vividcortex-gohistogram-sources.inc

GO_IMPORT = "github.com/VividCortex/gohistogram"

UPSTREAM_CHECK_REGEX = "v(?P<pver>\d+\.\d+)"

inherit gosrc
inherit native
