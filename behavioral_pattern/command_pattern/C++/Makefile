OBJS = main.o Command.o CopyCommand.o Invoker.o Receiver.o
CFlags = -Wall -Wextra -pedantic -ansi -std=c++11

hello: $(OBJS)
	g++ $(CFlags) -o hello $(OBJS)

%.o:%.cpp
	@echo "Compiling $< ..."
	g++ $(CFlags) -c $<

.PHONY: clean
clean:
	rm -f $(OBJS) hello