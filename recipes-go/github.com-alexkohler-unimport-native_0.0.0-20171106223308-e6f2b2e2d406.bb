SUMMARY = "go.mod: github.com/alexkohler/unimport"
HOMEPAGE = "https://pkg.go.dev/github.com/alexkohler/unimport"

# License is determined by the modules included and will be therefore computed
DEFAULT_PREFERENCE = "${SCA_DEFAULT_PREFERENCE}"
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-alexkohler-unimport-sources.inc

GO_IMPORT = "github.com/alexkohler/unimport"

inherit gosrc
inherit native
