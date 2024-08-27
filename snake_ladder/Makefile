CC = g++ 
HEADERS = $(wildcard *.hpp)
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o) 
game : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o:%.cpp $(HEADERS)
	$(CC) $(CFLAGS) -o $@ -c $<

clean :
	find . -name '*.o' -type f -delete

