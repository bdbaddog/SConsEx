# SConsEx - Hierarchial SCons Project Example

I am using this project to learn the use of SCons. It is a work in progress and will
evolve as I learn all the techniques I need to make it work properly.

This project demonstrates the building of a hierarchial project consisting of
two libraries and a few testing apps that use those libraries. The core library
is the foundation library, the numerics library depends on the core library. All
of the testing apps depend on the core library and some of them depend on the
numerics library

