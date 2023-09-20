# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))
WRVX_COMPBASE := $(subst \,/,$(WRVX_COMPBASE))
WIND_KRNL_MK := $(subst \,/,$(WIND_KRNL_MK))
WIND_USR_MK := $(subst \,/,$(WIND_USR_MK))
WIND_BUILD := $(subst \,/,$(WIND_BUILD))
WIND_BUILD_TOOL := $(subst \,/,$(WIND_BUILD_TOOL))

all : check_vsb pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

JOBS?=1
TARGET_JOBS?=$(JOBS)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = vsb_vxsim_linux_SIMLINUXgnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := /home/luca/workspace
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/Assignment3



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0
APICHECK_OPTIONS = -warning


#BuildSpec specific Build Macros
VX_CPU_FAMILY = simlinux
CPU = SIMLINUX
TOOL_FAMILY = gnu
TOOL_VERSION = gnu_4_8_1_8
_CC_VERSION = gnu_4_8_1_11
TOOL = gnu
TOOL_PATH = $(WIND_HOME)/compilers/gnu-4.8.1.11/$(WIND_VX7_GNU_HOST_TYPE)/bin
CC_ARCH_SPEC = -m32 -mfpmath=387 -fno-builtin -fno-implicit-fp -fno-omit-frame-pointer -nostdlib -fno-defer-pop
VSB_DIR = $(WIND_BASE)/samples/prebuilt_projects/vsb_vxsim_linux
VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
LIBPATH = 
LIBS = 
DKM_LONGCALL = 
BDGEN_VSB_INCLUDE = $(VSB_DIR)/h/config/auto.conf
APICHECK_CMD = apicheck.sh -r "$(VSB_DIR)/krnl/apicheck/forbidden_api.lst" -n "nmpentium" -u -s "$<" "$@" $(APICHECK_OPTIONS)
APICHECK = 0

IDE_INCLUDES = -I$(VSB_DIR)/share/h -isystem$(VSB_DIR)/krnl/h/system -isystem$(VSB_DIR)/krnl/h/public 

IDE_LIBRARIES = 

IDE_DEFINES = -DCPU=_VX_$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL -D_VSB_CONFIG_FILE=\"$(VSB_DIR)/h/config/vsbConfig.h\"   



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -gdwarf-3
DEBUGFLAGS_C++-Compiler = -gdwarf-3
DEBUGFLAGS_Linker = -gdwarf-3
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -gdwarf-3
else
DEBUGFLAGS_C-Compiler = -O2
DEBUGFLAGS_C++-Compiler = -O2
DEBUGFLAGS_Linker = -O2
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2
endif


#Project Targets
PROJECT_TARGETS = Assignment3/$(MODE_DIR)/Assignment3.out \
	 Assignment3_partialImage/$(MODE_DIR)/Assignment3_partialImage.o


#Rules

