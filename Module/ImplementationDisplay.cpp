//
// Created by juan.castellanos on 8/01/20.
//

#include "ImplementationDisplay.h"
#include <iostream>

int ImplementationDisplay::GetX() const
{
  std::cout << "const GetX() called\n";
  // do something
  return 5;
}
bool ImplementationDisplay::Draw(int x, int y)
{
  std::cout << "Draw() called with args: " << x << "," << y << "\n";
  // do something
  return true;
}
void ImplementationDisplay::Start()
{
  std::cout << "Start() called\n";
  // do something
}
void ImplementationDisplay::Show(int param)
{
  std::cout << "Show() called with param: " << param << "\n";
  //do something
}
