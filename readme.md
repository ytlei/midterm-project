# C++ Boilerplate
[![Build Status](https://travis-ci.org/ytlei/midterm-project.svg?branch=master)](https://travis-ci.org/ytlei/midterm-project)
[![Coverage Status](https://coveralls.io/repos/github/dpiet/cpp-boilerplate/badge.svg?branch=master)](https://coveralls.io/github/dpiet/cpp-boilerplate?branch=master)
---

## Overview

This project simulates the cruise control system on automobiles using control algorithms. It will also implements a simple unit test program which utilize googletest framework to 
perform tests on module function. Also, the implementation process of this project follows SIP model in software enginering.

Backlogs can be found at [BackLogs][reference-id-for-backlogs].

[reference-id-for-backlogs]: 
https://docs.google.com/spreadsheets/d/1zvV9tH2fySRXZiNTsEiNcHox-10YE9jk1I9JvUUO2zs/edit?usp=sharing
UML class/activity diagrams can be found in git under ./UML folder.


## Status

Originally planned to build on LQR control, but it's too hard to implement. Thus using pid as an alternative. Used slater1 AdaptiveCruiseControl for reference.
still not finished


## License

This program is under MIT License.

Copyright (c) 2017 Yi-ting Lei
```bash
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```


## Dependencies

the controller is based on https://github.com/slater1/AdaptiveCruiseControl.git


## How to build

- Checkout the repo (and submodules)
```bash
$ git clone --recursive https://github.com/ytlei/midterm-project.git
cd path
mkdir -p build
cd build
cmake ..
make
```

