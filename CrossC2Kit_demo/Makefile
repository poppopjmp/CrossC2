# Makefile for building CrossC2Kit demo projects

# Targets to build
TARGETS = cc2_portscan_demo cc2_keystrokes_demo

# Compiler and flags
CC = clang
CFLAGS = -fPIC -shared

# Default target
all: $(TARGETS)

# Build each target
%: %.c
	$(CC) $(CFLAGS) -o $@.dylib $<

# Clean up build artifacts
clean:
	-rm -rf ./*.dylib
