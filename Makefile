include ../Makefile.common

OUTPUT_D =../../build/cpp
SOLVER = $(OUTPUT_D)/LuckyXorSolver
COMPILER = g++ -std=gnu++0x -I$(GETTC_HOME)/include/cpp

$(SOLVER): LuckyXorSolver.cpp LuckyXor.cpp
	$(COMPILER) -o $(SOLVER) $<

main: setup $(SOLVER)
