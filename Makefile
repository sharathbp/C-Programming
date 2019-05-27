CXX = g++
CXXFLAGS = -lbgi -lgdi32

IPATH1 = .\\dependencies\\graphics\\include
LPATH1 = .\\dependencies\\graphics\\lib

all: TajMahal

TajMahal: main.o  
	$(CXX) "-I$(IPATH1)" "-L$(LPATH1)" -o .\\bin\\TajMahal.exe .\\bin\\main.o $(CXXFLAGS)

main.o: .\\main.cpp
	$(CXX) "-I$(IPATH1)" -c -o .\\bin\\main.o  .\\main.cpp

clean:
	del .\\bin\\*.o .\\bin\\*.exe