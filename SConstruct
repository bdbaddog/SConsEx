print("************************************* [Building SconsEx]")

import os

# Setup environment
env = Environment()

# Build settings
debug_env   = env.Clone(CCFLAGS = '-g')
release_env = env.Clone(CCFLAGS = '-O2')

# Ordered build ...
Scripts = [
   'packages/SConstruct',
   'testing/SConstruct'
]

for script in Scripts:
   SConscript( script )

