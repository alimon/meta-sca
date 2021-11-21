SUMMARY = "go.mod: github.com/hashicorp/yamux"
HOMEPAGE = "https://pkg.go.dev/github.com/hashicorp/yamux"

# License is determined by the modules included and will be therefore computed
DEFAULT_PREFERENCE = "-1"
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-hashicorp-yamux-sources.inc

GO_IMPORT = "github.com/hashicorp/yamux"

inherit gosrc
inherit native
