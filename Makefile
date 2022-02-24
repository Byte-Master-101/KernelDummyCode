SOURCE	:= main.c dummy1.c
OUTPUT	:= out

# default rule
default: all

# phony rules
.PHONY: all

all:
	@gcc -o $(OUTPUT) $(SOURCE)
