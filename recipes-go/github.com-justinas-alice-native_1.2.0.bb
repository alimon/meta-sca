SUMMARY = "go.mod: github.com/justinas/alice"
HOMEPAGE = "https://pkg.go.dev/github.com/justinas/alice"

# License is determined by the modules included and will be therefore computed
DEFAULT_PREFERENCE = "${SCA_DEFAULT_PREFERENCE}"
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-justinas-alice-sources.inc

GO_IMPORT = "github.com/justinas/alice"

inherit gosrc
inherit native
