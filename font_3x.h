#include <avr/pgmspace.h>

#define FONT_3X_WIDTH 15
#define FONT_3X_RANGE_START 48 // '0'
#define FONT_3X_RANGE_END 57 // '9'

static const uint8_t font_3x_bitmap[] PROGMEM = { // digit 0-9
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x80, 0xFF, 0x01,
  0xC0, 0xFF, 0x03, 0xC0, 0xFF, 0x03, 0xE0, 0xFF, 0x07, 0xE0, 0xC1, 0x07,
  0xE0, 0x81, 0x07, 0xE0, 0x87, 0x07, 0xE0, 0xFF, 0x07, 0xC0, 0xFF, 0x03,
  0xC0, 0xFF, 0x03, 0x80, 0xFF, 0x01, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x02, 0x80, 0x00, 0x03, 0xC0, 0x00, 0x07, 0xC0, 0x81, 0x07,
  0xE0, 0xFF, 0x07, 0xE0, 0xFF, 0x07, 0xE0, 0xFF, 0x07, 0xE0, 0xFF, 0x07,
  0xE0, 0xFF, 0x07, 0xE0, 0xFF, 0x07, 0x60, 0x00, 0x07, 0x00, 0x00, 0x07,
  0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x80, 0x03, 0x06,
  0x80, 0x03, 0x07, 0xC0, 0x83, 0x07, 0xC0, 0xC1, 0x07, 0xE0, 0xF1, 0x07,
  0xE0, 0xFF, 0x07, 0xE0, 0xFF, 0x07, 0xE0, 0xFF, 0x07, 0xE0, 0xFF, 0x07,
  0xE0, 0x1F, 0x07, 0xC0, 0x8F, 0x0F, 0x80, 0x87, 0x0F, 0x00, 0xC0, 0x07,
  0x00, 0x00, 0x00, 0x80, 0x00, 0x0C, 0xC0, 0x00, 0x0C, 0xE0, 0x30, 0x1C,
  0xE0, 0x30, 0x1C, 0xE0, 0x38, 0x1C, 0xE0, 0x3F, 0x1C, 0xE0, 0x3F, 0x1E,
  0xE0, 0xFF, 0x1F, 0xE0, 0xFF, 0x1F, 0xE0, 0xFF, 0x0F, 0xC0, 0xFF, 0x0F,
  0xC0, 0xFB, 0x0F, 0x00, 0xF0, 0x07, 0x00, 0xF0, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x80, 0x01, 0x00, 0xE0, 0x03, 0x00, 0xF0, 0x03, 0x00, 0xF8, 0x03,
  0x00, 0xCC, 0x03, 0x00, 0x87, 0x03, 0x80, 0x83, 0x03, 0xC0, 0xC3, 0x0F,
  0xE0, 0xFF, 0x1F, 0xE0, 0xFF, 0x1F, 0xF0, 0xFF, 0x1F, 0xF0, 0xFF, 0x1F,
  0xF0, 0xFF, 0x1F, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x78, 0x18, 0x00, 0x7F, 0x38, 0xC0, 0x7F, 0x38, 0xC0, 0xFF, 0x38,
  0xC0, 0xFF, 0x38, 0xC0, 0xFB, 0x3D, 0xC0, 0xFB, 0x3F, 0xC0, 0xF3, 0x3F,
  0xC0, 0xF3, 0x1F, 0xC0, 0xF3, 0x1F, 0xC0, 0xE3, 0x0F, 0xC0, 0xE3, 0x0F,
  0xC0, 0xC1, 0x07, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0xFF, 0x00,
  0xC0, 0xFF, 0x01, 0xE0, 0xFF, 0x03, 0xF0, 0xFF, 0x03, 0xF8, 0xFF, 0x07,
  0xF8, 0xCF, 0x07, 0x78, 0x87, 0x07, 0x10, 0x0F, 0x07, 0x00, 0xFF, 0x07,
  0x00, 0xFF, 0x07, 0x00, 0xFF, 0x03, 0x00, 0xFE, 0x01, 0x00, 0xFE, 0x00,
  0x00, 0x38, 0x00, 0x00, 0x01, 0x00, 0xE0, 0x07, 0x00, 0xF0, 0x07, 0x00,
  0xE0, 0x03, 0x00, 0xE0, 0x03, 0x10, 0xE0, 0x01, 0x3C, 0xE0, 0x01, 0x3F,
  0xE0, 0xC1, 0x3F, 0xE0, 0xE3, 0x3F, 0xE0, 0xFF, 0x1F, 0xE0, 0xFF, 0x03,
  0xE0, 0x7F, 0x00, 0xE0, 0x0F, 0x00, 0xE0, 0x01, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xE0, 0x00, 0xC0, 0xF3, 0x01, 0xE0, 0xFF, 0x03, 0xF0, 0xFF, 0x03,
  0xF0, 0x9F, 0x03, 0xF0, 0x1F, 0x07, 0xF0, 0x1F, 0x07, 0x30, 0x3F, 0x06,
  0x30, 0x7E, 0x07, 0x70, 0xFE, 0x07, 0xF0, 0xFF, 0x07, 0xF0, 0xFF, 0x03,
  0xE0, 0xFF, 0x03, 0xC0, 0xF9, 0x01, 0x00, 0x60, 0x00, 0x00, 0x0E, 0x00,
  0x80, 0x3F, 0x00, 0xC0, 0x7F, 0x00, 0xC0, 0xFF, 0x00, 0xE0, 0xFF, 0x10,
  0xE0, 0xFF, 0x18, 0xE0, 0xF1, 0x3C, 0xE0, 0xE1, 0x3F, 0xE0, 0xE1, 0x1F,
  0xE0, 0xFF, 0x1F, 0xC0, 0xFF, 0x0F, 0xC0, 0xFF, 0x03, 0x80, 0xFF, 0x01,
  0x00, 0x7F, 0x00, 0x00, 0x00, 0x00,
};

