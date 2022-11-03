#include "flow_def.h"

// ASSETS DEFINITION
const uint8_t assets[1449] = {
    0x7E, 0x65, 0x65, 0x7A, 0x03, 0x00, 0x06, 0x00, 0xD4, 0x11, 0x00, 0x00, 0x6E, 0x24, 0x00, 0x00,
    0x00, 0x24, 0x00, 0x01, 0x00, 0x18, 0x20, 0x0C, 0x00, 0x43, 0x03, 0xE0, 0x01, 0x01, 0x28, 0x00,
    0x13, 0x01, 0x1C, 0x00, 0x53, 0x03, 0x00, 0x00, 0x00, 0x1C, 0x08, 0x00, 0x26, 0x44, 0x11, 0x2C,
    0x00, 0x13, 0x14, 0x08, 0x00, 0xF3, 0x02, 0x18, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x60,
    0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x02, 0x08, 0x00, 0x53, 0x2C, 0x00, 0x00, 0x00, 0x80,
    0x10, 0x00, 0x22, 0x28, 0x01, 0x40, 0x00, 0x2E, 0x10, 0x11, 0x80, 0x00, 0x10, 0x06, 0x18, 0x00,
    0x16, 0x01, 0x10, 0x00, 0x00, 0x30, 0x00, 0x2F, 0xEC, 0x10, 0x28, 0x00, 0x03, 0x1B, 0x00, 0x28,
    0x00, 0x1F, 0xC8, 0x28, 0x00, 0x00, 0xF2, 0x23, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6C, 0x74, 0x00,
    0xFF, 0xFF, 0x08, 0x42, 0xE8, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00,
    0x3C, 0x01, 0x00, 0x00, 0x58, 0x01, 0x00, 0x00, 0x74, 0x01, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00,
    0xAC, 0x01, 0x00, 0x00, 0xC8, 0x01, 0x00, 0x00, 0xE4, 0x01, 0x4D, 0x00, 0xFA, 0xAF, 0x1C, 0x02,
    0x00, 0x00, 0x38, 0x02, 0x00, 0x00, 0x54, 0x02, 0x00, 0x00, 0x70, 0x02, 0x00, 0x00, 0x8C, 0x02,
    0x00, 0x00, 0xA8, 0x02, 0x00, 0x00, 0xC4, 0x02, 0x00, 0x00, 0xE0, 0x02, 0x00, 0x00, 0xFC, 0x02,
    0x00, 0x00, 0x18, 0x03, 0x00, 0x00, 0x34, 0x03, 0x00, 0x00, 0x50, 0x03, 0x00, 0x00, 0x6C, 0x03,
    0x00, 0x00, 0x88, 0x03, 0x00, 0x00, 0xA4, 0x03, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0xDC, 0x03,
    0x00, 0x00, 0xF8, 0x03, 0x00, 0x00, 0x14, 0x04, 0x00, 0x00, 0x30, 0x04, 0x00, 0x00, 0x4C, 0x04,
    0x00, 0x00, 0x68, 0x04, 0x00, 0x00, 0x84, 0x04, 0x00, 0x00, 0xA0, 0x04, 0x00, 0x00, 0xBC, 0x04,
    0x00, 0x00, 0xD8, 0x04, 0x00, 0x00, 0xF4, 0x04, 0x00, 0x00, 0x10, 0x05, 0x00, 0x00, 0x2C, 0x05,
    0x00, 0x00, 0x48, 0x05, 0x00, 0x00, 0x64, 0x05, 0x00, 0x00, 0x88, 0x05, 0x00, 0x00, 0xAC, 0x05,
    0x00, 0x00, 0xD4, 0x05, 0x00, 0x00, 0xE0, 0x05, 0x00, 0x00, 0xEC, 0x05, 0x00, 0x00, 0x08, 0x06,
    0x00, 0x00, 0x24, 0x06, 0x00, 0x00, 0x40, 0x06, 0x00, 0x00, 0x5C, 0x06, 0x00, 0x00, 0x80, 0x06,
    0x00, 0x00, 0xA4, 0x06, 0x00, 0x00, 0xC0, 0x06, 0x00, 0x00, 0xDC, 0x06, 0x00, 0x00, 0xF8, 0x06,
    0x00, 0x00, 0x14, 0x07, 0x00, 0x00, 0x38, 0x07, 0x00, 0x00, 0x10, 0x27, 0x18, 0x01, 0x22, 0x4C,
    0x07, 0x2B, 0x01, 0x00, 0x08, 0x00, 0x5B, 0xFF, 0xFF, 0x00, 0x00, 0x11, 0x20, 0x00, 0x13, 0x38,
    0x20, 0x00, 0x13, 0x38, 0x20, 0x00, 0x1B, 0x12, 0x20, 0x00, 0x26, 0x24, 0x07, 0x08, 0x00, 0x0F,
    0x40, 0x00, 0x01, 0x13, 0x14, 0x40, 0x00, 0x1F, 0x14, 0x20, 0x00, 0x04, 0x13, 0x00, 0x20, 0x00,
    0x1F, 0x00, 0x20, 0x00, 0x04, 0x22, 0xEC, 0x06, 0x20, 0x00, 0x00, 0x08, 0x00, 0x0F, 0x20, 0x00,
    0x01, 0x13, 0xD8, 0x20, 0x00, 0x1F, 0xD8, 0x20, 0x00, 0x04, 0x26, 0xC4, 0x06, 0x08, 0x00, 0x0F,
    0x20, 0x00, 0x01, 0x26, 0xB4, 0x06, 0x08, 0x00, 0x2E, 0xFF, 0xFF, 0x20, 0x01, 0x13, 0xA4, 0x60,
    0x00, 0x13, 0xA4, 0x20, 0x00, 0x17, 0x13, 0x20, 0x00, 0x53, 0x04, 0x00, 0x00, 0x00, 0x90, 0x20,
    0x00, 0x2E, 0x98, 0x06, 0x20, 0x01, 0x00, 0xC8, 0x02, 0x13, 0x84, 0x20, 0x00, 0x1F, 0x88, 0x60,
    0x00, 0x04, 0x13, 0x74, 0x20, 0x00, 0x1F, 0x74, 0x20, 0x00, 0x04, 0x13, 0x60, 0x20, 0x00, 0x2F,
    0x60, 0x06, 0x80, 0x01, 0x03, 0x13, 0x4C, 0x20, 0x00, 0x1F, 0x4C, 0xE0, 0x00, 0x04, 0x13, 0x38,
    0x20, 0x00, 0x1F, 0x38, 0x40, 0x00, 0x04, 0x13, 0x24, 0x20, 0x00, 0x1F, 0x24, 0x80, 0x00, 0x04,
    0x13, 0x10, 0x20, 0x00, 0x1F, 0x10, 0x20, 0x00, 0x04, 0x22, 0xFC, 0x05, 0x20, 0x00, 0x00, 0x08,
    0x00, 0x0F, 0x60, 0x00, 0x01, 0x13, 0xE8, 0x20, 0x00, 0x2F, 0xE8, 0x05, 0xA0, 0x00, 0x03, 0x13,
    0xD4, 0x20, 0x00, 0x1F, 0xD4, 0x40, 0x00, 0x04, 0x13, 0xC0, 0x20, 0x00, 0x2F, 0xC0, 0x05, 0x80,
    0x00, 0x03, 0x13, 0xAC, 0x20, 0x00, 0x1F, 0xAC, 0x20, 0x00, 0x04, 0x13, 0x98, 0x20, 0x00, 0x1F,
    0x98, 0x60, 0x00, 0x04, 0x13, 0x84, 0x20, 0x00, 0x1F, 0x84, 0xA0, 0x00, 0x04, 0x13, 0x70, 0x20,
    0x00, 0x1F, 0x70, 0x40, 0x00, 0x04, 0x13, 0x5C, 0x20, 0x00, 0x1F, 0x5C, 0x20, 0x00, 0x04, 0x13,
    0x48, 0x20, 0x00, 0x1F, 0x48, 0xA0, 0x00, 0x04, 0x13, 0x34, 0x20, 0x00, 0x1F, 0x34, 0x20, 0x00,
    0x04, 0x13, 0x20, 0x20, 0x00, 0x1F, 0x20, 0x60, 0x00, 0x04, 0x13, 0x0C, 0x20, 0x00, 0x1F, 0x0C,
    0xC0, 0x00, 0x04, 0x22, 0xF8, 0x04, 0x20, 0x00, 0x00, 0x08, 0x00, 0x0F, 0x40, 0x00, 0x01, 0x13,
    0xE4, 0x20, 0x00, 0x1F, 0xE4, 0x20, 0x00, 0x04, 0x13, 0xD0, 0x20, 0x00, 0x2F, 0xD0, 0x04, 0xA0,
    0x00, 0x03, 0x13, 0xBC, 0x20, 0x00, 0x2F, 0xBC, 0x04, 0x80, 0x00, 0x03, 0x13, 0xA8, 0x20, 0x00,
    0x1F, 0xA8, 0x20, 0x00, 0x04, 0x13, 0x94, 0x20, 0x00, 0x1F, 0x94, 0x20, 0x00, 0x04, 0x13, 0x80,
    0x20, 0x00, 0x1F, 0x80, 0x20, 0x00, 0x04, 0x13, 0x6C, 0x20, 0x00, 0x1F, 0x6C, 0x20, 0x00, 0x04,
    0x13, 0x58, 0x20, 0x00, 0x1F, 0x58, 0x20, 0x00, 0x04, 0x13, 0x44, 0x20, 0x00, 0x13, 0x44, 0x20,
    0x00, 0x13, 0x06, 0x10, 0x00, 0x26, 0x38, 0x04, 0x28, 0x00, 0x00, 0x10, 0x00, 0x13, 0x2C, 0x20,
    0x00, 0x01, 0x2C, 0x03, 0x16, 0x04, 0x28, 0x00, 0x1B, 0x1C, 0x28, 0x00, 0x17, 0x10, 0x28, 0x00,
    0x17, 0x08, 0x28, 0x00, 0x1B, 0x00, 0x28, 0x00, 0x22, 0xF4, 0x03, 0x28, 0x00, 0x01, 0xE4, 0x04,
    0x00, 0x29, 0x04, 0x02, 0x03, 0x05, 0x01, 0x01, 0x00, 0x2A, 0x46, 0x00, 0x10, 0x00, 0x04, 0xB0,
    0x06, 0x0C, 0xBC, 0x00, 0x26, 0xBC, 0x03, 0x08, 0x00, 0x0F, 0xDC, 0x00, 0x01, 0x23, 0xAC, 0x03,
    0x1C, 0x03, 0x0F, 0x20, 0x00, 0x04, 0x13, 0x98, 0x20, 0x00, 0x1F, 0x98, 0x20, 0x00, 0x04, 0x26,
    0x84, 0x03, 0x08, 0x00, 0x08, 0x1C, 0x01, 0x2A, 0x7C, 0x03, 0xCC, 0x00, 0x26, 0x70, 0x03, 0xF4,
    0x00, 0x26, 0x68, 0x03, 0x28, 0x00, 0x1B, 0x60, 0x28, 0x00, 0x17, 0x54, 0x28, 0x00, 0x2E, 0x4C,
    0x03, 0x70, 0x00, 0x26, 0x3C, 0x03, 0x08, 0x00, 0x0F, 0x90, 0x00, 0x01, 0x13, 0x2C, 0xB0, 0x00,
    0x1F, 0x2C, 0x20, 0x00, 0x04, 0x26, 0x18, 0x03, 0x08, 0x00, 0x0F, 0x20, 0x00, 0x01, 0x13, 0x08,
    0x40, 0x00, 0x1B, 0x08, 0xD0, 0x00, 0x2A, 0xFC, 0x02, 0xA8, 0x00, 0x26, 0xF0, 0x02, 0xA8, 0x00,
    0x26, 0xE8, 0x02, 0x28, 0x00, 0x1B, 0xE0, 0x28, 0x00, 0x17, 0xD4, 0x28, 0x00, 0x2A, 0xCC, 0x02,
    0x04, 0x00, 0x17, 0xD4, 0x04, 0x00, 0x17, 0xDC, 0x04, 0x00, 0x57, 0xE4, 0x02, 0x00, 0x00, 0xEC,
    0x04, 0x00, 0x17, 0xF4, 0x04, 0x00, 0x17, 0xFC, 0x04, 0x00, 0x26, 0x04, 0x03, 0x04, 0x00, 0x17,
    0x0C, 0x04, 0x00, 0x57, 0x14, 0x03, 0x00, 0x00, 0x1C, 0x04, 0x00, 0x22, 0x24, 0x03, 0x10, 0x01,
    0x04, 0x04, 0x00, 0x1F, 0x34, 0x04, 0x00, 0x00, 0x17, 0x3C, 0x04, 0x00, 0x57, 0x40, 0x03, 0x00,
    0x00, 0x48, 0x04, 0x00, 0x17, 0x50, 0x04, 0x00, 0x17, 0x58, 0x04, 0x00, 0x17, 0x60, 0x04, 0x00,
    0x17, 0x68, 0x04, 0x00, 0x17, 0x70, 0x04, 0x00, 0x17, 0x78, 0x04, 0x00, 0x17, 0x80, 0x04, 0x00,
    0x17, 0x88, 0x04, 0x00, 0x17, 0x90, 0x04, 0x00, 0x17, 0x98, 0x04, 0x00, 0x17, 0xA0, 0x04, 0x00,
    0x17, 0xA8, 0x04, 0x00, 0x17, 0xB0, 0x04, 0x00, 0x17, 0xB8, 0x04, 0x00, 0x17, 0xC0, 0x04, 0x00,
    0x17, 0xC8, 0x04, 0x00, 0x17, 0xD0, 0x04, 0x00, 0x17, 0xD8, 0x04, 0x00, 0x17, 0xE0, 0x04, 0x00,
    0x17, 0xE8, 0x04, 0x00, 0x17, 0xF0, 0x04, 0x00, 0x17, 0xF8, 0x04, 0x00, 0x26, 0x00, 0x04, 0x04,
    0x00, 0x17, 0x08, 0x04, 0x00, 0x17, 0x10, 0x04, 0x00, 0x17, 0x18, 0x04, 0x00, 0x17, 0x20, 0x04,
    0x00, 0x17, 0x28, 0x04, 0x00, 0x04, 0x2C, 0x04, 0x22, 0x34, 0x04, 0x74, 0x02, 0x53, 0x40, 0x04,
    0x00, 0x00, 0x48, 0xFC, 0x03, 0xD7, 0x54, 0x04, 0x00, 0x00, 0x5C, 0x04, 0x00, 0x00, 0x7C, 0x04,
    0x00, 0x00, 0x9C, 0x04, 0x00, 0x57, 0xA4, 0x04, 0x00, 0x00, 0xAC, 0x04, 0x00, 0x17, 0xB4, 0x04,
    0x00, 0x17, 0xBC, 0x04, 0x00, 0x13, 0xC4, 0x48, 0x00, 0x26, 0xC8, 0x04, 0x98, 0x05, 0x22, 0xDC,
    0x04, 0xBC, 0x05, 0x17, 0xF4, 0x04, 0x00, 0x66, 0xFC, 0x04, 0x00, 0x00, 0x04, 0x05, 0x04, 0x00,
    0x17, 0x0C, 0x04, 0x00, 0x57, 0x14, 0x05, 0x00, 0x00, 0x1C, 0x04, 0x00, 0x13, 0x00, 0x5C, 0x06,
    0x17, 0x28, 0x88, 0x06, 0x10, 0x3C, 0x18, 0x00, 0x13, 0xE0, 0x04, 0x00, 0x08, 0x81, 0x04, 0x0F,
    0x14, 0x00, 0x14, 0x04, 0x90, 0x06, 0x0E, 0x34, 0x00, 0x0F, 0x14, 0x00, 0x43, 0x22, 0x01, 0x00,
    0x38, 0x0B, 0x0F, 0x20, 0x00, 0x09, 0x2F, 0x84, 0x04, 0x54, 0x00, 0x10, 0x3F, 0x40, 0x00, 0xE0,
    0x1C, 0x00, 0x07, 0x4B, 0x02, 0x00, 0x00, 0xC0, 0x1E, 0x00, 0x0E, 0xDC, 0x00, 0x0F, 0x14, 0x00,
    0xFF, 0xFF, 0x21, 0x07, 0xA4, 0x02, 0x04, 0xA8, 0x06, 0x10, 0x09, 0xE4, 0x03, 0x0F, 0x20, 0x00,
    0x04, 0x1F, 0x03, 0x20, 0x00, 0x08, 0x00, 0x04, 0x00, 0x17, 0x05, 0x14, 0x00, 0x13, 0x96, 0x08,
    0x00, 0x1B, 0xFA, 0x28, 0x00, 0x1B, 0x05, 0x20, 0x00, 0x2A, 0x2C, 0x01, 0x24, 0x00, 0x0F, 0x64,
    0x03, 0x05, 0x2F, 0x44, 0x01, 0xAC, 0x03, 0x33, 0x2F, 0x00, 0x01, 0xDC, 0x00, 0x03, 0x1F, 0x01,
    0xFC, 0x00, 0x1D, 0x0F, 0x60, 0x00, 0x04, 0x1F, 0xA4, 0x94, 0x00, 0x20, 0x1F, 0x74, 0xA4, 0x01,
    0x02, 0x0F, 0xA8, 0x00, 0x23, 0x0C, 0xC4, 0x01, 0x1F, 0x1C, 0x04, 0x00, 0x08, 0xB1, 0x2B, 0x00,
    0x00, 0x00, 0x29, 0x00, 0x01, 0x00, 0x2A, 0x00, 0x02, 0x7F, 0x06, 0x35, 0x05, 0x00, 0x01, 0x08,
    0x00, 0x13, 0x18, 0x60, 0x11, 0x10, 0x30, 0xFC, 0x00, 0x50, 0x03, 0x03, 0x00, 0x03, 0x03, 0x08,
    0x00, 0x0F, 0x98, 0x00, 0x07, 0x04, 0x01, 0x00, 0x13, 0x0E, 0x08, 0x00, 0xC0, 0x08, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00
};