# Assignment3
ifeq ($(DEBUG_MODE),1)
Assignment3/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -gdwarf-3
Assignment3/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -gdwarf-3
Assignment3/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -gdwarf-3
Assignment3/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Assignment3/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Assignment3/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -gdwarf-3
else
Assignment3/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2
Assignment3/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2
Assignment3/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2
Assignment3/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Assignment3/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Assignment3/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2
endif
Assignment3/$(MODE_DIR)/% : IDE_INCLUDES = -I$(VSB_DIR)/share/h -isystem$(VSB_DIR)/krnl/h/system -isystem$(VSB_DIR)/krnl/h/public 
Assignment3/$(MODE_DIR)/% : IDE_LIBRARIES = 
Assignment3/$(MODE_DIR)/% : IDE_DEFINES = -DCPU=_VX_$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL -D_VSB_CONFIG_FILE=\"$(VSB_DIR)/h/config/vsbConfig.h\"   
Assignment3/$(MODE_DIR)/% : PROJECT_TYPE = DKM
Assignment3/$(MODE_DIR)/% : DEFINES = 
Assignment3/$(MODE_DIR)/% : EXPAND_DBG = 0
Assignment3/$(MODE_DIR)/% : APICHECK_OPTIONS = -warning
Assignment3/$(MODE_DIR)/% : VX_CPU_FAMILY = simlinux
Assignment3/$(MODE_DIR)/% : CPU = SIMLINUX
Assignment3/$(MODE_DIR)/% : TOOL_FAMILY = gnu
Assignment3/$(MODE_DIR)/% : TOOL_VERSION = gnu_4_8_1_8
Assignment3/$(MODE_DIR)/% : _CC_VERSION = gnu_4_8_1_11
Assignment3/$(MODE_DIR)/% : TOOL = gnu
Assignment3/$(MODE_DIR)/% : TOOL_PATH = $(WIND_HOME)/compilers/gnu-4.8.1.11/$(WIND_VX7_GNU_HOST_TYPE)/bin
Assignment3/$(MODE_DIR)/% : CC_ARCH_SPEC = -m32 -mfpmath=387 -fno-builtin -fno-implicit-fp -fno-omit-frame-pointer -nostdlib -fno-defer-pop
Assignment3/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/samples/prebuilt_projects/vsb_vxsim_linux
Assignment3/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
Assignment3/$(MODE_DIR)/% : LIBPATH = 
Assignment3/$(MODE_DIR)/% : LIBS = 
Assignment3/$(MODE_DIR)/% : DKM_LONGCALL = 
Assignment3/$(MODE_DIR)/% : BDGEN_VSB_INCLUDE = $(VSB_DIR)/h/config/auto.conf
Assignment3/$(MODE_DIR)/% : APICHECK_CMD = apicheck.sh -r "$(VSB_DIR)/krnl/apicheck/forbidden_api.lst" -n "nmpentium" -u -s "$<" "$@" $(APICHECK_OPTIONS)
Assignment3/$(MODE_DIR)/% : APICHECK = 0
Assignment3/$(MODE_DIR)/% : OBJ_DIR := Assignment3/$(MODE_DIR)

OBJECTS_Assignment3 = Assignment3_partialImage/$(MODE_DIR)/Assignment3_partialImage.o

checkDirAssignment3 : 
	mkdir -p Assignment3/$(MODE_DIR)/
Assignment3/$(MODE_DIR)/.Assignment3Object.list: $(OBJECTS_Assignment3) | checkDirAssignment3
	$(file >$@,$^)
ifeq ($(TARGET_JOBS),1)
Assignment3/$(MODE_DIR)/Assignment3.out : Assignment3/$(MODE_DIR)/.Assignment3Object.list | check_objdirs
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmpentium @Assignment3/$(MODE_DIR)/.Assignment3Object.list | tclsh $(WIND_BASE)/build/mk/tcl/munch.tcl -c pentium -tags $(VSB_DIR)/krnl/tags/dkm.tags > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)/ccpentium $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall   $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES)  $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c;  $(TOOL_PATH)/ccpentium -r -nostdlib -Wl,-X -T $(WIND_BASE)/build/tool/gnu_4_8_1_8/krnl/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o @Assignment3/$(MODE_DIR)/.Assignment3Object.list $(IDE_LIBRARIES) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi && $(if $(_WRS_CONFIG_SECURE_LOADER),signtool  --key=$(_WRS_CONFIG_SECURE_LOADER_PRIVATE_SIGNING_KEY_FILE) --cert=$(_WRS_CONFIG_SECURE_LOADER_PUBLIC_SIGNING_CERT_FILE) --type=ELF $@,true) && true

else
Assignment3/$(MODE_DIR)/Assignment3.out : Assignment3/$(MODE_DIR)/Assignment3.out_jobs

endif
Assignment3/$(MODE_DIR)/Assignment3_compile_file : $(FILE) ;

_clean :: Assignment3/$(MODE_DIR)/Assignment3_clean

Assignment3/$(MODE_DIR)/Assignment3_clean : 
	$(TRACE_FLAG)if [ -d "Assignment3" ]; then cd "Assignment3"; rm -rf $(MODE_DIR); fi


