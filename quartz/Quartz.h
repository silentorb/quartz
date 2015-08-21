#pragma once

namespace timing {

  const double dt = 0.01;

  struct State {
    float x;
    float v;
  };

  struct Derivative {
    float dx;
    float dv;
  };

  class Quartz {
  public:
    Quartz(void);

    ~Quartz(void);

    void start(void);

    float update_delta(void);

  private:
    double get_delta(void);

    static float time();

    double t;

    double currentTime;
    double accumulator;

    State current;
    State previous;
  };

};