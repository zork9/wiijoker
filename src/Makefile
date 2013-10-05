###CXX=/home/bubble/wii/devkitPPC/bin/powerpc-eabi-c++
CXX=g++
CC=
CXXFLAGS=-I../include
LIBS=-L../lib

all: wiiconfig wiijoker
	$(CXX) -o wiijoker *.o

wiiconfig:
###	@echo "****************************"
###	@echo "Edit the Makefile e.g. the correct powerpc-eabi-c++ crosscompiler, see https://sf.net/projects/devkitpro"
###	@echo "****************************"

wiijoker: main.o fb.o obs.o obs2.o obs_screen.o reg.o vireg.o

clean:
	rm -f *.o wiijoker
