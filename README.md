Visual Studio Code Template for STM32 with Black Magic Probe

A basic template app that contains the following:

All Intellisense configuration for STM32CubeMX HAL
All Path configuration for STM32CubeMX HAL

A very basic printf-like function that can be directed to a UART of your choice that can be #defined away

The following tasks:
Make - builds the embedded application using the CubeMX generated Makefile
Clean - cleans the embedded application
Monitor - opens a PuTTY session using the Black Magic Probe's builtin Virtual Serial Port
Flash - uses the Black Magic Probe to load the built .elf file on the target

GDB Debugging configuration in launch.json

Assumes the use of the following:
Windows
VSCode for IDE
STM32CubeMX for code generation
GNU ARM Embedded Toolchain for compiling/debugging
MSYS2 for Windows Version of Make
Black Magic Probe for JTAG/SWD/Flashing
PuTTY for serial port monitoring

Much of the work here is based on the following previous work of others

http://shadetail.com/blog/using-visual-studio-code-for-arm-development-introduction/
This blog details the configuration of VSCode Intellisense and Paths
https://sites.google.com/site/hubmartin/arm/black-magic-probe-vs-code
This blog details the setup of the debugger

Right now, the only tested configurations with the following hardware setups:
Windows 10 - Black Magic Probe 2.1 Offical Hardware - STM32 Clicker 2 from Mikroelecktronica
(WIP) Windows 10 - Black Magic Probe 2.1 Offical Hardware - STM32 "Blue Pill"
Windows 10 - Black Magic Probe 2.1 Offical Harware - Open103z from Waveshare

Paths and COM port numbers will have to be adjusted if you use this for your system

Hope this is helpful to anyone else