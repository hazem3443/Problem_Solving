@echo off

gcc.exe -g -std=c99 %1 -o out -lm

.\out.exe

del out.exe
