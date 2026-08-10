# libcereal - A C++ serialization library

This is a `build2` package for the [`cereal`](https://uscilab.github.io/cereal)
C++ library. It provides a header-only C++11 serialization library that
takes arbitrary data types and reversibly turns them into different
representations, such as compact binary encodings, XML, or JSON.


## Usage

To start using `libcereal` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libcereal ^1.3.2
```

Then import the library in your `buildfile`:

```
import libs = libcereal%lib{cereal}
```


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.libcereal.thread_safe ?= false
```

Enables mutex-based synchronization of cereal's internal shared/weak pointer
tracking maps, corresponding to upstream's `THREAD_SAFE` CMake option. Off by
default, matching upstream.
