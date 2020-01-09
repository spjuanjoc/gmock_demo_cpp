//
// Created by juan.castellanos on 8/01/20.
//

#ifndef GMOCK_DEMO_CPP_IMPLEMENTATIONDISPLAY_H
#define GMOCK_DEMO_CPP_IMPLEMENTATIONDISPLAY_H

#include "InterfaceDisplay.h"

class ImplementationDisplay : public InterfaceDisplay
{
public:
  ImplementationDisplay()           = default;
  ~ImplementationDisplay() override = default;

  /// method with no arguments
  void Start() override;

  /// method with one argument
  void Show(int param) override;

  /// const method
  int GetX() const override;

  /// Implementation-only method. Not in Interface
  static bool Draw(int x, int y);
};

#endif  //GMOCK_DEMO_CPP_IMPLEMENTATIONDISPLAY_H
