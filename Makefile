# Simple Makefile for Projects 2 and 3

srcdir  = .

CC      = gcc
EXE	= 
CFLAGS  = -m32

all:	
	@echo "You need to type either \"make proj2\" or \"make proj3\""

proj2$(EXE): $(srcdir)/tlb.o $(srcdir)/cpu.o $(srcdir)/mmu.o $(srcdir)/page.o $(srcdir)/kernel.o
	$(CC) -o proj2$(EXE) $(CFLAGS) $(srcdir)/tlb.o $(srcdir)/cpu.o $(srcdir)/mmu.o $(srcdir)/page.o $(srcdir)/kernel.o

proj3$(EXE):  $(srcdir)/tlb.o $(srcdir)/cpu.o $(srcdir)/mmu.o $(srcdir)/page.o $(srcdir)/kernel.o
	$(CC) -o proj3$(EXE) $(CFLAGS) $(srcdir)/tlb.o $(srcdir)/cpu.o $(srcdir)/mmu.o $(srcdir)/page.o $(srcdir)/kernel.o


