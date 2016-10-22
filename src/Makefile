ifeq ($(RTE_SDK),)
$(error "Please define RTE_SDK environment variable")
endif


include $(RTE_SDK)/mk/rte.vars.mk

APP = nardan

# all source are stored in SRCS-y
SRCS-y := nardan_main.c 

CFLAGS += -Wno-unused-parameter $(WERROR_FLAGS) -I$(NARDAN_HOME)/include/ \


EXTRA_LDFLAGS += -L/usr/lib 

# workaround for a gcc bug with noreturn attribute
# http://gcc.gnu.org/bugzilla/show_bug.cgi?id=12603
ifeq ($(CONFIG_RTE_TOOLCHAIN_GCC),y)
CFLAGS_main.o += -Wno-return-type
endif

EXTRA_CFLAGS += -g -Wfatal-errors

include $(RTE_SDK)/mk/rte.extapp.mk

