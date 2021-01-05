#
# nsock regression test suite
# Same license as nmap -- see https://nmap.org/book/man-legal.html
##

NBASEDIR=/Users/cyan/Downloads/nmap-7.91/nbase
NSOCKLIB=../src/libnsock.a
NBASELIB=$(NBASEDIR)/libnbase.a

CC 	= gcc
CPPFLAGS =  -I/usr/local/opt/openssl@1.1//include -I/Users/cyan/Downloads/nmap-7.91/nbase -I../include
CFLAGS	= -g -O2 -Wall 
LDFLAGS	=  -L/usr/local/opt/openssl@1.1//lib -L/Users/cyan/Downloads/nmap-7.91/nbase
LIBS	= -lssl -lcrypto -lpcap 

SRC = tests_main.c \
      basic.c \
      timer.c \
      logs.c \
      connect.c \
      ghlists.c \
      ghheaps.c \
      cancel.c

OBJ = $(SRC:.c=.o)

EXE = tests_main

all: $(SRC) $(EXE)

$(EXE): $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $@ $(NSOCKLIB) $(NBASELIB) $(LIBS)

.c.o:
	$(CC) -c $(CPPFLAGS) $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJ) $(EXE)

rebuild: clean $(EXE)

.PHONY: clean rebuild
