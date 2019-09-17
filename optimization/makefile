CXX = clang++
CXXFLAGS = -std=c++11 -Wall -Wextra -pedantic -g
LDFLAGS = -std=c++11 -Wall -Wextra -pedantic -g

all: run

common_elements.o: common_elements.cpp
	$(CXX) $(CXXFLAGS) -c common_elements.cpp

run: common_elements.o
	$(CXX) $(LDFLAGS) -o run common_elements.o

clean:
	rm *.o run
