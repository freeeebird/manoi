# File: Makefile.am
#
# (c) 2008, Bjoern Rennhak
#
# Barebone of the Autoconf toolchain.
# Process this file with automake to produce a Makefile.in for Autoconf.
#


# Compiler binaries like CC, AS, LD are given in the Rakefile together with the ./configure 


# Specifies the Target Directory for "make install", here we want the executable to be installed in /bin
bin_PROGRAMS   = manoi

# To generate this line use e.g.
# % find -type f -iname "*.c" -or -iname "*.h" -or -iname "*.hpp" -or -iname "*.cpp" | grep -v archive | xargs | sed 's/\.\///g'
# or better
# % rake files_for_autotools
manoi_SOURCES = CRobot.cpp AssemblyInfo.cpp CRobot.h resource.h ManoiControl.cpp stdafx.cpp Form1.h stdafx.h

#minimalCLibrary = minimalCLibrary/MStrlen.c minimalCLibrary/MStrcmp.c minimalCLibrary/MStrncmp.c minimalCLibrary/MMemcpy.c \
#                  minimalCLibrary/MItoa.c minimalCLibrary/MMemset.c \
#                  minimalCLibrary/MToUpper.c minimalCLibrary/MToLower.c \
#                  minimalCLibrary/MUsleep.c
#                  # MUSleep.c needs to be fixed !
#


# WARNING: -O3 could lead to a GC failure because maybe valid pointers get optimized out which lead to GC.
# http://www.hpl.hp.com/personal/Hans_Boehm/gc/issues.html
# -DNDEBUG                              # turns asserts off       
# -DLINUX -DLOG4C_RCPATH=$(LOG4C_RCPATH)

# LINKLIBS = -llog4c -lexpat -lpthread -lgc -ltap                                                                                     
# LINKLIBS = -llog4c -lexpat -lpthread -lmcheck                                                                                      
# mcheck is for memory checking during development (mcheck() is called automatically)                                               
# see http://www.linuxjournal.com/article/6390 for memory debugging.                                                                
# $ gcc -g Listing_3.c -o Listing_3                                                                                                 
# $ MALLOC_TRACE="trace.log" ./Listing_3                                                                                            
# $ mtrace trace.log                                                                                                                
#                                                                                                                                      
# or: export GC_PRINT_STATS=

manoi_CFLAGS = --static --std=gnu9x -Wshadow -Wall -g -D DEBUG -O0
INCLUDES= 	-I .												 \
						-I ..

# BDW GC		find ../base/bdwgc -type f -iname "*.a" | egrep -iv "archive|templates" | xargs
# bart_LDFLAGS = ../base/bdwgc/.libs/libcord.a ../base/bdwgc/.libs/libgc.a
# If any library A depends on symbols defined in library B, then library A should appear first in
# the list supplied to the linker
manoi_LDFLAGS =	-L /lib \
								-L /usr/lib

#LIBS = ../base/getopt/my_getopt.o 
#			 ../base/bdwgc/allchblk.o ../base/bdwgc/alloc.o ../base/bdwgc/atomic_ops.o ../base/bdwgc/backgraph.o ../base/bdwgc/blacklst.o ../base/bdwgc/checksums.o ../base/bdwgc/dbg_mlc.o ../base/bdwgc/dyn_load.o ../base/bdwgc/finalize.o ../base/bdwgc/gc_dlopen.o ../base/bdwgc/gcj_mlc.o ../base/bdwgc/headers.o ../base/bdwgc/mach_dep.o ../base/bdwgc/malloc.o ../base/bdwgc/mallocx.o ../base/bdwgc/mark.o ../base/bdwgc/mark_rts.o ../base/bdwgc/misc.o ../base/bdwgc/new_hblk.o ../base/bdwgc/obj_map.o ../base/bdwgc/os_dep.o ../base/bdwgc/pcr_interface.o ../base/bdwgc/pthread_stop_world.o ../base/bdwgc/pthread_support.o ../base/bdwgc/ptr_chck.o ../base/bdwgc/real_malloc.o ../base/bdwgc/reclaim.o ../base/bdwgc/specific.o ../base/bdwgc/stubborn.o ../base/bdwgc/thread_local_alloc.o ../base/bdwgc/typd_mlc.o

