@echo off

g++.exe -g -std=c++11 %1 -o out -lm

.\out.exe

del out.exe
