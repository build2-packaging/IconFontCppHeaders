# libiconfontcppheaders-pro - C and C++ headers for Font Awesome Pro 5 codepoints

This is a `build2` package for the
[IconFontCppHeaders](https://github.com/juliettef/IconFontCppHeaders)
Font Awesome Pro 5 C and C++ headers. It provides generated `ICON_*` macros,
codepoint ranges, and font file names for Font Awesome Pro 5 and Pro Brands.

This package tracks upstream commit `210b5a3` (2026-06-05) as version
`2026.6.5`. The generated header text is Zlib. Using the icons requires a
Font Awesome Pro license. The Pro webfonts are not included.

Free Font Awesome and other icon-font headers are in the sibling
`libiconfontcppheaders` package.


## Usage

To start using `libiconfontcppheaders-pro` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libiconfontcppheaders-pro >= 2026.6.5
```

The package version is a date coerced to semver. Do not use the `^` constraint.

Then import the library in your `buildfile`:

```
import libs = libiconfontcppheaders-pro%lib{iconfontcppheaders-pro}
```


## Importable targets

This package provides the following importable targets:

```
lib{iconfontcppheaders-pro}
```

This is a binless (header-only) library. Public headers are included as
`<iconfontcppheaders/IconsFontAwesome5Pro.h>` and
`<iconfontcppheaders/IconsFontAwesome5ProBrands.h>`.

Do not include these headers in the same translation unit as the free Font
Awesome headers from `libiconfontcppheaders`. They define the same
`ICON_FA_*` names.


## Configuration variables

This package has no configuration variables.
