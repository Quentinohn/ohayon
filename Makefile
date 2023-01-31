CXXFLAGS = -Wall
CXX = g++ -g -c -O0 -o
objects = main.o Character.o Mario.o Yoshi.o
mario = Mario.cpp Mario.h
yoshi = Yoshi.cpp Yoshi.h

.PHONY: clean

main : $(objects)
	g++ -O0 -o $@ $(objects)

main.o : main.cpp Character.h Mario.h Yoshi.h
	$(CXX) $@ $< $(CXXFLAGS)

Character.o : Character.cpp Character.h
	$(CXX) $@ $< $(CXXFLAGS)

Mario.o : $(mario) Character.h
	$(CXX) $@ $< $(CXXFLAGS)

Yoshi.o : $(yoshi) Character.h
	$(CXX) $@ $< $(CXXFLAGS)
clean:
	-$(RM) main $(objects)
