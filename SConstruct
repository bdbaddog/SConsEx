print("************************************* [Building SconsEx]")

import os

# Setup environment/settings
env = Environment()

debug_env   = env.Clone(CCFLAGS = '-g')
release_env = env.Clone(CCFLAGS = '-O2')

env.Append(CPPPATH='#/packages')
env['LIBPATH']=['#/lib']
# Ordered build ...
SubDirs = [
   'packages',
   'testing'
]

for subDir in SubDirs:
    SConscript(os.path.join(subDir, 'SConscript'), exports = ['env'])
