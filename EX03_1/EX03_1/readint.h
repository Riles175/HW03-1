#include <string>
#include <stdexcept>
#ifndef READINT_H_
#define READINT_H_

bool set_element_of_x(int index, int val);

int read_int(const std::string &prompt, int low, int high);

#endif