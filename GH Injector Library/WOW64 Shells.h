#pragma once

#ifdef _WIN64

inline unsigned char InjectionShell_WOW64[] =
{
	0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x1C, 0x56, 0x8B, 0x75, 0x08, 0x85, 0xF6, 0x75, 0x0A, 0x8D, 0x46, 0x01, 0x5E, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x8B, 0x46, 0x0C, 0x8D, 0x4E, 0x18, 0x89, 0x4E, 0x14, 0x83, 0xE8, 0x00, 0x0F, 0x84, 0x83, 0x00, 0x00, 0x00, 0x83, 0xE8, 0x01, 0x74, 0x68, 0x83, 0xE8, 0x01, 0x74, 0x0C, 0xB8, 0x0E, 0x00, 0x00, 0x00, 0x5E, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x8B, 0x86, 0x28, 0x02, 0x00, 0x00, 0x8D, 0x55, 0xE4, 0xC7, 0x45, 0xF4, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x57, 0xC0, 0x89, 0x4D, 0xF4, 0x8D, 0x4D, 0x08, 0x51, 0x6A, 0x00, 0x8D, 0x4E, 0x10, 0xC7, 0x45, 0x08, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x11, 0x45, 0xE4, 0xFF, 0xD0, 0x89, 0x46, 0x04, 0x8B, 0x45, 0x08, 0x85, 0xC0, 0x74, 0x15, 0x8B, 0x40, 0x18, 0x89, 0x06, 0x8B, 0x46, 0x08, 0xA8, 0x07, 0x75, 0x55, 0x33, 0xC0, 0x5E, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0xB8, 0x2A, 0x00, 0x00, 0x00, 0x5E, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x8B, 0x8E, 0x24, 0x02, 0x00, 0x00, 0x8D, 0x46, 0x10, 0x56, 0x50, 0x6A, 0x00, 0x6A, 0x00, 0xFF, 0xD1, 0x89, 0x46, 0x04, 0xEB, 0xCE, 0x8B, 0x86, 0x20, 0x02, 0x00, 0x00, 0x6A, 0x00, 0x6A, 0x00, 0x51, 0xFF, 0xD0, 0x89, 0x06, 0x85, 0xC0, 0x75, 0xBB, 0x8B, 0x86, 0x2C, 0x02, 0x00, 0x00, 0xFF, 0xD0, 0x89, 0x46, 0x04, 0xB8, 0x28, 0x00, 0x00, 0x00, 0x5E, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x57, 0x64, 0x8B, 0x3D, 0x30, 0x00, 0x00, 0x00, 0x85, 0xFF, 0x75, 0x0B, 0x8D, 0x47, 0x2B, 0x5F, 0x5E, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x8B, 0x4F, 0x0C, 0x85, 0xC9, 0x0F, 0x84, 0x8A, 0x01, 0x00, 0x00, 0x83, 0x79, 0x0C, 0x00, 0x0F, 0x84, 0x80, 0x01, 0x00, 0x00, 0xA8, 0x03, 0x0F, 0x84, 0x92, 0x00, 0x00, 0x00, 0x8B, 0x0E, 0x8B, 0x41, 0x3C, 0x8B, 0x44, 0x08, 0x54, 0x89, 0x4D, 0xFC, 0x8D, 0x4D, 0xF8, 0x51, 0x6A, 0x40, 0x8D, 0x4D, 0x08, 0x89, 0x45, 0x08, 0x8B, 0x86, 0x40, 0x02, 0x00, 0x00, 0x51, 0x8D, 0x4D, 0xFC, 0xC7, 0x45, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x51, 0x6A, 0xFF, 0xFF, 0xD0, 0x89, 0x46, 0x04, 0x8B, 0x46, 0x08, 0xA8, 0x01, 0x74, 0x10, 0xFF, 0x75, 0x08, 0x8B, 0x86, 0x34, 0x02, 0x00, 0x00, 0xFF, 0x75, 0xFC, 0xFF, 0xD0, 0xEB, 0x28, 0xA8, 0x02, 0x74, 0x24, 0x8B, 0x47, 0x0C, 0x8B, 0x40, 0x0C, 0x8B, 0x00, 0x85, 0xC0, 0x0F, 0x84, 0x1C, 0x01, 0x00, 0x00, 0xFF, 0x75, 0x08, 0xFF, 0x70, 0x18, 0x8B, 0x86, 0x30, 0x02, 0x00, 0x00, 0xFF, 0x75, 0xFC, 0xFF, 0xD0, 0x83, 0xC4, 0x0C, 0x8D, 0x4D, 0xF8, 0x51, 0x0F, 0xAE, 0xE8, 0xFF, 0x75, 0xF8, 0x8B, 0x86, 0x40, 0x02, 0x00, 0x00, 0x8D, 0x4D, 0x08, 0x51, 0x8D, 0x4D, 0xFC, 0x51, 0x6A, 0xFF, 0xFF, 0xD0, 0x89, 0x46, 0x04, 0x8B, 0x46, 0x08, 0xA8, 0x04, 0x0F, 0x84, 0xC7, 0x00, 0x00, 0x00, 0x8B, 0x57, 0x0C, 0x83, 0xC2, 0x0C, 0x8B, 0x02, 0x3B, 0xC2, 0x0F, 0x84, 0xC1, 0x00, 0x00, 0x00, 0x8B, 0x3E, 0x53, 0x8B, 0xD8, 0x39, 0x78, 0x18, 0x74, 0x0A, 0x8B, 0x08, 0x8B, 0xC1, 0x3B, 0xC2, 0x75, 0xF1, 0xEB, 0x02, 0x8B, 0x0B, 0x8B, 0x43, 0x04, 0x89, 0x41, 0x04, 0x8B, 0x4B, 0x04, 0x8B, 0x03, 0x89, 0x01, 0x8B, 0x4B, 0x10, 0x8B, 0x43, 0x14, 0x89, 0x41, 0x04, 0x8B, 0x4B, 0x14, 0x8B, 0x43, 0x10, 0x89, 0x01, 0x8B, 0x4B, 0x08, 0x8B, 0x43, 0x0C, 0x89, 0x41, 0x04, 0x8B, 0x4B,
	0x0C, 0x8B, 0x43, 0x08, 0x89, 0x01, 0x8B, 0x4B, 0x3C, 0x8B, 0x43, 0x40, 0x89, 0x41, 0x04, 0x8B, 0x4B, 0x40, 0x8B, 0x43, 0x3C, 0x89, 0x01, 0x8D, 0x43, 0x68, 0x50, 0xFF, 0xB6, 0x44, 0x02, 0x00, 0x00, 0x8B, 0x86, 0x3C, 0x02, 0x00, 0x00, 0xFF, 0xD0, 0x8D, 0x43, 0x74, 0x50, 0xFF, 0xB6, 0x48, 0x02, 0x00, 0x00, 0x8B, 0x86, 0x3C, 0x02, 0x00, 0x00, 0xFF, 0xD0, 0x0F, 0xB7, 0x43, 0x2E, 0x50, 0xFF, 0x73, 0x30, 0x8B, 0x86, 0x34, 0x02, 0x00, 0x00, 0xFF, 0xD0, 0x0F, 0xB7, 0x43, 0x26, 0x50, 0xFF, 0x73, 0x28, 0x8B, 0x86, 0x34, 0x02, 0x00, 0x00, 0xFF, 0xD0, 0x8B, 0x86, 0x34, 0x02, 0x00, 0x00, 0x8B, 0x7B, 0x50, 0x68, 0xA8, 0x00, 0x00, 0x00, 0x53, 0xFF, 0xD0, 0x8B, 0x86, 0x34, 0x02, 0x00, 0x00, 0x6A, 0x2C, 0x57, 0xFF, 0xD0, 0x5B, 0x5F, 0x33, 0xC0, 0x5E, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x5F, 0xB8, 0x13, 0x00, 0x00, 0x00, 0x5E, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x5F, 0xB8, 0x2C, 0x00, 0x00, 0x00, 0x5E, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00
};

