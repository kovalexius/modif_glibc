ifeq ($(subdir),string)
sysdep_routines += align-cpy
endif

ifeq ($(have-as-vis3),yes)
ASFLAGS-.o += -Wa,-Av9d
ASFLAGS-.os += -Wa,-Av9d
ASFLAGS-.op += -Wa,-Av9d
ASFLAGS-.og += -Wa,-Av9d
ASFLAGS-.oS += -Wa,-Av9d
endif

# nscd uses atomic_spin_nop which in turn requires cpu_relax
ifeq ($(subdir),nscd)
routines += cpu_relax
endif

ifeq ($(subdir),nptl)
libpthread-routines += cpu_relax
endif
