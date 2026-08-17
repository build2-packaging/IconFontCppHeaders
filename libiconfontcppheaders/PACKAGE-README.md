# libiconfontcppheaders - C and C++ headers for icon font codepoints

This is a `build2` package for the
[IconFontCppHeaders](https://github.com/juliettef/IconFontCppHeaders)
C and C++ headers. It provides generated `ICON_*` macros, codepoint ranges,
and font file names for Font Awesome (free), Fork Awesome, Google Material
Design, Pictogrammers Material Design Icons, Kenney, Fontaudio, Codicons, and
Lucide.

This package tracks upstream commit `210b5a3` (2026-06-05) as version
`2026.6.5`. Upstream does not publish releases. Font Awesome Pro 5 headers
are in the sibling `libiconfontcppheaders-pro` package.


## Usage

To start using `libiconfontcppheaders` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libiconfontcppheaders >= 2026.6.5
```

The package version is a date coerced to semver. Do not use the `^` constraint.

Then import the library in your `buildfile`:

```
import libs = libiconfontcppheaders%lib{iconfontcppheaders}
```


## Importable targets

This package provides the following importable targets:

```
lib{iconfontcppheaders}
```

This is a binless (header-only) library. Public headers are included as
`<iconfontcppheaders/IconsFontAwesome7.h>`,
`<iconfontcppheaders/IconsKenney.h>`, and the other `Icons*.h` names listed
in the upstream README (except Font Awesome Pro).

The headers contain only macros. They do not include the icon font files.
Load the corresponding `.ttf` or `.woff2` yourself.

Do not include more than one Font Awesome generation (`IconsFontAwesome4.h`,
`IconsFontAwesome5.h`, `IconsFontAwesome6.h`, `IconsFontAwesome7.h`) in the
same translation unit. They define the same `ICON_FA_*` names.


## Configuration variables

This package has no configuration variables.
