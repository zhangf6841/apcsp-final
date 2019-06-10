TARGET = gpacalc
LIBS = -lm
CC = gcc
CFLAGS = -g -Wall -I.

.PHONY: clean all default

default: $(TARGET)
all: default

HEADERS = gpacalc.h
OBJECTS = gpacalc.c

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJECTS)
	$(CC) $^ $(LIBS) -o $@

clean:
	-rm -f *.o
	-rm -f $(TARGET)
