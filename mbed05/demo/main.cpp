#include "mbed.h"
#include "mbed_events.h"

DigitalOut led2(LED3);

EventQueue eventQueue;

void blink_led2() {
  // this runs in the normal priority thread
  led2 = !led2;
}

int main() {
  // normal priority thread for other events
  Thread eventThread;
  eventThread.start(callback(&eventQueue, &EventQueue::dispatch_forever));

  Ticker ledTicker;
  ledTicker.attach(eventQueue.event(&blink_led2), 0.5f);


  while (1) ;

}