# Assignment3_partialImage
ifeq ($(DEBUG_MODE),1)
Assignment3_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -gdwarf-3
Assignment3_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -gdwarf-3
Assignment3_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -gdwarf-3
Assignment3_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Assignment3_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Assignment3_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -gdwarf-3
else
Assignment3_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2
Assignment3_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2
Assignment3_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2
Assignment3_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Assignment3_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Assignment3_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2
endif
Assignment3_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(VSB_DIR)/share/h -isystem$(VSB_DIR)/krnl/h/system -isystem$(VSB_DIR)/krnl/h/public 
Assignment3_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = 
Assignment3_partialImage/$(MODE_DIR)/% : IDE_DEFINES = -DCPU=_VX_$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL -D_VSB_CONFIG_FILE=\"$(VSB_DIR)/h/config/vsbConfig.h\"   
Assignment3_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
Assignment3_partialImage/$(MODE_DIR)/% : DEFINES = 
Assignment3_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
Assignment3_partialImage/$(MODE_DIR)/% : APICHECK_OPTIONS = -warning
Assignment3_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = simlinux
Assignment3_partialImage/$(MODE_DIR)/% : CPU = SIMLINUX
Assignment3_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
Assignment3_partialImage/$(MODE_DIR)/% : TOOL_VERSION = gnu_4_8_1_8
Assignment3_partialImage/$(MODE_DIR)/% : _CC_VERSION = gnu_4_8_1_11
Assignment3_partialImage/$(MODE_DIR)/% : TOOL = gnu
Assignment3_partialImage/$(MODE_DIR)/% : TOOL_PATH = $(WIND_HOME)/compilers/gnu-4.8.1.11/$(WIND_VX7_GNU_HOST_TYPE)/bin
Assignment3_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -m32 -mfpmath=387 -fno-builtin -fno-implicit-fp -fno-omit-frame-pointer -nostdlib -fno-defer-pop
Assignment3_partialImage/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/samples/prebuilt_projects/vsb_vxsim_linux
Assignment3_partialImage/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
Assignment3_partialImage/$(MODE_DIR)/% : LIBPATH = 
Assignment3_partialImage/$(MODE_DIR)/% : LIBS = 
Assignment3_partialImage/$(MODE_DIR)/% : DKM_LONGCALL = 
Assignment3_partialImage/$(MODE_DIR)/% : BDGEN_VSB_INCLUDE = $(VSB_DIR)/h/config/auto.conf
Assignment3_partialImage/$(MODE_DIR)/% : APICHECK_CMD = apicheck.sh -r "$(VSB_DIR)/krnl/apicheck/forbidden_api.lst" -n "nmpentium" -u -s "$<" "$@" $(APICHECK_OPTIONS)
Assignment3_partialImage/$(MODE_DIR)/% : APICHECK = 0
Assignment3_partialImage/$(MODE_DIR)/% : OBJ_DIR := Assignment3_partialImage/$(MODE_DIR)

Assignment3_partialImage/$(MODE_DIR)/Objects/Assignment3/applications.o : $(PRJ_ROOT_DIR)/applications.c $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/ccpentium $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -fno-zero-initialized-in-bss -Wall    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -o "$@" -c "$<" && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


Assignment3_partialImage/$(MODE_DIR)/Objects/Assignment3/dummyTask.o : $(PRJ_ROOT_DIR)/dummyTask.c $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/ccpentium $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -fno-zero-initialized-in-bss -Wall    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -o "$@" -c "$<" && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


Assignment3_partialImage/$(MODE_DIR)/Objects/Assignment3/metascheduler.o : $(PRJ_ROOT_DIR)/metascheduler.c $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/ccpentium $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -fno-zero-initialized-in-bss -Wall    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -o "$@" -c "$<" && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


Assignment3_partialImage/$(MODE_DIR)/Objects/Assignment3/resources.o : $(PRJ_ROOT_DIR)/resources.c $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/ccpentium $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -fno-zero-initialized-in-bss -Wall    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -o "$@" -c "$<" && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


Assignment3_partialImage/$(MODE_DIR)/Objects/Assignment3/simulation.o : $(PRJ_ROOT_DIR)/simulation.c $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/ccpentium $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -fno-zero-initialized-in-bss -Wall    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -o "$@" -c "$<" && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


