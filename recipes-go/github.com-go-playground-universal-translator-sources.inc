SRC_URI += "https://proxy.golang.org/github.com/go-playground/universal-translator/@v/v0.18.0.zip;srcoutput=github.com/go-playground/universal-translator;srcinput=github.com/go-playground/universal-translator@v0.18.0;downloadfilename=github-com-go-playground-universal-translator-0.18.0.zip;name=github-com-go-playground-universal-translator"
SRC_URI[github-com-go-playground-universal-translator.sha256sum] = "15f3241347dfcfe7d668595727629bcf54ff028ebc4b7c955b9c2bdeb253a110"

GOSRC_LICENSE += "\
    MIT \
"
LIC_FILES_CHKSUM += "\
    file://src/github.com/go-playground/universal-translator/LICENSE;md5=2e2b21ef8f61057977d27c727c84bef1 \
"

GOSRC_INCLUDEGUARD += "github.com-go-playground-universal-translator-sources.inc"

require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-go-playground-locales-sources.inc', '', 'github.com-go-playground-locales-sources.inc', d)}
