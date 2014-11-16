#Vishesh Choudhry vic3df 10-20-13
CXX=clang++ $(CXXFLAGS)
CXXFLAGS=-Wall -O2
DEBUG=-Wall -g

.SUFFIXES: .o .cpp
OFILES= astarcrawl.o timer.o Node.o
main: $(OFILES)
	$(CXX) $(DEBUG) $(OFILES)
	@echo "A* Crawl is ready!"

clean:
	-rm -f  *.o astarcrawl

timer.o: timer.cpp timer.h
astarcrawl.o: astarcrawl.cpp Node.h
Node.o: Node.cpp
