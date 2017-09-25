#!/bin/bash
# This little script installs development toolchain, QEMU PC Emulator and
# NASM Assembler, which converts assembly language code into raw machine code
# executable files
sudo apt-get install build-essential qemu nasm

# Assemble the code from our text file into a raw binary file of machine-code 
# instructions. With the -f bin flag, we tell NASM that we want a plain binary file.
# The -o firstos.bin part tells NASM to generate the resulting binary in a file 
# called firstos.bin.
nasm -f bin -o firstos.bin firstos.asm 

# Create virtual floppy disk image to which we can write our bootloader-sized kernel. 
# This uses the 'dd' utility to directly copy our kernel to the first sector of the 
# floppy disk image. 
dd status=noxfer conv=notrunc if=firstos.bin of=firstos.flp

# When all the above commands get executed successfully, we can boot our new OS using 
# the QEMU PC emulator as follows:
qemu-system-i386 -fda firstos.flp

# Enjoy, you just created and loaded your own tiny little OS
