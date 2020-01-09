# gmock_demo_cpp
Simple example for the use of googletest gMock

## Requirements
- googletest must be already cloned and installed
- c++17
- gcc >= 7.4
- cmake >= 3.15
- developed with CLion 2019.3
- License MIT

## About Google Mock
See:
* [gMock for Dummies](https://github.com/google/googletest/blob/master/googlemock/docs/for_dummies.md)
* [gMock Cookbook](https://github.com/google/googletest/blob/master/googlemock/docs/cook_book.md)
* [gMock Cheat Sheet](https://github.com/google/googletest/blob/master/googlemock/docs/cheat_sheet.md)

## Platforms
- Linux (uses pthread)

## Contains
- An interface
- An implementation for that interface (plus an extra method)
- A mock for that interface
- A test fixture class for the mock (raw_ptr for demonstration)
- 5 fixture gtests
- 4 regular gtests
