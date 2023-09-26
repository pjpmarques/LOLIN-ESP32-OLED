
Bootstrap program for Wemos Lolin ESP32 OLED board (and clones)
--

This program allows you a quick start with the Wemos Lolin ESP32 OLED, which features a 0.96" display. Documentation online about the pinout is sketchy and, in some cases, wrong. 

The important thing is that to communicate with the display, you need to use I2C, talking to the SSD1306 controller. The I2C address and I2C pins are:

```C++
#define I2C_DISPLAY_ADDR    0x3C
#define SDA                 5
#define SCL                 4
```

Here's a photo o a Lolin clone running the "Hello World" code:

![ESP32 with the OLED display](../imgs/ESP32_photo.jpeg)

Here's the pinout of the module for future reference:

![ESP32 with the OLED display](../imgs/ESP32_pinout.jpeg)

Please also check this documentation:
* [Random Nerd Tutorials -- WEMOS LOLIN](https://randomnerdtutorials.com/esp32-built-in-oled-ssd1306/)
* [ESP32-WROOM-32 with 0.96" OLED by Melife](https://www.technologyx2.com/blog_hightech/2020/5/24/research-esp32esp-wroom-32-development-board-with-096-oled-by-melife)
