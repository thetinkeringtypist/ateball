#!
#  ateball: the command-line Magic Eight (8) Ball!
# 
#  Copyright (C) 2013 Evan Bezeredi; bezeredi dot dev at gmail dot com
#
#  This program is free software: you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation, either version 3 of the License, or
#  (at your option) any later version.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with this program.  If not, see http://www.gnu.org/licenses/.
#!

CC = gcc
CFLAGS = -O2
DEBUG = -g
INCL_DIR = -Iinclude
SRCS = src/main.c src/answers.c
HEADS = answers.h
PROG = bin/ateball

all: answers.o main.o
	$(CC) $(CFLAGS) $(DEBUG) obj/*.o -o $(PROG)
main.o: src/main.c $(HEAD)
	$(CC) -c $(CFLAGS) $(DEBUG) $(INCL_DIR) src/main.c -o obj/main.o
answers.o: src/answers.c $(HEAD)
	$(CC) -c $(CFLAGS) $(DEBUG) $(INCL_DIR) src/answers.c -o obj/answers.o

run:
	bin/ateball

clean:
	rm -rf obj/* $(PROG)

