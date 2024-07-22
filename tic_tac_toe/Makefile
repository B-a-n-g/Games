.PHONY: clean
CXXFLAGS=-g -O3 -Wall -Wextra -Wno-unused-parameter -std=c++20 $(SANFLAGS)

SANFLAGS=-fsanitize=undefined,address,leak

main: main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LIBS)

clean:
	rm -f main