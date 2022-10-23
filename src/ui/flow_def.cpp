#include "flow_def.h"

namespace eez {

// ASSETS DEFINITION
const uint8_t assets[1855] = {
    0x7E, 0x65, 0x65, 0x7A, 0x03, 0x00, 0x06, 0x00, 0x84, 0x11, 0x00, 0x00, 0x6E, 0x24, 0x00, 0x00,
    0x00, 0x28, 0x00, 0x01, 0x00, 0x17, 0x38, 0x0C, 0x00, 0xC0, 0x20, 0x03, 0xE0, 0x01, 0x01, 0x00,
    0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x08, 0x00, 0x93, 0x54, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
    0x00, 0x58, 0x08, 0x00, 0x26, 0x38, 0x11, 0x2C, 0x00, 0x13, 0x64, 0x08, 0x00, 0xF3, 0x0E, 0x70,
    0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0xE8, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x2C, 0x00, 0x00, 0x00, 0xF4, 0x10, 0x00, 0x22, 0xA4,
    0x01, 0x40, 0x00, 0x2E, 0x44, 0x11, 0x80, 0x00, 0x66, 0x06, 0x00, 0x00, 0x00, 0xAC, 0x01, 0x10,
    0x00, 0x00, 0x30, 0x00, 0x1F, 0x48, 0x28, 0x00, 0x04, 0x1B, 0xC4, 0x28, 0x00, 0x1F, 0x4C, 0x28,
    0x00, 0x00, 0xFA, 0xE7, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6C, 0x74, 0x00, 0xFF, 0xFF, 0x08, 0x42,
    0xDC, 0x01, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0x1C, 0x02, 0x00, 0x00, 0x3C, 0x02, 0x00, 0x00,
    0x5C, 0x02, 0x00, 0x00, 0x7C, 0x02, 0x00, 0x00, 0x9C, 0x02, 0x00, 0x00, 0xBC, 0x02, 0x00, 0x00,
    0xDC, 0x02, 0x00, 0x00, 0xFC, 0x02, 0x00, 0x00, 0x1C, 0x03, 0x00, 0x00, 0x3C, 0x03, 0x00, 0x00,
    0x5C, 0x03, 0x00, 0x00, 0x7C, 0x03, 0x00, 0x00, 0x9C, 0x03, 0x00, 0x00, 0xBC, 0x03, 0x00, 0x00,
    0xDC, 0x03, 0x00, 0x00, 0xFC, 0x03, 0x00, 0x00, 0x1C, 0x04, 0x00, 0x00, 0x3C, 0x04, 0x00, 0x00,
    0x5C, 0x04, 0x00, 0x00, 0x7C, 0x04, 0x00, 0x00, 0x9C, 0x04, 0x00, 0x00, 0xBC, 0x04, 0x00, 0x00,
    0xDC, 0x04, 0x00, 0x00, 0xFC, 0x04, 0x00, 0x00, 0x1C, 0x05, 0x00, 0x00, 0x3C, 0x05, 0x00, 0x00,
    0x5C, 0x05, 0x00, 0x00, 0x7C, 0x05, 0x00, 0x00, 0x9C, 0x05, 0x00, 0x00, 0xBC, 0x05, 0x00, 0x00,
    0xDC, 0x05, 0x00, 0x00, 0xFC, 0x05, 0x00, 0x00, 0x1C, 0x06, 0x00, 0x00, 0x3C, 0x06, 0x00, 0x00,
    0x5C, 0x06, 0x00, 0x00, 0x7C, 0x06, 0x00, 0x00, 0x9C, 0x06, 0x00, 0x00, 0xBC, 0x06, 0x00, 0x00,
    0xDC, 0x06, 0x00, 0x00, 0xFC, 0x06, 0x00, 0x00, 0x30, 0x07, 0x00, 0x00, 0x64, 0x07, 0x00, 0x00,
    0x98, 0x07, 0x00, 0x00, 0xA8, 0x07, 0x00, 0x00, 0xB8, 0x07, 0x00, 0x00, 0xD8, 0x07, 0x00, 0x00,
    0xF8, 0x07, 0x00, 0x00, 0x18, 0x08, 0x00, 0x00, 0x38, 0x08, 0x00, 0x00, 0x6C, 0x08, 0x00, 0x00,
    0xA0, 0x08, 0x00, 0x00, 0xC0, 0x08, 0x00, 0x00, 0xE0, 0x08, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00,
    0x20, 0x09, 0x00, 0x00, 0x54, 0x09, 0x00, 0x00, 0x10, 0x27, 0x18, 0x01, 0x22, 0x88, 0x09, 0xC0,
    0x01, 0x9B, 0x90, 0x09, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x11, 0x20, 0x00, 0x13, 0x94, 0x20,
    0x00, 0x13, 0x9C, 0x20, 0x00, 0x1B, 0x12, 0x20, 0x00, 0x22, 0xA0, 0x09, 0x08, 0x00, 0x1F, 0xA8,
    0x40, 0x00, 0x04, 0x13, 0xB0, 0x40, 0x00, 0x1F, 0xB8, 0x20, 0x00, 0x04, 0x13, 0xBC, 0x20, 0x00,
    0x1F, 0xC4, 0x20, 0x00, 0x04, 0x13, 0xC8, 0x20, 0x00, 0x1F, 0xD0, 0x20, 0x00, 0x04, 0x13, 0xD4,
    0x20, 0x00, 0x1F, 0xDC, 0x20, 0x00, 0x04, 0x13, 0xE0, 0xA0, 0x00, 0x1F, 0xE8, 0x20, 0x00, 0x04,
    0x13, 0xF0, 0x20, 0x00, 0x13, 0xF8, 0x20, 0x00, 0x0C, 0x20, 0x01, 0x22, 0x00, 0x0A, 0x60, 0x00,
    0x22, 0x08, 0x0A, 0x20, 0x00, 0x17, 0x13, 0x20, 0x00, 0x53, 0x04, 0x00, 0x00, 0x00, 0x0C, 0x20,
    0x00, 0x2E, 0x1C, 0x0A, 0x20, 0x01, 0x00, 0xC8, 0x02, 0x13, 0x20, 0x20, 0x00, 0x2F, 0x2C, 0x0A,
    0x60, 0x00, 0x03, 0x13, 0x30, 0x20, 0x00, 0x1F, 0x38, 0x20, 0x00, 0x04, 0x13, 0x3C, 0x20, 0x00,
    0x2F, 0x44, 0x0A, 0x80, 0x01, 0x03, 0x13, 0x48, 0x20, 0x00, 0x2F, 0x50, 0x0A, 0xE0, 0x00, 0x03,
    0x13, 0x54, 0x20, 0x00, 0x1F, 0x5C, 0x40, 0x00, 0x04, 0x13, 0x60, 0x20, 0x00, 0x1F, 0x68, 0x80,
    0x00, 0x04, 0x13, 0x6C, 0x20, 0x00, 0x1F, 0x74, 0x20, 0x00, 0x04, 0x13, 0x78, 0x20, 0x00, 0x1F,
    0x80, 0x60, 0x00, 0x04, 0x13, 0x84, 0x20, 0x00, 0x1F, 0x8C, 0xA0, 0x00, 0x04, 0x13, 0x90, 0x20,
    0x00, 0x1F, 0x98, 0x40, 0x00, 0x04, 0x13, 0x9C, 0x20, 0x00, 0x1F, 0xA4, 0x80, 0x00, 0x04, 0x13,
    0xA8, 0x20, 0x00, 0x1F, 0xB0, 0x20, 0x00, 0x04, 0x13, 0xB4, 0x20, 0x00, 0x1F, 0xBC, 0x60, 0x00,
    0x04, 0x13, 0xC0, 0x20, 0x00, 0x1F, 0xC8, 0xA0, 0x00, 0x04, 0x13, 0xCC, 0x20, 0x00, 0x1F, 0xD4,
    0x40, 0x00, 0x04, 0x13, 0xD8, 0x20, 0x00, 0x1F, 0xE0, 0x20, 0x00, 0x04, 0x13, 0xE4, 0x20, 0x00,
    0x1F, 0xEC, 0xA0, 0x00, 0x04, 0x13, 0xF0, 0x20, 0x00, 0x1F, 0xF8, 0x20, 0x00, 0x04, 0x13, 0xFC,
    0x20, 0x00, 0x2F, 0x04, 0x0B, 0x60, 0x00, 0x03, 0x22, 0x08, 0x0B, 0x20, 0x00, 0x2F, 0x10, 0x0B,
    0xC0, 0x00, 0x03, 0x13, 0x14, 0x20, 0x00, 0x1F, 0x1C, 0x40, 0x00, 0x04, 0x13, 0x20, 0x20, 0x00,
    0x1F, 0x28, 0x20, 0x00, 0x04, 0x13, 0x2C, 0x20, 0x00, 0x2F, 0x34, 0x0B, 0xA0, 0x00, 0x03, 0x13,
    0x38, 0x20, 0x00, 0x1F, 0x40, 0x80, 0x00, 0x04, 0x13, 0x44, 0x20, 0x00, 0x1F, 0x4C, 0x20, 0x00,
    0x04, 0x13, 0x50, 0x20, 0x00, 0x1F, 0x58, 0x20, 0x00, 0x04, 0x13, 0x5C, 0x20, 0x00, 0x1F, 0x64,
    0x20, 0x00, 0x04, 0x13, 0x68, 0x20, 0x00, 0x1F, 0x70, 0x20, 0x00, 0x04, 0x13, 0x74, 0x20, 0x00,
    0x1F, 0x7C, 0x20, 0x00, 0x04, 0x13, 0x80, 0x20, 0x00, 0x13, 0x88, 0x20, 0x00, 0x23, 0x06, 0x04,
    0xB0, 0x02, 0x16, 0x0B, 0x28, 0x00, 0x01, 0x20, 0x05, 0x03, 0x20, 0x00, 0x04, 0x38, 0x00, 0x10,
    0x09, 0x34, 0x02, 0x04, 0x70, 0x06, 0x03, 0x34, 0x00, 0x1B, 0x94, 0x34, 0x00, 0x17, 0x98, 0x34,
    0x00, 0x1F, 0x03, 0x34, 0x00, 0x04, 0x1B, 0x9C, 0x34, 0x00, 0x13, 0xA0, 0x34, 0x00, 0x13, 0x01,
    0x34, 0x00, 0x04, 0xA8, 0x00, 0x53, 0xA4, 0x0B, 0x00, 0x00, 0x07, 0x10, 0x00, 0x13, 0x46, 0x08,
    0x00, 0x1B, 0x07, 0xD0, 0x06, 0x0C, 0xDC, 0x00, 0x23, 0xAC, 0x0B, 0x04, 0x03, 0x0F, 0xFC, 0x00,
    0x04, 0x13, 0xBC, 0xFC, 0x00, 0x1F, 0xC4, 0x20, 0x00, 0x04, 0x13, 0xC8, 0x20, 0x00, 0x1F, 0xD0,
    0x20, 0x00, 0x04, 0x13, 0xD4, 0x60, 0x00, 0x1B, 0xDC, 0x3C, 0x01, 0x1B, 0xE4, 0xD4, 0x00, 0x17,
    0xE8, 0x08, 0x01, 0x1F, 0x01, 0x08, 0x01, 0x04, 0x1B, 0xEC, 0x34, 0x00, 0x1F, 0xF0, 0x3C, 0x01,
    0x08, 0x0C, 0x88, 0x00, 0x13, 0xF4, 0x88, 0x00, 0x1F, 0xFC, 0xA8, 0x00, 0x04, 0x22, 0x04, 0x0C,
    0x54, 0x00, 0x2F, 0x0C, 0x0C, 0x20, 0x00, 0x03, 0x22, 0x10, 0x0C, 0x08, 0x00, 0x1F, 0x18, 0x20,
    0x00, 0x04, 0x13, 0x20, 0x40, 0x00, 0x2A, 0x28, 0x0C, 0xE8, 0x00, 0x2A, 0x2C, 0x0C, 0xB4, 0x00,
    0x2F, 0x30, 0x0C, 0xE8, 0x00, 0x0F, 0x1B, 0x34, 0x34, 0x00, 0x2F, 0x38, 0x0C, 0x58, 0x02, 0x07,
    0xF0, 0xFF, 0x93, 0x3C, 0x0C, 0x00, 0x00, 0x40, 0x0C, 0x00, 0x00, 0x44, 0x0C, 0x00, 0x00, 0x50,
    0x0C, 0x00, 0x00, 0x54, 0x0C, 0x00, 0x00, 0x58, 0x0C, 0x00, 0x00, 0x64, 0x0C, 0x00, 0x00, 0x68,
    0x0C, 0x00, 0x00, 0x6C, 0x0C, 0x00, 0x00, 0x78, 0x0C, 0x00, 0x00, 0x84, 0x0C, 0x00, 0x00, 0x88,
    0x0C, 0x00, 0x00, 0x8C, 0x0C, 0x00, 0x00, 0x98, 0x0C, 0x00, 0x00, 0x9C, 0x0C, 0x00, 0x00, 0xA0,
    0x0C, 0x00, 0x00, 0xAC, 0x0C, 0x00, 0x00, 0xB0, 0x0C, 0x00, 0x00, 0xB4, 0x0C, 0x00, 0x00, 0xC0,
    0x0C, 0x00, 0x00, 0xC4, 0x0C, 0x00, 0x00, 0xC8, 0x0C, 0x00, 0x00, 0xD4, 0x0C, 0x00, 0x00, 0xD8,
    0x0C, 0x00, 0x00, 0xDC, 0x0C, 0x00, 0x00, 0xE8, 0x0C, 0x00, 0x00, 0xF4, 0x0C, 0x00, 0x00, 0xF8,
    0x0C, 0x00, 0x00, 0xFC, 0x0C, 0x00, 0x00, 0x08, 0x0D, 0x00, 0x00, 0x14, 0x0D, 0x00, 0x00, 0x18,
    0x0D, 0x00, 0x00, 0x1C, 0x0D, 0x00, 0x00, 0x28, 0x0D, 0x00, 0x00, 0x2C, 0x0D, 0x00, 0x00, 0x30,
    0x0D, 0x00, 0x00, 0x34, 0x0D, 0x00, 0x00, 0x38, 0x0D, 0x00, 0x00, 0x44, 0x0D, 0x00, 0x00, 0x48,
    0x0D, 0x00, 0x00, 0x4C, 0x0D, 0x00, 0x00, 0x54, 0x0D, 0x00, 0x00, 0x60, 0x0D, 0x00, 0x00, 0x64,
    0x0D, 0x00, 0x00, 0x68, 0x0D, 0x00, 0x00, 0x74, 0x0D, 0x00, 0x00, 0x78, 0x0D, 0x00, 0x00, 0x7C,
    0x0D, 0x00, 0x00, 0x88, 0x0D, 0x00, 0x00, 0x8C, 0x0D, 0x00, 0x00, 0x90, 0x0D, 0x00, 0x00, 0x9C,
    0x0D, 0x00, 0x00, 0xA0, 0x0D, 0x00, 0x00, 0xA4, 0x0D, 0x00, 0x00, 0xB0, 0x0D, 0x00, 0x00, 0xB4,
    0x0D, 0x00, 0x00, 0xB8, 0x0D, 0x00, 0x00, 0xC4, 0x0D, 0x00, 0x00, 0xC8, 0x0D, 0x00, 0x00, 0xCC,
    0x0D, 0x00, 0x00, 0xD8, 0x0D, 0x00, 0x00, 0xDC, 0x0D, 0x00, 0x00, 0xE0, 0x0D, 0x00, 0x00, 0xEC,
    0x0D, 0x00, 0x00, 0xF0, 0x0D, 0x00, 0x00, 0xF4, 0x0D, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x04,
    0x0E, 0x00, 0x00, 0x08, 0x0E, 0x00, 0x00, 0x14, 0x0E, 0x00, 0x00, 0x18, 0x0E, 0x00, 0x00, 0x1C,
    0x0E, 0x00, 0x00, 0x28, 0x0E, 0x00, 0x00, 0x2C, 0x0E, 0x00, 0x00, 0x30, 0x0E, 0x00, 0x00, 0x3C,
    0x0E, 0x00, 0x00, 0x40, 0x0E, 0x00, 0x00, 0x44, 0x0E, 0x00, 0x00, 0x50, 0x0E, 0x00, 0x00, 0x54,
    0x0E, 0x00, 0x00, 0x58, 0x0E, 0x00, 0x00, 0x64, 0x0E, 0x00, 0x00, 0x68, 0x0E, 0x00, 0x00, 0x6C,
    0x0E, 0x00, 0x00, 0x78, 0x0E, 0x00, 0x00, 0x7C, 0x0E, 0x00, 0x00, 0x80, 0x0E, 0x00, 0x00, 0x8C,
    0x0E, 0x00, 0x00, 0x90, 0x0E, 0x00, 0x00, 0x94, 0x0E, 0x00, 0x00, 0xA0, 0x0E, 0x00, 0x00, 0xA4,
    0x0E, 0x00, 0x00, 0xA8, 0x0E, 0x00, 0x00, 0xB4, 0x0E, 0x00, 0x00, 0xB8, 0x0E, 0x00, 0x00, 0xBC,
    0x0E, 0x00, 0x00, 0xC8, 0x0E, 0x00, 0x00, 0xCC, 0x0E, 0x00, 0x00, 0xD0, 0x0E, 0x00, 0x00, 0xDC,
    0x0E, 0x00, 0x00, 0xE0, 0x0E, 0x00, 0x00, 0xE4, 0x0E, 0x00, 0x00, 0xF0, 0x0E, 0x00, 0x00, 0xF4,
    0x0E, 0x00, 0x00, 0xF8, 0x98, 0x00, 0xF3, 0x4E, 0x0F, 0x00, 0x00, 0x08, 0x0F, 0x00, 0x00, 0x0C,
    0x0F, 0x00, 0x00, 0x18, 0x0F, 0x00, 0x00, 0x1C, 0x0F, 0x00, 0x00, 0x20, 0x0F, 0x00, 0x00, 0x2C,
    0x0F, 0x00, 0x00, 0x30, 0x0F, 0x00, 0x00, 0x34, 0x0F, 0x00, 0x00, 0x40, 0x0F, 0x00, 0x00, 0x44,
    0x0F, 0x00, 0x00, 0x48, 0x0F, 0x00, 0x00, 0x54, 0x0F, 0x00, 0x00, 0x58, 0x0F, 0x00, 0x00, 0x5C,
    0x0F, 0x00, 0x00, 0x68, 0x0F, 0x00, 0x00, 0x6C, 0x0F, 0x00, 0x00, 0x70, 0x0F, 0x00, 0x00, 0x7C,
    0x0F, 0x00, 0x00, 0x80, 0x0F, 0x00, 0x00, 0x84, 0x0F, 0x00, 0x00, 0x90, 0x0F, 0x00, 0x00, 0x94,
    0x0F, 0x00, 0x00, 0x98, 0x0F, 0xFC, 0x06, 0x13, 0x0F, 0x4C, 0x09, 0x12, 0x0F, 0x18, 0x02, 0x90,
    0xBC, 0x0F, 0x00, 0x00, 0xC8, 0x0F, 0x00, 0x00, 0xE4, 0x10, 0x00, 0xF2, 0x26, 0x10, 0x00, 0x00,
    0x04, 0x10, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x14, 0x10, 0x00, 0x00, 0x20, 0x10, 0x00, 0x00,
    0x24, 0x10, 0x00, 0x00, 0x28, 0x10, 0x00, 0x00, 0x34, 0x10, 0x00, 0x00, 0x38, 0x10, 0x00, 0x00,
    0x3C, 0x10, 0x00, 0x00, 0x48, 0x10, 0x00, 0x00, 0x4C, 0x10, 0x00, 0x00, 0x50, 0x10, 0x00, 0x00,
    0x5C, 0x10, 0x48, 0x00, 0x23, 0x68, 0x10, 0xDC, 0x07, 0xF3, 0x29, 0x10, 0x00, 0x00, 0x80, 0x10,
    0x00, 0x00, 0x84, 0x10, 0x00, 0x00, 0x88, 0x10, 0x00, 0x00, 0x94, 0x10, 0x00, 0x00, 0xA0, 0x10,
    0x00, 0x00, 0xA4, 0x10, 0x00, 0x00, 0xA8, 0x10, 0x00, 0x00, 0xB4, 0x10, 0x00, 0x00, 0xB8, 0x10,
    0x00, 0x00, 0xBC, 0x10, 0x00, 0x00, 0xC8, 0x10, 0x00, 0x00, 0xD4, 0x10, 0x00, 0x00, 0xD8, 0x10,
    0x00, 0x00, 0xDC, 0x48, 0x00, 0x13, 0xE8, 0x48, 0x00, 0x10, 0xF4, 0x10, 0x00, 0x13, 0xE0, 0x04,
    0x00, 0x08, 0x99, 0x04, 0x0F, 0x14, 0x00, 0x14, 0x01, 0xB3, 0x0B, 0x04, 0xA8, 0x0B, 0x0E, 0x48,
    0x00, 0x0F, 0x14, 0x00, 0x3E, 0x01, 0x58, 0x07, 0x1F, 0x11, 0x20, 0x00, 0x0B, 0x1F, 0x08, 0x90,
    0x00, 0x11, 0x3F, 0x40, 0x00, 0xE0, 0x1C, 0x00, 0x07, 0x10, 0x02, 0xF1, 0x0C, 0x0A, 0x1E, 0x00,
    0x0E, 0xDC, 0x00, 0x0F, 0x14, 0x00, 0xFF, 0xFF, 0x21, 0x08, 0x34, 0x03, 0x0F, 0x0C, 0x00, 0x0C,
    0x13, 0x96, 0x08, 0x00, 0x1B, 0xFA, 0x3C, 0x00, 0x04, 0x18, 0x00, 0x2B, 0x2C, 0x01, 0x1C, 0x00,
    0x0F, 0x2C, 0x03, 0x04, 0x2F, 0x0C, 0x11, 0x74, 0x03, 0x33, 0x2F, 0x10, 0x11, 0xC4, 0x00, 0x0C,
    0x0F, 0x38, 0x00, 0x04, 0x2F, 0x14, 0x11, 0x6C, 0x00, 0x1F, 0x2F, 0x18, 0x11, 0x44, 0x01, 0x1F,
    0xF1, 0x18, 0x1C, 0x11, 0x00, 0x00, 0x20, 0x11, 0x00, 0x00, 0x24, 0x11, 0x00, 0x00, 0x28, 0x11,
    0x00, 0x00, 0x2C, 0x11, 0x00, 0x00, 0x30, 0x11, 0x00, 0x00, 0x34, 0x11, 0x00, 0x00, 0x2B, 0x00,
    0x00, 0x00, 0x29, 0x00, 0x01, 0x00, 0x2A, 0x00, 0x02, 0x00, 0x0E, 0x35, 0x05, 0x00, 0x01, 0x08,
    0x00, 0xF0, 0x03, 0x50, 0x11, 0x00, 0x00, 0x60, 0x11, 0x00, 0x00, 0x70, 0x11, 0x00, 0x00, 0x03,
    0x03, 0x03, 0x00, 0x03, 0x03, 0x08, 0x00, 0x0F, 0x70, 0x00, 0x0B, 0x00, 0x01, 0x00, 0x13, 0x0D,
    0x08, 0x00, 0xC0, 0x80, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00
};

} // namespace eez
