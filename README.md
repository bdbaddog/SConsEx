# SConsEx - Hierarchial SCons Project Example

I am using this project to learn the use of SCons. It is a work in progress and will
evolve as I learn all the techniques I need to make it work properly.

- The intent of this project is to demonstrate the building of a hierarchial project

- This project consists of two libraries and a few testing apps that use those libraries

- The core library is the foundation library, everything in this project depends on it

- The numerics library depends on the core library

- All of the testing apps depend on the core library

- Some of the testing apps depend on the numerics library

