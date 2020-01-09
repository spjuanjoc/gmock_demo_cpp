//
// Created by juan.castellanos on 8/01/20.
//

#ifndef GMOCK_DEMO_CPP_INTERFACEDISPLAY_H
#define GMOCK_DEMO_CPP_INTERFACEDISPLAY_H

class InterfaceDisplay
{
public:
  virtual ~InterfaceDisplay()  = default;

  virtual void Start()         = 0;
  virtual void Show(int param) = 0;
  virtual int  GetX() const    = 0;
};
#endif  //GMOCK_DEMO_CPP_INTERFACEDISPLAY_H
