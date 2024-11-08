/* STRINGS.C */
/* Copyright (c) @asdasda3456 2024 - 2024 */

#include <stdint.h>
#include <cpuinfo.h>
#include <osfunc.h>
#include <shell.h>

#include <stdlib/stdio.h>

int strcmp(const char *first, const char *second)
{
    uint8_t i = 0;
    uint8_t j = 0;

    while (first[i] != '\0') {
        i++;
    }
    while (second[j] != '\0') {
        if (second[j] != first[j]) {
            return 0;
        }
        j++;
    }
    if (i == j) {
        return 1;
    } else {
        return 0;
    }
}

// 0 is true
// -1 is false
int strncmp(const char *s1, const char *s2, int n)
{
    for (int i = 0; i < n; i++) {
        // Check if one of strings is at the end
        if (s1[i] == 0 || s2[i] == 0)
            return -1;
        // Check if the current chars are equal
        if (s1[i] != s2[i])
            return -1;
    }

    return 0;
}

char* strncpy(char* dest, const char* src, size_t n)
{
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    for (; i < n; i++) {
        dest[i] = '\0';
    }

    return dest;
}

size_t strlen(const char* str)
{
    size_t length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}

void strcpy(char* dest, const char* src)
{
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
}

void strcat(char* dest, const char* src)
{
    while (*dest) dest++;
    while (*src) *dest++ = *src++;
    *dest = '\0';
}

void splitter(const char *tex)
{
    run_term(tex);
}
