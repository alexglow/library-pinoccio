#ifndef LIB_PINOCCIO_SLEEP_H
#define LIB_PINOCCIO_SLEEP_H

class SleepHandler {
  public:
    // Sleep for the given amount of time. If interruptible is true,
    // this can return earlier if we are woken from sleep by another
    // interrupt.
    static void doSleep(uint32_t ms, bool interruptible);

    // This is (roughly) the time spent in hibernation. millis() +
    // sleepMillis should approximate the total wall time spent
    // since powerup.
    static uint32_t sleepMillis;

  protected:
    static bool sleepUntilMatch(bool interruptible);
};

#endif // LIB_PINOCCIO_SLEEP_H
