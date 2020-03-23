//
// Created by juan.castellanos on 15/01/20.
//

#ifndef TESTFIXTUREIDISPLAY_H
#define TESTFIXTUREIDISPLAY_H

#include <gmock/gmock.h>
#include <gtest/gtest.h>

class MockInterfaceDisplay;
class InterfaceDisplay;

/// Fixture
class TestFixtureIDisplay : public ::testing::Test
{
public:
  // 1. Create mock object
  MockInterfaceDisplay* mockObject = nullptr;

  static void callShow(InterfaceDisplay* instance);
  void SetUp() override;
  void TearDown() override;
};

#endif  //TESTFIXTUREIDISPLAY_H