OBJECTS_Assignment3_partialImage = Assignment3_partialImage/$(MODE_DIR)/Objects/Assignment3/applications.o \
	 Assignment3_partialImage/$(MODE_DIR)/Objects/Assignment3/dummyTask.o \
	 Assignment3_partialImage/$(MODE_DIR)/Objects/Assignment3/metascheduler.o \
	 Assignment3_partialImage/$(MODE_DIR)/Objects/Assignment3/resources.o \
	 Assignment3_partialImage/$(MODE_DIR)/Objects/Assignment3/simulation.o

checkDirAssignment3_partialImage : 
	mkdir -p Assignment3_partialImage/$(MODE_DIR)/
Assignment3_partialImage/$(MODE_DIR)/.Assignment3_partialImageObject.list: $(OBJECTS_Assignment3_partialImage) | checkDirAssignment3_partialImage
	$(file >$@,$^)
ifeq ($(TARGET_JOBS),1)
Assignment3_partialImage/$(MODE_DIR)/Assignment3_partialImage.o : Assignment3_partialImage/$(MODE_DIR)/.Assignment3_partialImageObject.list | check_objdirs
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";  $(TOOL_PATH)/ccpentium -r -nostdlib -Wl,-X  -o "$@" @Assignment3_partialImage/$(MODE_DIR)/.Assignment3_partialImageObject.list $(ADDED_OBJECTS) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

else
Assignment3_partialImage/$(MODE_DIR)/Assignment3_partialImage.o : Assignment3_partialImage/$(MODE_DIR)/Assignment3_partialImage.o_jobs

endif
Assignment3_partialImage/$(MODE_DIR)/Assignment3_partialImage_compile_file : $(FILE) ;

_clean :: Assignment3_partialImage/$(MODE_DIR)/Assignment3_partialImage_clean

Assignment3_partialImage/$(MODE_DIR)/Assignment3_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "Assignment3_partialImage" ]; then cd "Assignment3_partialImage"; rm -rf $(MODE_DIR); fi

force : 

TARGET_JOBS_RULE?=echo "Update the makefile template via File > Import > Build Settings : Update makefile template";exit 1
%_jobs : 
	$(TRACE_FLAG)$(TARGET_JOBS_RULE)

DEP_FILES := Assignment3_partialImage/$(MODE_DIR)/Objects/Assignment3/applications.d Assignment3_partialImage/$(MODE_DIR)/Objects/Assignment3/dummyTask.d Assignment3_partialImage/$(MODE_DIR)/Objects/Assignment3/metascheduler.d \
	 Assignment3_partialImage/$(MODE_DIR)/Objects/Assignment3/resources.d Assignment3_partialImage/$(MODE_DIR)/Objects/Assignment3/simulation.d
-include $(DEP_FILES)

OBJ_DIRS := Assignment3_partialImage/$(MODE_DIR)/Objects/Assignment3
check_objdirs : 
	$(TRACE_FLAG)echo "Creating object dirs";\
	for dir in $(OBJ_DIRS); do\
		if [ ! -d "$$dir" ]; then mkdir -p "$$dir"; fi;\
	done


ifdef BDGEN_VSB_INCLUDE
include $(BDGEN_VSB_INCLUDE)
endif

-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

TARGET_JOBS_RULE=$(MAKE) -f $(MAKEFILE) --jobs $(TARGET_JOBS) $(MFLAGS) $* TARGET_JOBS=1
ifeq ($(JOBS),1)
main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"
else
main_all : external_build 
	@$(MAKE) -f $(MAKEFILE) --jobs $(JOBS) $(MFLAGS) $(PROJECT_TARGETS) TARGET_JOBS=1 &&\
	echo "make: built targets of `pwd`"
endif 

check_vsb :
	@if [ "$(SKIP_VSB_CHECK)" = "" ]; then\
		if [ -f $(WIND_BASE)/build/mk/scripts/check_vsb.sh ]; then\
			jobsoption="";\
			if [ "$(JOBS)" != "" ]; then\
				jobsoption="-j $(JOBS)";\
			fi;\
			sh $(WIND_BASE)/build/mk/scripts/check_vsb.sh $$jobsoption $(VSB_DIR);\
		fi;\
	fi

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: check_objdirs $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
