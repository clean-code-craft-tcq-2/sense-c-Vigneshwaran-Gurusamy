#include <math.h>

extern int emailAlertCallCount;
extern int ledAlertCallCount;

struct Stats{
  float min, max, average;
};

typedef void (*alerter_funcptr)();

struct Stats compute_statistics(const float* numberset, int setlength);
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

void emailAlerter(void);
void ledAlerter(void);
