CXX = g++
CXX_WIN64=x86_64-w64-mingw32-g++

# main.o -o rockman.exe   -L/usr/x86_64-w64-mingw32/lib -L/usr/x86_64-w64-mingw32/lib -lSDL2_image -lmingw32 -lSDL2main -lSDL2 -mwindows -lwinpthread -l:/usr/x86_64-w64-mingw32/lib/libwinpthread.a -lwinmm -lole32 -loleaut32 -limm32 -lversion

# Update these paths to match your installation
# You may also need to update the linker option rpath, which sets where to look for
# the SDL2 libraries at runtime to match your install
SDL_LIB = -L/usr/local/lib -lSDL2 -l SDL2_image -Wl,-rpath=/usr/local/lib
SDL_LIB_WIN64 = -L/usr/x86_64-w64-mingw32/lib -L/usr/x86_64-w64-mingw32/lib -lSDL2_image -lmingw32 -lSDL2main -lSDL2 -mwindows -lwinpthread -lwinmm -lole32 -loleaut32 -limm32 -lversion
SDL_INCLUDE = -I/usr/local/include

# You may need to change -std=c++11 to -std=c++0x if your compiler is a bit older
CXXFLAGS = -Wall -c -std=c++11 $(SDL_INCLUDE)
CXXFLAGS_WIN64 = -static -static-libstdc++ -static-libgcc $(CXXFLAGS)
LDFLAGS = $(SDL_LIB)
EXE = rockman

all: $(EXE) $(EXE)_64.exe

win64: $(EXE)_64.exe

$(EXE)_64.exe: main_win64.o
	$(CXX_WIN64) $< $(SDL_LIB_WIN64) -o $@

$(EXE): main.o
	$(CXX) $< $(LDFLAGS) -o $@

main_win64.o: main.cpp
	$(CXX_WIN64) $(CXXFLAGS_WIN64) $< -o $@

main.o: main.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm *.o && rm $(EXE) $(EXE)_64.exe
