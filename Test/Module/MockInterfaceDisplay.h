//
// Created by juan.castellanos on 8/01/20.
//

#ifndef GMOCK_DEMO_CPP_MOCKINTERFACEDISPLAY_H
#define GMOCK_DEMO_CPP_MOCKINTERFACEDISPLAY_H

#include "InterfaceDisplay.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

class MockInterfaceDisplay : public InterfaceDisplay
{
public:
  MockInterfaceDisplay()           = default;
  ~MockInterfaceDisplay() override = default;

  MOCK_METHOD0(Start, void());
  MOCK_METHOD1(Show, void(int param));
  MOCK_CONST_METHOD0(GetX, int());
};

#endif  //GMOCK_DEMO_CPP_MOCKINTERFACEDISPLAY_H
