//
// Created by juan.castellanos on 8/01/20.
//
#include "ImplementationDisplay.h"
#include "MockInterfaceDisplay.h"
#include <iostream>
#include <gmock/gmock.h>
#include <gtest/gtest.h>

/// Fixture
class TestFixtureIDisplay : public ::testing::Test
{
public:
  // 1. Create mock object
  MockInterfaceDisplay* mockObject = nullptr;

  static void callShow(InterfaceDisplay* instance)
  {
    instance->Show(100);
    std::cout << "Show() called from TestFixtureIDisplay\n";
  }
  void SetUp() override
  {
    mockObject = new MockInterfaceDisplay();
  }
  void TearDown() override
  {
    delete mockObject;
  }
};

// Fixture test 1
// callShow() fixture method that calls Interface method
TEST_F(TestFixtureIDisplay, TestCallshowFix)
{
  // 2. Set expectations
  EXPECT_CALL(*mockObject, Show(testing::_));  // .Times(1);

  // 3. Create code that uses the mock
  callShow(mockObject);  // first call from Fixture
  // 4. Optional assertions
  //  EXPECT_TRUE(true);
}

// Fixture test 2
// Start() with no args
TEST_F(TestFixtureIDisplay, TestStartFix)
{
  EXPECT_CALL(*mockObject, Start()).Times(testing::AtLeast(1));
  mockObject->Start();  // expected call
}

// Fixture test 3
// Show() with one arg
TEST_F(TestFixtureIDisplay, TestShowFix)
{
  EXPECT_CALL(*mockObject, Show(testing::_)).Times(2);

  callShow(mockObject);   // first call from Fixture
  mockObject->Show(100);  // second call from mock

  //  ImplementationDisplay impObj;
  //  impObj.Show(20); // does not count as call, implementation should not be used here
}

// Fixture test 4
// const GetX() with no args that returns int
TEST_F(TestFixtureIDisplay, TestGetFix)
{
  EXPECT_CALL(*mockObject, GetX()).Times(testing::AtLeast(1)).WillOnce(testing::Return(5));

  int got = mockObject->GetX();
  // 4. Optional assertions
  EXPECT_EQ(got, 5);
}

// Fixture test 5
// const GetX() with no args that returns int
TEST_F(TestFixtureIDisplay, TestDrawFix)
{
  //  EXPECT_CALL(*mockObject, Draw()).Times(testing::AtLeast(1)); // not in the interface, can't be called in Mock
}
// ---End of fixture---//

// Test 1: regular test
// Call Start()
TEST(TestInterfaceDisplay, CallStartTest)
{
  // 1. Create mock object
  MockInterfaceDisplay mockObj;

  // 2. Set expectations
  EXPECT_CALL(mockObj, Start);  // Times = 1

  // 3. Create code that uses the mock
  mockObj.Start();

  // 4. Optional assertions
  //  EXPECT_TRUE(true);
}

// Test 2: Show()
TEST(TestInterfaceDisplay, CallShowTest)
{
  MockInterfaceDisplay mockObj;
  EXPECT_CALL(mockObj, Show(testing::_)).Times(testing::AtLeast(1));
  mockObj.Show(30);
}

// Test 3: Get()
TEST(TestInterfaceDisplay, CallGetTest)
{
  MockInterfaceDisplay mockObj;
  EXPECT_CALL(mockObj, GetX())
    .Times(2)
    .WillOnce(testing::Return(2))   // first call
    .WillOnce(testing::Return(3));  // second call

  int got1 = mockObj.GetX();
  int got2 = mockObj.GetX();

  EXPECT_GT(got2, got1);
}

// Test 4: Draw()
TEST(TestInterfaceDisplay, CallDrawTest)
{
  bool drawn = ImplementationDisplay::Draw(1, 2);
  EXPECT_TRUE(drawn);
}
