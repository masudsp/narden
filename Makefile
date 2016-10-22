#Exporting dpdk sdk location
export RTE_SDK=$(shell pwd)/../dpdk/
export NARDAN_HOME=$(shell pwd)

#default build environment for us
RTE_TARGET ?= x86_64-native-linuxapp-gcc

export RTE_TARGET=build

include $(RTE_SDK)/mk/rte.vars.mk

DIRS-$(CONFIG_RTE_EXEC_ENV_LINUXAPP) += src

include $(RTE_SDK)/mk/rte.extsubdir.mk


