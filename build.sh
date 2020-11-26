#!/bin/bash
cmake .
make
gcovr -r . --html --html-details -o code_cover.html
gcovr -r . --xml -o code_cover.xml
