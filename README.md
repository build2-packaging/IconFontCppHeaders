# iconfontcppheaders - C and C++ headers for icon font codepoints

This is a `build2` package repository for
[IconFontCppHeaders](https://github.com/juliettef/IconFontCppHeaders),
generated C and C++ headers with icon font codepoint macros.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
these packages in your `build2`-based project, then instead see the
accompanying
[`libiconfontcppheaders/PACKAGE-README.md`](libiconfontcppheaders/PACKAGE-README.md)
and
[`libiconfontcppheaders-pro/PACKAGE-README.md`](libiconfontcppheaders-pro/PACKAGE-README.md)
files.

The development setup for `iconfontcppheaders` uses the standard `bdep`-based workflow.
For example:

```
git clone --recurse-submodules https://github.com/build2-packaging/IconFontCppHeaders.git
cd IconFontCppHeaders

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
