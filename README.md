## LinkSprite LCD ##
Derek Chafin <infomaniac50@gmail.com>  
Blog: https://www.coding-squared.com/blog/  
Github: [@infomaniac50](https://github.com/infomaniac50/)  
[License: GPLv3](LICENSE.md)  

This library can read the keypad buttons on the LinkSprite LCD Shield. I got mine from Sparkfun but their product page links to this wiki here: [LinkSprite LCD Wiki](http://linksprite.com/wiki/index.php5?title=16_X_2_LCD_Keypad_Shield_for_Arduino_V2). The buttons are all tied to A0 through a resistor network so all button states can be accessed simultaneously. I have included the schematic PDF from Sparkfun for future reference. The PDF and other documentation can be found in the extras folder.

### Extras ###
[Arduino IDE 1.5 Library specification.md](extras/Arduino%20IDE%201.5%20Library%20specification.md) in extras was copied on  April 12, 2015 from the Arduino github Wiki for quick and easy reference. The original page can be found here: [Arduino IDE 1.5 Library specification](https://github.com/arduino/Arduino/wiki/Arduino-IDE-1.5:-Library-specification).

[16X2_LCD_shield.pdf](extras/16X2_LCD_shield.pdf) in extras was copied on May 8, 2015 from the Sparkfun product page. The product page can be found here: [LCD Button Shield V2](https://www.sparkfun.com/products/13293). The direct link to the PDF is here: [16X2_LCD_shield.pdf](https://cdn.sparkfun.com/datasheets/Dev/Arduino/Shields/16X2_LCD_shield.pdf).

[falstad circuit simulator.txt](extras/falstad circuit simulator.txt) in extras was created on May 8, 2015 by Derek Chafin. It simulates the keypad resistor network in real time so you can play with the voltages without hooking up anything to the Arduino. It uses Paul Falstad's Circuit Simulator which can be found here. [Circuit Simulator Applet](http://www.falstad.com/circuit/) Java applets won't run in Chrome anymore. I just download the zip archive and run it directly, but as is it fails to find the examples. So I just added all of the assets from the extracted zip file to circuit.jar and then I run it like normal.