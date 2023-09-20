@echo off

call cmake -S . -B _out
call cmake --build _out

_out\Debug\threads.exe

pause