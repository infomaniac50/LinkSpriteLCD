#include <Arduino.h>

#include "LinkSpriteLCD.h"

LinkSpriteLCD::LinkSpriteLCD() {

}

void LinkSpriteLCD::printHelloWorld() {
  SERIAL_PORT_MONITOR.println(HELLO_WORLD_STRING);
}