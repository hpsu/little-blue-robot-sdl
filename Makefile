##########
# GLOBAL #
##########
EXE = little-blue-robot
SDL_INCLUDE = -I/usr/local/include

all: $(EXE) $(EXE)_64.exe

clean:
	rm build/*.o && rm $(EXE) $(EXE)_64.exe

#########
# POSIX #
#########
CXX = g++
CXXFLAGS = -Wall -c -std=c++11 $(SDL_INCLUDE)
SDL_LIB = -L/usr/local/lib -lSDL2 -Wl,-rpath=/usr/local/lib

$(EXE): build/main.o
	$(CXX) $< $(SDL_LIB) -o $@

build/main.o: main.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

##################
# Windows 64-bit #
##################
CXX_WIN64=x86_64-w64-mingw32-g++
CXXFLAGS_WIN64 = $(CXXFLAGS)
SDL_LIB_WIN64 = -static -lmingw32 -lSDL2main -lSDL2 -mwindows  -lwinmm -lole32 -loleaut32 -limm32 -lversion

win64: $(EXE)_64.exe

$(EXE)_64.exe: build/main_win64.o
	$(CXX_WIN64) $< $(SDL_LIB_WIN64) -o $@

build/main_win64.o: main.cpp
	$(CXX_WIN64) $(CXXFLAGS_WIN64) $< -o $@