# Why is this necessary? Why doesn't etc. -lgc suffice?
#LIBS =	../base/getopt/.libs/libmy_getopt.a 
#				../base/bdwgc/.libs/libgc.a 
#				/usr/lib/libpthread.a
#				../base/bdwgc/.libs/libcord.a


# Change flags for the CGraph generation
#if CGRAPH
#    bart_LINK = `which gcc` -o $@ 
#    bart_CFLAGS   += -fdump-ipa-cgraph -DSTANDALONE  -I ../base/bdwgc/include/
#    bart_CXXFLAGS += -fdump-ipa-cgraph -DSTANDALONE
#    # bart_SOURCES  += Main.c support/getopt/getopt.h support/getopt/my_getopt.h support/getopt/my_getopt.c support/parser.h support/parser.c support/trace.c support/trace.h support/helpers.h support/helpers.c
#    x# bart_LDADD = ../bus-util.o ../message.o ../bus-arith.o ../error.o
#endif

# Howto construct some psycho rules..
# if BIOS
#     bart_SOURCES  += $(minimalCLibrary)
#     bart_CFLAGS   += -melf -mabi=mmixware -mno-base-addresses #-Wl,--oformat elf64-mmix #,--entry=_start.
#     bart_CXXFLAGS += -melf -mabi=mmixware -mno-base-addresses #-Wl,--oformat elf64-mmix #,--entry=_start.
# 
#     # Necessary to link bios properly - taken from ../rom/Makefile
#     BIOSFLAGS = -t -T ../rom/bios.x --section-start .BIOS=0x8000000000000000 --entry=0x8000000000000000 --entry=_start.
# 
#     # This is a ugly hack for Automake, how do you actually do this without this trick?!
#     # To figure out what is needed for the linking phase use, gcc -0 -c ... ; gcc -v -o ..
#     bart_LINK = `which mmix-ld` $(BIOSFLAGS) --oformat elf64-mmix -o $@ $^ ; echo  # -lc ; echo
#     bart_LDADD = ../rom/bios.o
# 
#     # Lets create a second executable in binary format
#     bin_PROGRAMS += bart_binary
#     bart_binary_SOURCES = $(bart_SOURCES) $(minimalCLibrary)
#     bart_binary_CFLAGS = -Wall -g -melf -mabi=mmixware
#     bart_binary_CXXFLAGS = -Wall -g -melf -mabi=mmixware
#     
#     # --fatal-warnings and --verbose can be useful
#     bart_binary_LINK = `which mmix-ld` --verbose $(BIOSFLAGS) --oformat binary -o $@ $^ ; echo  # -lc ; echo
#     bart_binary_LDADD = ../rom/bios.o
# 
#     # Define the Vesper flag if we want to include disk simulator support.
# if VESPER
#     bart_CFLAGS += -DVESPER
#     bart_CXXFLAGS += -DVESPER
#     bart_binary_CFLAGS += -DVESPER
#     bart_binary_CXXFLAGS += -DVESPER
# 
#     bart_LDADD += diskSimulator/mmix_c_vesper_profiles_elf64-IBM18G-scaled.o
#     bart_binary_LDADD += diskSimulator/mmix_c_vesper_profiles_elf64-IBM18G-scaled.o
# endif
# 
# endif
 

#if STANDALONE
#    bart_LINK = `which gcc` -o $@ 
#    bart_CFLAGS   += -DSTANDALONE
#    bart_CXXFLAGS += -DSTANDALONE
#
#    # Standalone - These switches are used if --enable-standalone is given
#    # bart_LDADD = ../bus-util.o ../message.o ../bus-arith.o ../error.o
#    # bart_SOURCES += 
#endif


