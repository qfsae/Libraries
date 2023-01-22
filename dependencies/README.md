# Dependencies Library
The Dependencies Library was created to reduce conflicts between other QFSAE libraries. The dependencies library is published under the PlatformIO libraries registry.

## Purpose
The purpose of the library is to house all structures passed between libraries.  By including this library as a dependency of other libraries, object and structure definitions can be shared between libraries without double definition conflicts or compiler errors.

## Inclusion of this Library
Since this library is published as a standard PIO library, it can be included as such.  When publishing other libraries into this monolith, ensure that this library is added as a dependency within the `library.json`.

## Authors
- Jacob Chisholm
- Ethan Peterson