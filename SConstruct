import os
import atexit

prg_files = ['ma', 'joe']
lib_files = 'libcma.so'
hdr_files = ['cma.h', 'debug.h']

Help("""
CC: 'gcc'
CCFLAGS: '-w', '-O2'
	""")

def print_build_failures():
	from SCons.Script import GetBuildFailures
	for bf in GetBuildFailures():
		print "%s failed: %s" % (bf.node, bf.errstr)

atexit.register(print_build_failures)

AddOption('--prefix',
	dest='prefix',
	type='string',
	nargs=1,
	action='store',
	metavar='DIR',
	help='installation prefix')

env = Environment(PREFIX = GetOption('prefix'),
	CC = 'gcc',
	CCFLAGS = ['-w', '-O2'],
	ENV = {'PATH' : os.environ['PATH']})

Alias("build", env.SharedLibrary('libcma.so', 'cma.c'))
Alias("build", env.Program('ma', 'ma.c', LIBS='libcma.so', LIBPATH='.'))
Alias("build", env.Program('joe', 'joe.c', LIBS='libcma.so', LIBPATH='.'))

Alias("install", env.Install(dir="$PREFIX/usr/include/cma", source=hdr_files))
Alias("install", env.Install(dir="$PREFIX/usr/lib", source=lib_files))
Alias("install", env.Install(dir="$PREFIX/usr/bin", source=prg_files))

os.system('export LD_LIBRARY_PATH=.')

