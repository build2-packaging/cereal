# libcereal-tests - A C++ serialization library (tests)

This is a `build2` package containing the test suite for the
[`cereal`](https://github.com/USCiLab/cereal) library, ported from
upstream's `unittests/` (using the `doctest` package instead of
upstream's vendored copy).

The `boost/*` tests (requires Boost) and `portability_test` (a 32-bit portability harness) are not ported.
The `cpp17/` tests are built only when the library is configured for C++17 or later.
Four test fixtures (`map.hpp`, `multimap.hpp`, `unordered_map.hpp`, and
`unordered_multimap.hpp`) carry small patches for newer-toolchain compatibility,
documented alongside as `.orig`/`.patch` pairs.


## Importable targets

This package exports no targets.


## Configuration variables

This package provides no configuration variables.