inline unsigned char ManualMapping_Shell_WOW64[] =
{
	0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8, 0x83, 0xEC, 0x74, 0x53, 0x56, 0x57, 0x8B, 0x7D, 0x08, 0x85, 0xFF, 0x75, 0x0E, 0xB8, 0x01, 0x00, 0x40, 0x00, 0x5F, 0x5E, 0x5B, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x8B, 0x47, 0x04, 0x89, 0x44, 0x24, 0x20, 0x8B, 0x87, 0x90, 0x04, 0x00, 0x00, 0xC7, 0x44, 0x24, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x08, 0x89, 0x8F, 0x94, 0x04, 0x00, 0x00, 0x85, 0xC9, 0x75, 0x0E, 0xB8, 0x0D, 0x00, 0x40, 0x00, 0x5F, 0x5E, 0x5B, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x66, 0x8B, 0x47, 0x0C, 0x0F, 0x57, 0xC0, 0x66, 0x0F, 0x13, 0x44, 0x24, 0x58, 0x66, 0x89, 0x44, 0x24, 0x58, 0xB8, 0x10, 0x02, 0x00, 0x00, 0x68, 0x10, 0x02, 0x00, 0x00, 0x6A, 0x08, 0x66, 0x89, 0x44, 0x24, 0x62, 0x8B, 0x87, 0x64, 0x04, 0x00, 0x00, 0x51, 0xFF, 0xD0, 0x8B, 0xC8, 0x89, 0x4C, 0x24, 0x5C, 0x85, 0xC9, 0x0F, 0x84, 0x0A, 0x01, 0x00, 0x00, 0x6A, 0x08, 0x8D, 0x87, 0x2C, 0x04, 0x00, 0x00, 0x50, 0x8B, 0x87, 0x5C, 0x04, 0x00, 0x00, 0x51, 0xFF, 0xD0, 0x0F, 0xB7, 0x44, 0x24, 0x64, 0x50, 0x8D, 0x47, 0x14, 0x50, 0x8B, 0x44, 0x24, 0x70, 0x83, 0xC0, 0x08, 0x50, 0x8B, 0x87, 0x5C, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x8B, 0x87, 0x64, 0x04, 0x00, 0x00, 0x83, 0xC4, 0x18, 0x66, 0x83, 0x44, 0x24, 0x58, 0x08, 0x6A, 0x18, 0x6A, 0x08, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x8B, 0xF0, 0x8D, 0x4C, 0x24, 0x68, 0x6A, 0x20, 0x6A, 0x01, 0x51, 0x56, 0xC7, 0x06, 0x18, 0x00, 0x00, 0x00, 0x8D, 0x44, 0x24, 0x68, 0xC7, 0x46, 0x04, 0x00, 0x00, 0x00, 0x00, 0x8D, 0x4C, 0x24, 0x20, 0xC7, 0x46, 0x0C, 0x40, 0x00, 0x00, 0x00, 0x0F, 0x57, 0xC0, 0x89, 0x46, 0x08, 0xC7, 0x46, 0x10, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x46, 0x14, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x87, 0x3C, 0x04, 0x00, 0x00, 0x68, 0x89, 0x00, 0x12, 0x00, 0x51, 0x66, 0x0F, 0x13, 0x84, 0x24, 0x80, 0x00, 0x00, 0x00, 0xC7, 0x44, 0x24, 0x28, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xD0, 0x8B, 0x8F, 0x68, 0x04, 0x00, 0x00, 0x8B, 0xD8, 0x56, 0x6A, 0x00, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD1, 0x8B, 0x44, 0x24, 0x5C, 0x85, 0xC0, 0x74, 0x11, 0x50, 0x8B, 0x87, 0x68, 0x04, 0x00, 0x00, 0x6A, 0x00, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x85, 0xDB, 0x79, 0x11, 0x89, 0x5F, 0x08, 0xB8, 0x02, 0x00, 0x40, 0x00, 0x5F, 0x5E, 0x5B, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x8B, 0x87, 0x64, 0x04, 0x00, 0x00, 0x68, 0x00, 0x10, 0x00, 0x00, 0x6A, 0x08, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x8B, 0xF0, 0x85, 0xF6, 0x75, 0x1A, 0xFF, 0x74, 0x24, 0x10, 0x8B, 0x87, 0x44, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0xB8, 0x03, 0x00, 0x40, 0x00, 0x5F, 0x5E, 0x5B, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x8B, 0x87, 0x40, 0x04, 0x00, 0x00, 0x8D, 0x4C, 0x24, 0x68, 0x6A, 0x00, 0x6A, 0x00, 0x68, 0x00, 0x10, 0x00, 0x00, 0x56, 0x51, 0x6A, 0x00, 0x6A, 0x00, 0x6A, 0x00, 0xFF, 0x74, 0x24, 0x30, 0xFF, 0xD0, 0x56, 0x6A, 0x00, 0x85, 0xC0, 0x79, 0x2E, 0x89, 0x47, 0x08, 0x0F, 0xAE, 0xE8, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0x8B, 0x87, 0x68, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0xFF, 0x74, 0x24, 0x10, 0x8B, 0x87, 0x44, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0xB8, 0x04, 0x00, 0x40, 0x00, 0x5F, 0x5E, 0x5B, 0x8B, 0xE5,
	0x5D, 0xC2, 0x04, 0x00, 0x0F, 0xAE, 0xE8, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0x8B, 0x87, 0x68, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x8B, 0x87, 0x64, 0x04, 0x00, 0x00, 0x6A, 0x18, 0x6A, 0x08, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x8B, 0x8F, 0x4C, 0x04, 0x00, 0x00, 0x8B, 0xF0, 0x6A, 0x05, 0x6A, 0x18, 0x56, 0x8D, 0x44, 0x24, 0x74, 0x50, 0xFF, 0x74, 0x24, 0x20, 0xFF, 0xD1, 0x85, 0xC0, 0x79, 0x35, 0x89, 0x47, 0x08, 0x85, 0xF6, 0x74, 0x14, 0x56, 0x0F, 0xAE, 0xE8, 0x8B, 0x87, 0x68, 0x04, 0x00, 0x00, 0x6A, 0x00, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0xFF, 0x74, 0x24, 0x10, 0x8B, 0x87, 0x44, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0xB8, 0x07, 0x00, 0x40, 0x00, 0x5F, 0x5E, 0x5B, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x6A, 0x40, 0x68, 0x00, 0x30, 0x00, 0x00, 0x8D, 0x4C, 0x24, 0x20, 0xC7, 0x44, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x06, 0x51, 0x6A, 0x00, 0x8D, 0x4C, 0x24, 0x2C, 0x89, 0x44, 0x24, 0x28, 0x8B, 0x87, 0x50, 0x04, 0x00, 0x00, 0x51, 0x6A, 0xFF, 0xFF, 0xD0, 0x85, 0xC0, 0x79, 0x31, 0x56, 0x89, 0x47, 0x08, 0x0F, 0xAE, 0xE8, 0x8B, 0x87, 0x68, 0x04, 0x00, 0x00, 0x6A, 0x00, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0xFF, 0x74, 0x24, 0x10, 0x8B, 0x87, 0x44, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0xB8, 0x08, 0x00, 0x40, 0x00, 0x5F, 0x5E, 0x5B, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x8B, 0x87, 0x48, 0x04, 0x00, 0x00, 0x8D, 0x4C, 0x24, 0x78, 0x6A, 0x0E, 0x6A, 0x08, 0x51, 0x8D, 0x4C, 0x24, 0x74, 0x0F, 0x57, 0xC0, 0x51, 0xFF, 0x74, 0x24, 0x20, 0x66, 0x0F, 0xD6, 0x84, 0x24, 0x8C, 0x00, 0x00, 0x00, 0xFF, 0xD0, 0x0F, 0xAE, 0xE8, 0x85, 0xC0, 0x79, 0x52, 0x56, 0x89, 0x47, 0x08, 0x0F, 0xAE, 0xE8, 0x8B, 0x87, 0x68, 0x04, 0x00, 0x00, 0x6A, 0x00, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x68, 0x00, 0x80, 0x00, 0x00, 0x8D, 0x44, 0x24, 0x1C, 0xC7, 0x44, 0x24, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x50, 0x8D, 0x44, 0x24, 0x24, 0x50, 0x8B, 0x87, 0x58, 0x04, 0x00, 0x00, 0x6A, 0xFF, 0xFF, 0xD0, 0xFF, 0x74, 0x24, 0x10, 0x8B, 0x87, 0x44, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0xB8, 0x05, 0x00, 0x40, 0x00, 0x5F, 0x5E, 0x5B, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x8B, 0x87, 0x40, 0x04, 0x00, 0x00, 0x8D, 0x4C, 0x24, 0x68, 0x6A, 0x00, 0x6A, 0x00, 0xFF, 0x36, 0xFF, 0x74, 0x24, 0x28, 0x51, 0x6A, 0x00, 0x6A, 0x00, 0x6A, 0x00, 0xFF, 0x74, 0x24, 0x30, 0xFF, 0xD0, 0x56, 0x0F, 0xAE, 0xE8, 0x6A, 0x00, 0x85, 0xC0, 0x79, 0x3A, 0x89, 0x47, 0x08, 0x0F, 0xAE, 0xE8, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0x8B, 0x87, 0x68, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x68, 0x00, 0x80, 0x00, 0x00, 0x8D, 0x44, 0x24, 0x1C, 0xC7, 0x44, 0x24, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x50, 0x8D, 0x44, 0x24, 0x24, 0x50, 0x8B, 0x87, 0x58, 0x04, 0x00, 0x00, 0x6A, 0xFF, 0xFF, 0xD0, 0xE9, 0x2E, 0xFE, 0xFF, 0xFF, 0x0F, 0xAE, 0xE8, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0x8B, 0x87, 0x68, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x8B, 0x44, 0x24, 0x1C, 0x8D, 0x4C, 0x24, 0x28, 0x6A, 0x40, 0x68, 0x00, 0x30, 0x00, 0x00, 0x51, 0x8B, 0x70, 0x3C, 0x8D, 0x4C, 0x24, 0x18, 0x03, 0xF0, 0x6A, 0x00, 0x51, 0x6A, 0xFF, 0x8B, 0x46, 0x50, 0x89, 0x44, 0x24, 0x40, 0x8B, 0x87,
	0x50, 0x04, 0x00, 0x00, 0x89, 0x74, 0x24, 0x54, 0xFF, 0xD0, 0x0F, 0xAE, 0xE8, 0x85, 0xC0, 0x79, 0x29, 0x89, 0x47, 0x08, 0x8D, 0x44, 0x24, 0x18, 0x68, 0x00, 0x80, 0x00, 0x00, 0x50, 0x8D, 0x44, 0x24, 0x24, 0xC7, 0x44, 0x24, 0x20, 0x00, 0x00, 0x00, 0x00, 0x50, 0x8B, 0x87, 0x58, 0x04, 0x00, 0x00, 0x6A, 0xFF, 0xFF, 0xD0, 0xE9, 0x90, 0xFE, 0xFF, 0xFF, 0xFF, 0x76, 0x54, 0x8B, 0x87, 0x5C, 0x04, 0x00, 0x00, 0xFF, 0x74, 0x24, 0x20, 0xFF, 0x74, 0x24, 0x14, 0xFF, 0xD0, 0x0F, 0xB7, 0x46, 0x14, 0x33, 0xDB, 0x83, 0xC4, 0x0C, 0x83, 0xC0, 0x2C, 0x66, 0x39, 0x5E, 0x06, 0x74, 0x3B, 0x03, 0xF0, 0x0F, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x46, 0xFC, 0x85, 0xC0, 0x74, 0x1B, 0x50, 0x8B, 0x06, 0x03, 0x44, 0x24, 0x20, 0x50, 0x8B, 0x46, 0xF8, 0x03, 0x44, 0x24, 0x14, 0x50, 0x8B, 0x87, 0x5C, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x83, 0xC4, 0x0C, 0x8B, 0x44, 0x24, 0x3C, 0x43, 0x83, 0xC6, 0x28, 0x0F, 0xB7, 0x40, 0x06, 0x3B, 0xD8, 0x75, 0xCE, 0x8B, 0x44, 0x24, 0x0C, 0x68, 0x00, 0x80, 0x00, 0x00, 0x8B, 0x48, 0x3C, 0x03, 0xC8, 0xC7, 0x44, 0x24, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x8D, 0x44, 0x24, 0x1C, 0x89, 0x4C, 0x24, 0x18, 0x50, 0x8D, 0x44, 0x24, 0x24, 0x50, 0x8B, 0x87, 0x58, 0x04, 0x00, 0x00, 0x6A, 0xFF, 0xFF, 0xD0, 0x8B, 0x54, 0x24, 0x14, 0x8B, 0x5C, 0x24, 0x0C, 0x8B, 0xCB, 0x2B, 0x4A, 0x34, 0x89, 0x4C, 0x24, 0x34, 0x0F, 0x84, 0xC3, 0x00, 0x00, 0x00, 0x83, 0xBA, 0xA4, 0x00, 0x00, 0x00, 0x00, 0x75, 0x3E, 0x68, 0x00, 0x80, 0x00, 0x00, 0x8D, 0x44, 0x24, 0x2C, 0x50, 0x8D, 0x44, 0x24, 0x14, 0x50, 0x0F, 0xAE, 0xE8, 0x8B, 0x87, 0x58, 0x04, 0x00, 0x00, 0x6A, 0xFF, 0xC7, 0x44, 0x24, 0x38, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xD0, 0xFF, 0x74, 0x24, 0x10, 0x8B, 0x87, 0x44, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0xB8, 0x09, 0x00, 0x40, 0x00, 0x5F, 0x5E, 0x5B, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x8B, 0xB2, 0xA0, 0x00, 0x00, 0x00, 0x03, 0xF3, 0x83, 0x3E, 0x00, 0x74, 0x68, 0x0F, 0x1F, 0x44, 0x00, 0x00, 0x8B, 0x46, 0x04, 0x8D, 0x56, 0x08, 0x8D, 0x78, 0xF8, 0xD1, 0xEF, 0x74, 0x32, 0x0F, 0x1F, 0x00, 0x0F, 0xB7, 0x0A, 0x8B, 0xC1, 0x25, 0x00, 0xF0, 0x00, 0x00, 0x3D, 0x00, 0x30, 0x00, 0x00, 0x75, 0x13, 0x8B, 0x44, 0x24, 0x34, 0x81, 0xE1, 0xFF, 0x0F, 0x00, 0x00, 0x03, 0x0E, 0x01, 0x04, 0x19, 0x8B, 0x5C, 0x24, 0x0C, 0x83, 0xC2, 0x02, 0x83, 0xEF, 0x01, 0x75, 0xD4, 0x8B, 0x46, 0x04, 0x8B, 0x54, 0x24, 0x14, 0x03, 0xF0, 0x8B, 0x82, 0xA4, 0x00, 0x00, 0x00, 0x03, 0xC3, 0x03, 0x82, 0xA0, 0x00, 0x00, 0x00, 0x3B, 0xF0, 0x73, 0x05, 0x83, 0x3E, 0x00, 0x75, 0xA4, 0x8B, 0x7D, 0x08, 0x8B, 0x4C, 0x24, 0x34, 0x01, 0x4A, 0x34, 0x8B, 0x5C, 0x24, 0x0C, 0x8B, 0x4C, 0x24, 0x20, 0xF7, 0xC1, 0x00, 0x00, 0x82, 0x00, 0x0F, 0x84, 0xB7, 0x02, 0x00, 0x00, 0x83, 0xBA, 0x84, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x84, 0xAA, 0x02, 0x00, 0x00, 0x8B, 0x82, 0x80, 0x00, 0x00, 0x00, 0x03, 0xC3, 0x89, 0x44, 0x24, 0x34, 0x8B, 0x40, 0x0C, 0x85, 0xC0, 0x0F, 0x84, 0x93, 0x02, 0x00, 0x00, 0x66, 0x90, 0x03, 0xD8, 0x0F, 0x57, 0xC0, 0x66, 0x0F, 0x13, 0x44, 0x24, 0x60, 0x8B, 0xC3, 0x0F, 0xB7, 0xD3, 0x8B, 0xCA, 0x80, 0x3B, 0x00, 0x74, 0x09, 0x40, 0x0F, 0xB7, 0xC8, 0x80,
	0x38, 0x00, 0x75, 0xF7, 0x2B, 0xCA, 0x0F, 0xB7, 0xF1, 0x66, 0x85, 0xF6, 0x0F, 0x84, 0xCE, 0x04, 0x00, 0x00, 0x8B, 0x8F, 0x64, 0x04, 0x00, 0x00, 0x8B, 0xC6, 0x89, 0x44, 0x24, 0x3C, 0x40, 0x50, 0x6A, 0x08, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD1, 0x89, 0x44, 0x24, 0x64, 0x85, 0xC0, 0x0F, 0x84, 0xAA, 0x04, 0x00, 0x00, 0x56, 0x53, 0x8D, 0x4E, 0x01, 0x66, 0x89, 0x74, 0x24, 0x68, 0x50, 0x8B, 0x87, 0x5C, 0x04, 0x00, 0x00, 0x66, 0x89, 0x4C, 0x24, 0x6E, 0xFF, 0xD0, 0x8B, 0x87, 0x64, 0x04, 0x00, 0x00, 0x83, 0xC4, 0x0C, 0x0F, 0x57, 0xC0, 0xC7, 0x44, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x44, 0x24, 0x40, 0x00, 0x00, 0x00, 0x00, 0x66, 0x0F, 0x13, 0x44, 0x24, 0x50, 0x68, 0x08, 0x02, 0x00, 0x00, 0x6A, 0x08, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x6A, 0x00, 0x89, 0x44, 0x24, 0x58, 0x8D, 0x4C, 0x24, 0x64, 0x51, 0xB8, 0x08, 0x02, 0x00, 0x00, 0x8D, 0x4C, 0x24, 0x58, 0x66, 0x89, 0x44, 0x24, 0x5A, 0x8B, 0x87, 0x78, 0x04, 0x00, 0x00, 0x51, 0xFF, 0xD0, 0x8B, 0xF0, 0x85, 0xF6, 0x0F, 0x88, 0x1A, 0x04, 0x00, 0x00, 0x8B, 0x87, 0x64, 0x04, 0x00, 0x00, 0x68, 0x08, 0x01, 0x00, 0x00, 0x6A, 0x08, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x8B, 0xD8, 0xB8, 0x00, 0x01, 0x00, 0x00, 0x8B, 0xD3, 0x66, 0x89, 0x43, 0x02, 0x8D, 0x4B, 0x08, 0x8D, 0x44, 0x24, 0x40, 0x89, 0x4B, 0x04, 0x8B, 0xB7, 0x7C, 0x04, 0x00, 0x00, 0x8D, 0x4C, 0x24, 0x50, 0x50, 0x6A, 0x00, 0xFF, 0xD6, 0x8B, 0xF0, 0x8B, 0x44, 0x24, 0x54, 0x85, 0xC0, 0x74, 0x11, 0x50, 0x8B, 0x87, 0x68, 0x04, 0x00, 0x00, 0x6A, 0x00, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x0F, 0xAE, 0xE8, 0x85, 0xF6, 0x0F, 0x88, 0xB6, 0x03, 0x00, 0x00, 0x8B, 0x87, 0x6C, 0x04, 0x00, 0x00, 0x8D, 0x4C, 0x24, 0x24, 0x51, 0x53, 0x6A, 0x00, 0x6A, 0x00, 0x6A, 0x00, 0xFF, 0xD0, 0x8B, 0xF0, 0x85, 0xF6, 0x79, 0x5F, 0x6A, 0x14, 0x0F, 0xAE, 0xE8, 0x8B, 0x87, 0x64, 0x04, 0x00, 0x00, 0x6A, 0x08, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x8B, 0x4B, 0x04, 0x8B, 0xD0, 0x89, 0x44, 0x24, 0x3C, 0x89, 0x48, 0x10, 0x8D, 0x4C, 0x24, 0x38, 0x8B, 0xB7, 0x70, 0x04, 0x00, 0x00, 0x51, 0x6A, 0x00, 0x8B, 0xCB, 0xC7, 0x44, 0x24, 0x40, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xD6, 0x8B, 0xF0, 0x85, 0xF6, 0x78, 0x0B, 0x8B, 0x44, 0x24, 0x38, 0x8B, 0x40, 0x18, 0x89, 0x44, 0x24, 0x24, 0xFF, 0x74, 0x24, 0x3C, 0x8B, 0x87, 0x68, 0x04, 0x00, 0x00, 0x6A, 0x00, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x53, 0x0F, 0xAE, 0xE8, 0x8B, 0x87, 0x68, 0x04, 0x00, 0x00, 0x6A, 0x00, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x85, 0xF6, 0x0F, 0x88, 0x44, 0x03, 0x00, 0x00, 0x8B, 0x74, 0x24, 0x34, 0x8B, 0x5C, 0x24, 0x0C, 0x8B, 0x0E, 0x8B, 0x56, 0x10, 0x03, 0xD3, 0x85, 0xC9, 0x89, 0x54, 0x24, 0x30, 0x8D, 0x04, 0x19, 0x0F, 0x45, 0xD0, 0x89, 0x54, 0x24, 0x2C, 0x8B, 0x12, 0x85, 0xD2, 0x0F, 0x84, 0x91, 0x00, 0x00, 0x00, 0x79, 0x0D, 0x8B, 0x5C, 0x24, 0x30, 0x53, 0x0F, 0xB7, 0xC2, 0x50, 0x6A, 0x00, 0xEB, 0x48, 0x8D, 0x73, 0x02, 0x0F, 0x57, 0xC0, 0x03, 0xF2, 0x66, 0x0F, 0x13, 0x44, 0x24, 0x48, 0x89, 0x74, 0x24, 0x4C, 0x0F, 0xB7, 0xC6, 0x80, 0x3E, 0x00, 0x74, 0x13, 0x8B,
	0xC6, 0x40, 0x0F, 0xB7, 0xC8, 0x80, 0x38, 0x00, 0x75, 0xF7, 0x8B, 0x54, 0x24, 0x2C, 0x8B, 0xC1, 0x8B, 0x12, 0x8B, 0x5C, 0x24, 0x30, 0x2B, 0xC6, 0x66, 0x89, 0x44, 0x24, 0x48, 0x40, 0x66, 0x89, 0x44, 0x24, 0x4A, 0x53, 0x0F, 0xB7, 0xC2, 0x50, 0x8D, 0x44, 0x24, 0x50, 0x50, 0xFF, 0x74, 0x24, 0x30, 0x8B, 0x8F, 0x74, 0x04, 0x00, 0x00, 0xFF, 0xD1, 0x8B, 0xF0, 0x85, 0xF6, 0x0F, 0x88, 0xAE, 0x02, 0x00, 0x00, 0x8B, 0x74, 0x24, 0x2C, 0x83, 0xC3, 0x04, 0x83, 0xC6, 0x04, 0x89, 0x5C, 0x24, 0x30, 0x8B, 0x5C, 0x24, 0x0C, 0x89, 0x74, 0x24, 0x2C, 0x8B, 0x16, 0x85, 0xD2, 0x0F, 0x85, 0x73, 0xFF, 0xFF, 0xFF, 0x8B, 0x74, 0x24, 0x34, 0x8B, 0x46, 0x20, 0x83, 0xC6, 0x14, 0x89, 0x74, 0x24, 0x34, 0x85, 0xC0, 0x0F, 0x85, 0x77, 0xFD, 0xFF, 0xFF, 0x8B, 0x54, 0x24, 0x14, 0x8B, 0x4C, 0x24, 0x20, 0x81, 0xE1, 0x00, 0x00, 0x04, 0x00, 0x89, 0x4C, 0x24, 0x50, 0x0F, 0x84, 0x09, 0x03, 0x00, 0x00, 0x83, 0xBA, 0xE4, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x84, 0xFC, 0x02, 0x00, 0x00, 0x8B, 0x82, 0xE0, 0x00, 0x00, 0x00, 0x83, 0x7C, 0x18, 0x04, 0x00, 0x0F, 0x84, 0xEB, 0x02, 0x00, 0x00, 0x8D, 0x73, 0x0C, 0x03, 0xF0, 0x89, 0x74, 0x24, 0x34, 0x8B, 0x76, 0xF8, 0x0F, 0x57, 0xC0, 0x03, 0xF3, 0x66, 0x0F, 0x13, 0x44, 0x24, 0x70, 0x0F, 0xB7, 0xD6, 0x8B, 0xC6, 0x8B, 0xCA, 0x80, 0x3E, 0x00, 0x74, 0x09, 0x40, 0x0F, 0xB7, 0xC8, 0x80, 0x38, 0x00, 0x75, 0xF7, 0x2B, 0xCA, 0x0F, 0xB7, 0xD9, 0x66, 0x85, 0xDB, 0x0F, 0x84, 0xFC, 0x02, 0x00, 0x00, 0x8B, 0x8F, 0x64, 0x04, 0x00, 0x00, 0x8B, 0xC3, 0x89, 0x44, 0x24, 0x40, 0x40, 0x50, 0x6A, 0x08, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD1, 0x89, 0x44, 0x24, 0x74, 0x85, 0xC0, 0x0F, 0x84, 0xD8, 0x02, 0x00, 0x00, 0x53, 0x56, 0x8D, 0x4B, 0x01, 0x66, 0x89, 0x5C, 0x24, 0x78, 0x50, 0x8B, 0x87, 0x5C, 0x04, 0x00, 0x00, 0x66, 0x89, 0x4C, 0x24, 0x7E, 0xFF, 0xD0, 0x8B, 0x87, 0x64, 0x04, 0x00, 0x00, 0x83, 0xC4, 0x0C, 0x0F, 0x57, 0xC0, 0xC7, 0x44, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x44, 0x24, 0x48, 0x00, 0x00, 0x00, 0x00, 0x66, 0x0F, 0x13, 0x44, 0x24, 0x60, 0x68, 0x08, 0x02, 0x00, 0x00, 0x6A, 0x08, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x6A, 0x00, 0x89, 0x44, 0x24, 0x68, 0x8D, 0x4C, 0x24, 0x74, 0x51, 0xB8, 0x08, 0x02, 0x00, 0x00, 0x8D, 0x4C, 0x24, 0x68, 0x66, 0x89, 0x44, 0x24, 0x6A, 0x8B, 0x87, 0x78, 0x04, 0x00, 0x00, 0x51, 0xFF, 0xD0, 0x8B, 0xF0, 0x85, 0xF6, 0x0F, 0x88, 0x48, 0x02, 0x00, 0x00, 0x8B, 0x87, 0x64, 0x04, 0x00, 0x00, 0x68, 0x08, 0x01, 0x00, 0x00, 0x6A, 0x08, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x8B, 0xD8, 0xB8, 0x00, 0x01, 0x00, 0x00, 0x8B, 0xD3, 0x66, 0x89, 0x43, 0x02, 0x8D, 0x4B, 0x08, 0x8D, 0x44, 0x24, 0x48, 0x89, 0x4B, 0x04, 0x8B, 0xB7, 0x7C, 0x04, 0x00, 0x00, 0x8D, 0x4C, 0x24, 0x60, 0x50, 0x6A, 0x00, 0xFF, 0xD6, 0x8B, 0xF0, 0x8B, 0x44, 0x24, 0x64, 0x85, 0xC0, 0x74, 0x11, 0x50, 0x8B, 0x87, 0x68, 0x04, 0x00, 0x00, 0x6A, 0x00, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x0F, 0xAE, 0xE8, 0x85, 0xF6, 0x0F, 0x88, 0xE4, 0x01, 0x00, 0x00, 0x8B, 0x87, 0x6C, 0x04, 0x00, 0x00, 0x8D, 0x4C, 0x24, 0x24, 0x51, 0x53, 0x6A, 0x00, 0x6A, 0x00, 0x6A,
	0x00, 0xFF, 0xD0, 0x8B, 0xF0, 0x85, 0xF6, 0x79, 0x5F, 0x6A, 0x14, 0x0F, 0xAE, 0xE8, 0x8B, 0x87, 0x64, 0x04, 0x00, 0x00, 0x6A, 0x08, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x8B, 0x4B, 0x04, 0x8B, 0xD0, 0x89, 0x44, 0x24, 0x40, 0x89, 0x48, 0x10, 0x8D, 0x4C, 0x24, 0x38, 0x8B, 0xB7, 0x70, 0x04, 0x00, 0x00, 0x51, 0x6A, 0x00, 0x8B, 0xCB, 0xC7, 0x44, 0x24, 0x40, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xD6, 0x8B, 0xF0, 0x85, 0xF6, 0x78, 0x0B, 0x8B, 0x44, 0x24, 0x38, 0x8B, 0x40, 0x18, 0x89, 0x44, 0x24, 0x24, 0xFF, 0x74, 0x24, 0x40, 0x8B, 0x87, 0x68, 0x04, 0x00, 0x00, 0x6A, 0x00, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x53, 0x0F, 0xAE, 0xE8, 0x8B, 0x87, 0x68, 0x04, 0x00, 0x00, 0x6A, 0x00, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x85, 0xF6, 0x0F, 0x88, 0x72, 0x01, 0x00, 0x00, 0x8B, 0x74, 0x24, 0x34, 0x8B, 0x56, 0xFC, 0x85, 0xD2, 0x74, 0x0B, 0x8B, 0x4C, 0x24, 0x0C, 0x8B, 0x44, 0x24, 0x24, 0x89, 0x04, 0x0A, 0x8B, 0x06, 0x8B, 0x5C, 0x24, 0x0C, 0x03, 0xC3, 0x8B, 0x4E, 0x04, 0x03, 0xCB, 0x89, 0x44, 0x24, 0x2C, 0x89, 0x4C, 0x24, 0x3C, 0x83, 0x38, 0x00, 0x0F, 0x84, 0xDD, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x40, 0x00, 0x8B, 0x31, 0xC7, 0x44, 0x24, 0x30, 0x00, 0x00, 0x00, 0x00, 0x85, 0xF6, 0x79, 0x50, 0x8D, 0x44, 0x24, 0x30, 0x50, 0x0F, 0xB7, 0xC6, 0x50, 0x6A, 0x00, 0xE9, 0x88, 0x00, 0x00, 0x00, 0x53, 0xEB, 0x09, 0x8B, 0x44, 0x24, 0x54, 0x85, 0xC0, 0x74, 0x18, 0x50, 0x8B, 0x87, 0x68, 0x04, 0x00, 0x00, 0x6A, 0x00, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0xEB, 0x05, 0xBE, 0x74, 0x03, 0x00, 0xC0, 0xFF, 0x74, 0x24, 0x10, 0x89, 0x77, 0x08, 0x8B, 0x87, 0x44, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0xB8, 0x0A, 0x00, 0x40, 0x00, 0x5F, 0x5E, 0x5B, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x8D, 0x53, 0x02, 0x0F, 0x57, 0xC0, 0x03, 0xD6, 0x66, 0x0F, 0x13, 0x44, 0x24, 0x40, 0x89, 0x54, 0x24, 0x44, 0x0F, 0xB7, 0xC2, 0x80, 0x3A, 0x00, 0x74, 0x13, 0x8B, 0xC2, 0x66, 0x0F, 0x1F, 0x44, 0x00, 0x00, 0x40, 0x0F, 0xB7, 0xC8, 0x80, 0x38, 0x00, 0x75, 0xF7, 0x8B, 0xC1, 0x2B, 0xC2, 0x66, 0x89, 0x44, 0x24, 0x40, 0x40, 0x66, 0x89, 0x44, 0x24, 0x42, 0x8D, 0x44, 0x24, 0x30, 0x50, 0x0F, 0xB7, 0xC6, 0x50, 0x8D, 0x44, 0x24, 0x48, 0x50, 0xFF, 0x74, 0x24, 0x30, 0x8B, 0x87, 0x74, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x8B, 0x44, 0x24, 0x2C, 0x8B, 0x4C, 0x24, 0x3C, 0x83, 0xC0, 0x04, 0x8B, 0x5C, 0x24, 0x0C, 0x83, 0xC1, 0x04, 0x89, 0x44, 0x24, 0x2C, 0x89, 0x4C, 0x24, 0x3C, 0x83, 0x38, 0x00, 0x0F, 0x85, 0x2B, 0xFF, 0xFF, 0xFF, 0x8B, 0x74, 0x24, 0x34, 0x83, 0xC6, 0x20, 0x89, 0x74, 0x24, 0x34, 0x83, 0x7E, 0xF8, 0x00, 0x0F, 0x85, 0x1E, 0xFD, 0xFF, 0xFF, 0x8B, 0x54, 0x24, 0x20, 0x8B, 0x74, 0x24, 0x14, 0xF7, 0xC2, 0x00, 0x00, 0x40, 0x00, 0x0F, 0x84, 0x7B, 0x00, 0x00, 0x00, 0x83, 0xBE, 0xCC, 0x00, 0x00, 0x00, 0x00, 0x74, 0x72, 0x8B, 0xCB, 0x8B, 0xC1, 0x3D, 0x4E, 0xE6, 0x40, 0xBB, 0x75, 0x45, 0x8D, 0x4B, 0x01, 0xEB, 0x54, 0x53, 0xEB, 0x09, 0x8B, 0x44, 0x24, 0x64, 0x85, 0xC0, 0x74, 0x18, 0x50, 0x8B, 0x87, 0x68, 0x04, 0x00, 0x00, 0x6A, 0x00, 0xFF, 0xB7, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0xEB, 0x05, 0xBE, 0x74, 0x03,
	0x00, 0xC0, 0xFF, 0x74, 0x24, 0x10, 0x89, 0x77, 0x08, 0x8B, 0x87, 0x44, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0xB8, 0x0B, 0x00, 0x40, 0x00, 0x5F, 0x5E, 0x5B, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0xA9, 0x00, 0x00, 0xFF, 0xFF, 0x75, 0x0D, 0x8B, 0xC8, 0x81, 0xC9, 0x11, 0x47, 0x00, 0x00, 0xC1, 0xE1, 0x10, 0x0B, 0xC8, 0x8B, 0x86, 0xC8, 0x00, 0x00, 0x00, 0x89, 0x4C, 0x18, 0x3C, 0x8B, 0x5C, 0x24, 0x0C, 0xF7, 0xC2, 0x00, 0x00, 0x10, 0x00, 0x74, 0x36, 0x8B, 0x87, 0x80, 0x04, 0x00, 0x00, 0x8B, 0xCB, 0x8B, 0x56, 0x50, 0xFF, 0xD0, 0x85, 0xC0, 0x79, 0x1D, 0xFF, 0x74, 0x24, 0x10, 0x89, 0x47, 0x08, 0x8B, 0x87, 0x44, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0xB8, 0x0C, 0x00, 0x40, 0x00, 0x5F, 0x5E, 0x5B, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x8B, 0x5C, 0x24, 0x0C, 0x8B, 0x54, 0x24, 0x20, 0x81, 0xE2, 0x00, 0x00, 0x20, 0x00, 0x89, 0x54, 0x24, 0x30, 0x0F, 0x84, 0x17, 0x01, 0x00, 0x00, 0x8D, 0x4C, 0x24, 0x3C, 0x51, 0x6A, 0x20, 0x8D, 0x4C, 0x24, 0x50, 0x51, 0x0F, 0xAE, 0xE8, 0x8B, 0x46, 0x54, 0x8D, 0x4C, 0x24, 0x18, 0x51, 0x89, 0x44, 0x24, 0x58, 0x8B, 0x87, 0x54, 0x04, 0x00, 0x00, 0x6A, 0xFF, 0xC7, 0x44, 0x24, 0x50, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xD0, 0x8B, 0xD0, 0x85, 0xD2, 0x0F, 0x88, 0xC3, 0x00, 0x00, 0x00, 0x8B, 0x44, 0x24, 0x14, 0x0F, 0xAE, 0xE8, 0x8B, 0x5C, 0x24, 0x0C, 0xC7, 0x44, 0x24, 0x34, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xB7, 0x70, 0x14, 0x83, 0xC6, 0x3C, 0x66, 0x83, 0x78, 0x06, 0x00, 0x0F, 0x84, 0xBF, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x8B, 0x46, 0xE8, 0x8B, 0x0E, 0x03, 0xC3, 0x89, 0x44, 0x24, 0x38, 0x8B, 0x46, 0xEC, 0x89, 0x44, 0x24, 0x40, 0x85, 0xC0, 0x74, 0x67, 0xF7, 0xC1, 0x00, 0x00, 0x00, 0x20, 0x74, 0x1D, 0x85, 0xC9, 0x79, 0x07, 0xB9, 0x40, 0x00, 0x00, 0x00, 0xEB, 0x30, 0x81, 0xE1, 0x00, 0x00, 0x00, 0x40, 0xF7, 0xD9, 0x1B, 0xC9, 0x83, 0xE1, 0x10, 0x83, 0xC1, 0x10, 0xEB, 0x1E, 0x85, 0xC9, 0x79, 0x07, 0xB9, 0x04, 0x00, 0x00, 0x00, 0xEB, 0x13, 0xF7, 0xC1, 0x00, 0x00, 0x00, 0x40, 0xB8, 0x02, 0x00, 0x00, 0x00, 0xB9, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x45, 0xC8, 0x8B, 0x87, 0x54, 0x04, 0x00, 0x00, 0x8D, 0x54, 0x24, 0x3C, 0x52, 0x51, 0x8D, 0x4C, 0x24, 0x48, 0x51, 0x8D, 0x4C, 0x24, 0x44, 0x51, 0x6A, 0xFF, 0xFF, 0xD0, 0x8B, 0xD0, 0x85, 0xD2, 0x78, 0x23, 0x8B, 0x5C, 0x24, 0x0C, 0x8B, 0x44, 0x24, 0x14, 0x83, 0xC6, 0x28, 0xFF, 0x44, 0x24, 0x34, 0x8B, 0xCA, 0x0F, 0xB7, 0x40, 0x06, 0x39, 0x44, 0x24, 0x34, 0x0F, 0x85, 0x68, 0xFF, 0xFF, 0xFF, 0x85, 0xC9, 0x79, 0x1D, 0x89, 0x57, 0x08, 0xFF, 0x74, 0x24, 0x10, 0x8B, 0x87, 0x44, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0xB8, 0x06, 0x00, 0x40, 0x00, 0x5F, 0x5E, 0x5B, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x8B, 0x44, 0x24, 0x14, 0x8B, 0x74, 0x24, 0x20, 0xF7, 0xC6, 0x00, 0x00, 0x08, 0x00, 0x0F, 0x84, 0x74, 0x00, 0x00, 0x00, 0x83, 0xB8, 0xC4, 0x00, 0x00, 0x00, 0x00, 0x74, 0x6B, 0x8B, 0xB8, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xFB, 0x8B, 0x5D, 0x08, 0x68, 0xA8, 0x00, 0x00, 0x00, 0x6A, 0x08, 0xFF, 0xB3, 0x94, 0x04, 0x00, 0x00, 0x8B, 0x83, 0x64, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x8B, 0x4C, 0x24, 0x0C, 0x8B, 0xF0, 0x89, 0x4E, 0x18, 0x8B, 0xCE, 0x8B, 0x93, 0x84, 0x04, 0x00, 0x00,
	0xFF, 0xD2, 0x8B, 0x83, 0x68, 0x04, 0x00, 0x00, 0x56, 0x6A, 0x00, 0xFF, 0xB3, 0x94, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x8B, 0x77, 0x0C, 0x85, 0xF6, 0x74, 0x15, 0x8B, 0x06, 0x85, 0xC0, 0x74, 0x0F, 0x6A, 0x00, 0x6A, 0x01, 0xFF, 0x74, 0x24, 0x14, 0xFF, 0xD0, 0x83, 0xC6, 0x04, 0x75, 0xEB, 0x8B, 0x5C, 0x24, 0x0C, 0x8B, 0x7D, 0x08, 0x8B, 0x74, 0x24, 0x20, 0xF7, 0xC6, 0x00, 0x00, 0x80, 0x00, 0x74, 0x18, 0x8B, 0x44, 0x24, 0x14, 0x8B, 0x40, 0x28, 0x85, 0xC0, 0x74, 0x0D, 0x6A, 0x00, 0x6A, 0x01, 0x53, 0x03, 0xC3, 0xFF, 0xD0, 0x8B, 0x5C, 0x24, 0x0C, 0x8B, 0x54, 0x24, 0x14, 0x8B, 0xC6, 0x25, 0x00, 0x00, 0x21, 0x00, 0x3D, 0x00, 0x00, 0x01, 0x00, 0x0F, 0x85, 0xAE, 0x02, 0x00, 0x00, 0x83, 0xBA, 0x84, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x84, 0x9E, 0x00, 0x00, 0x00, 0x8B, 0xB2, 0x80, 0x00, 0x00, 0x00, 0x03, 0xF3, 0x8B, 0x46, 0x0C, 0x85, 0xC0, 0x0F, 0x84, 0x73, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x40, 0x00, 0x80, 0x3C, 0x18, 0x00, 0x74, 0x05, 0xC6, 0x44, 0x18, 0x01, 0x00, 0x8B, 0x06, 0xC7, 0x46, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x54, 0x24, 0x0C, 0x8D, 0x0C, 0x10, 0x85, 0xC0, 0x75, 0x05, 0x8B, 0x4E, 0x10, 0x03, 0xCA, 0x8B, 0x11, 0x85, 0xD2, 0x74, 0x24, 0x79, 0x08, 0xC7, 0x01, 0x00, 0x00, 0x00, 0x00, 0xEB, 0x10, 0x8B, 0x44, 0x24, 0x0C, 0x80, 0x7C, 0x10, 0x02, 0x00, 0x74, 0x05, 0xC6, 0x44, 0x10, 0x03, 0x00, 0x8B, 0x51, 0x04, 0x83, 0xC1, 0x04, 0x85, 0xD2, 0x75, 0xDC, 0xC7, 0x06, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x46, 0x10, 0x00, 0x00, 0x00, 0x00, 0x83, 0xC6, 0x14, 0x8B, 0x46, 0x0C, 0x85, 0xC0, 0x74, 0x06, 0x8B, 0x5C, 0x24, 0x0C, 0xEB, 0x95, 0x8B, 0x54, 0x24, 0x14, 0xC7, 0x82, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x82, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x5C, 0x24, 0x0C, 0x83, 0xBA, 0xE4, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x84, 0xDD, 0x00, 0x00, 0x00, 0x83, 0x7C, 0x24, 0x50, 0x00, 0x0F, 0x85, 0xD2, 0x00, 0x00, 0x00, 0x8B, 0x82, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xC3, 0x83, 0x78, 0x04, 0x00, 0x0F, 0x84, 0xA8, 0x00, 0x00, 0x00, 0x83, 0xC0, 0x0C, 0x89, 0x44, 0x24, 0x3C, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x48, 0xF8, 0x80, 0x3C, 0x19, 0x00, 0x74, 0x05, 0xC6, 0x44, 0x19, 0x01, 0x00, 0x8B, 0x30, 0x8B, 0x50, 0x04, 0xC7, 0x40, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x40, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x7C, 0x24, 0x0C, 0x03, 0xF7, 0x03, 0xD7, 0x83, 0x3E, 0x00, 0x74, 0x41, 0x66, 0x90, 0x8B, 0x1A, 0x85, 0xDB, 0x79, 0x08, 0xC7, 0x02, 0x00, 0x00, 0x00, 0x00, 0xEB, 0x1C, 0x8A, 0x44, 0x3B, 0x02, 0x84, 0xC0, 0x0F, 0xB6, 0xC8, 0xC7, 0x44, 0x24, 0x50, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x45, 0x4C, 0x24, 0x50, 0xFE, 0xC1, 0x88, 0x4C, 0x3B, 0x02, 0x83, 0xC6, 0x04, 0x83, 0xC2, 0x04, 0x83, 0x3E, 0x00, 0x74, 0x06, 0x8B, 0x7C, 0x24, 0x0C, 0xEB, 0xC5, 0x8B, 0x44, 0x24, 0x3C, 0xC7, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x40, 0x04, 0x00, 0x00, 0x00, 0x00, 0x83, 0xC0, 0x20, 0x89, 0x44, 0x24, 0x3C, 0x83, 0x78, 0xF8, 0x00, 0x74, 0x09, 0x8B, 0x5C, 0x24, 0x0C, 0xE9, 0x6E, 0xFF, 0xFF, 0xFF, 0x8B, 0x7D, 0x08, 0x8B, 0x54, 0x24, 0x14, 0xC7, 0x82, 0xE0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xC7, 0x82, 0xE4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x5C, 0x24, 0x0C, 0x83, 0xBA, 0xAC, 0x00, 0x00, 0x00, 0x00, 0x74, 0x4A, 0x8B, 0xB2, 0xA8, 0x00, 0x00, 0x00, 0x03, 0xF3, 0x8B, 0x46, 0x14, 0xFF, 0x76, 0x10, 0x03, 0xC3, 0x50, 0x8B, 0x87, 0x60, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x8B, 0x54, 0x24, 0x14, 0xC7, 0x46, 0x10, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x46, 0x14, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x46, 0x18, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x82, 0xA8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x82, 0xAC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x5C, 0x24, 0x0C, 0x83, 0xBA, 0xA4, 0x00, 0x00, 0x00, 0x00, 0x74, 0x54, 0x8B, 0x8A, 0xA0, 0x00, 0x00, 0x00, 0x03, 0xCB, 0x89, 0x4C, 0x24, 0x3C, 0x83, 0x39, 0x00, 0x74, 0x2B, 0x66, 0x90, 0x8B, 0x41, 0x04, 0x8D, 0x71, 0x04, 0x83, 0xE8, 0x08, 0x50, 0x8D, 0x41, 0x08, 0x50, 0x8B, 0x87, 0x60, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x8B, 0x4C, 0x24, 0x3C, 0x03, 0x0E, 0x89, 0x4C, 0x24, 0x3C, 0x83, 0x39, 0x00, 0x75, 0xDB, 0x8B, 0x54, 0x24, 0x14, 0xC7, 0x82, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x82, 0xA4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x5C, 0x24, 0x0C, 0x83, 0xBA, 0xC4, 0x00, 0x00, 0x00, 0x00, 0x74, 0x60, 0x8B, 0x8A, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xCB, 0x8B, 0x41, 0x0C, 0x85, 0xC0, 0x74, 0x17, 0x0F, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x83, 0x38, 0x00, 0x74, 0x0B, 0xC7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0xC0, 0x04, 0x75, 0xF0, 0xC7, 0x41, 0x0C, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x41, 0x08, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x41, 0x04, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x41, 0x10, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x01, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x82, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x82, 0xC4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x5C, 0x24, 0x0C, 0xF6, 0x44, 0x24, 0x20, 0x03, 0x0F, 0x84, 0x89, 0x00, 0x00, 0x00, 0x8B, 0x74, 0x24, 0x30, 0x8B, 0x42, 0x54, 0x89, 0x5C, 0x24, 0x38, 0x89, 0x44, 0x24, 0x3C, 0xC7, 0x44, 0x24, 0x34, 0x00, 0x00, 0x00, 0x00, 0x85, 0xF6, 0x74, 0x32, 0x8D, 0x4C, 0x24, 0x34, 0x51, 0x6A, 0x40, 0x8D, 0x4C, 0x24, 0x44, 0x51, 0x8D, 0x4C, 0x24, 0x44, 0x51, 0x0F, 0xAE, 0xE8, 0x8B, 0x87, 0x54, 0x04, 0x00, 0x00, 0x6A, 0xFF, 0xFF, 0xD0, 0x85, 0xC0, 0x79, 0x08, 0x89, 0x47, 0x08, 0xE9, 0x2A, 0xFC, 0xFF, 0xFF, 0x8B, 0x5C, 0x24, 0x0C, 0x8B, 0x54, 0x24, 0x14, 0x8B, 0x44, 0x24, 0x20, 0xA8, 0x01, 0x74, 0x51, 0xFF, 0x72, 0x54, 0x8B, 0x87, 0x60, 0x04, 0x00, 0x00, 0x53, 0xFF, 0xD0, 0x85, 0xF6, 0x74, 0x24, 0x8D, 0x4C, 0x24, 0x34, 0x51, 0x0F, 0xAE, 0xE8, 0xFF, 0x74, 0x24, 0x38, 0x8B, 0x87, 0x54, 0x04, 0x00, 0x00, 0x8D, 0x4C, 0x24, 0x44, 0x51, 0x8D, 0x4C, 0x24, 0x44, 0x51, 0x6A, 0xFF, 0xFF, 0xD0, 0x85, 0xC0, 0x78, 0xB4, 0xFF, 0x74, 0x24, 0x10, 0x8B, 0x87, 0x44, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x8B, 0x44, 0x24, 0x0C, 0x89, 0x07, 0x33, 0xC0, 0x5F, 0x5E, 0x5B, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0xA8, 0x02, 0x74, 0xB7, 0x64, 0xA1, 0x30, 0x00, 0x00, 0x00, 0x85, 0xC0, 0x75, 0x1A, 0xFF, 0x74, 0x24, 0x10, 0x8B, 0x87, 0x44, 0x04, 0x00, 0x00, 0xFF,
	0xD0, 0xB8, 0x0E, 0x00, 0x40, 0x00, 0x5F, 0x5E, 0x5B, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x8B, 0x40, 0x0C, 0x85, 0xC0, 0x74, 0x29, 0x83, 0x78, 0x1C, 0x00, 0x74, 0x23, 0x8B, 0x40, 0x0C, 0x8B, 0x00, 0x85, 0xC0, 0x74, 0x1A, 0xFF, 0x72, 0x54, 0xFF, 0x70, 0x18, 0x8B, 0x87, 0x5C, 0x04, 0x00, 0x00, 0xFF, 0x74, 0x24, 0x14, 0xFF, 0xD0, 0x83, 0xC4, 0x0C, 0xE9, 0x63, 0xFF, 0xFF, 0xFF, 0xFF, 0x74, 0x24, 0x10, 0x8B, 0x87, 0x44, 0x04, 0x00, 0x00, 0xFF, 0xD0, 0x5F, 0x5E, 0xB8, 0x0F, 0x00, 0x40, 0x00, 0x5B, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0xCC, 0xCC, 0xCC
};

#endif