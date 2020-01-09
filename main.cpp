#include "ImplementationDisplay.h"
#include <iostream>
#include <gtest/gtest.h>

int main(int argc, char** argv)
{
  std::cout << "Hello, gMock" << std::endl;

  ImplementationDisplay obj;
  obj.Start();
  obj.Show(10);
  bool drawn = ImplementationDisplay::Draw(2, 4);
  int got = obj.GetX();

  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
