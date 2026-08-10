# cereal - A C++ serialization library

This is a `build2` package repository for [`cereal`](https://uscilab.github.io/cereal),
a header-only C++11 serialization library that reversibly turns arbitrary
data types into binary, XML, or JSON representations.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`cereal` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](libcereal/PACKAGE-README.md) file.

The development setup for `cereal` uses the standard `bdep`-based workflow.
For example:

```
git clone --recursive https://github.com/build2-packaging/cereal.git
cd cereal

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
