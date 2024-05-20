DIR_REPO		?= $(CURDIR)/../../repo
DIR_UPSTREAM	?= $(DIR_REPO)/sys-project/lab4-2
DIR_BUILD		?= $(CURDIR)/build

DIR_GENERAL   	?= $(DIR_UPSTREAM)/general
DIR_SIM			?= $(DIR_UPSTREAM)/sim
DIR_SRC			?= $(CURDIR)/submit
DIR_INCLUDE		?= $(CURDIR)/include
DIR_INCLUDE_CUSTOM		?= $(DIR_UPSTREAM)/include
DIR_SYN			?= $(DIR_UPSTREAM)/syn
DIR_TCL			?= $(DIR_UPSTREAM)/tcl

SIM_BUILD		?= $(DIR_BUILD)/verilate

# part for verilator
VERILATOR_TOP		:= Testbench
VERILATOR_SRCS		=  $(shell find $(DIR_SIM) -name "*.v" -o -name "*.sv" -o -name "*.cpp") \
					   $(shell find $(DIR_SRC) -name "*.v" -o -name "*.sv")\
					   $(shell find $(DIR_GENERAL) -name "*.v" -o -name "*.sv")

VERILATOR_TFLAGS	:= -Wno-STMTDLY --timescale 1ns/10ps --trace
VERILATOR_FLAGS		:= --cc --exe  --main --timing\
						--Mdir $(SIM_BUILD) --top-module $(VERILATOR_TOP)\
						-o $(VERILATOR_TOP) -I$(DIR_INCLUDE) -I$(DIR_INCLUDE_CUSTOM)\
						-CFLAGS "-DVL_DEBUG -DTOP=${VERILATOR_TOP} -std=c++17" 
VERILATOR_DEFINE	:= +define+TOP_DIR=\"$(SIM_BUILD)\" +define+VERILATE

verilate:$(VERILATOR_TOP)
	cd $(SIM_BUILD); ./$(VERILATOR_TOP)

$(VERILATOR_TOP):$(VERILATOR_SRCS)
	mkdir -p $(SIM_BUILD)
	verilator $(VERILATOR_TFLAGS) $(VERILATOR_FLAGS) $(VERILATOR_SRCS) $(VERILATOR_DEFINE)
	make -C $(SIM_BUILD) -f V$(VERILATOR_TOP).mk $(VERILATOR_TOP)

wave:
	gtkwave $(SIM_BUILD)/$(VERILATOR_TOP).vcd

clean_verilate:
	rm -rf $(SIM_BUILD)

# part for vivado
# Replace with your own path, for example:
#   If your Vivado is installed in Windows:   
#   	 VIVADO_SETUP := call D:\App\Xilinx\Vivado\2022.2\settings64.bat
#   or in Linux: 
#        VIVADO_SETUP := source /opt/Xilinx/Vivado/2022.2/settings64.sh
#VIVADO_SETUP		:=  $(error "please set your vivado's path")

CMD_PREFIX			:=	bash -c
PATH_TRANS			:=	realpath
DIR_PROJECT			?=  $(DIR_BUILD)/project
BOARD				?=	xc7a100tcsg324-1
TOP_MODULE			?=	top 

ifneq (,$(findstring microsoft,$(shell uname -a)))
WSLENV				:=	$(WSLENV):DIR_SRC/p:DIR_SYN/p:DIR_TCL/p:DIR_BUILD/p:DIR_INCLUDE/p:DIR_INCLUDE_CUSTOM/p:DIR_GENERAL/p
DIR_PROJECT			:=	/submit
CMD_PREFIX			:=	cmd.exe /c
PATH_TRANS			:=	wslpath -w
endif

export DIR_SRC DIR_SYN DIR_TCL DIR_PROJECT DIR_INCLUDE DIR_INCLUDE_CUSTOM DIR_GENERAL

bitstream:
	mkdir -p $(DIR_PROJECT)
	cd $(DIR_PROJECT); cp $(DIR_TCL)/vivado.tcl .; $(CMD_PREFIX) "$(VIVADO_SETUP) && set DIR_SRC && \
		vivado -mode batch -nojournal -source vivado.tcl -tclargs -top-module $(TOP_MODULE) -board $(BOARD)"

vivado:
	mkdir -p $(DIR_PROJECT)
	cd $(DIR_PROJECT); $(CMD_PREFIX) "$(VIVADO_SETUP) && vivado"

clean_vivado:
	rm -rf $(DIR_PROJECT)

clean:clean_verilate clean_vivado