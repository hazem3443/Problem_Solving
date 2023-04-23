/** @file romanToInt.h
 *
 * @brief convert roman string numbers into integers
 *
 * @par
 * COPYRIGHT NOTICE: (c) 2023 Hazem Khaled.  All rights reserved.
 */
#ifndef ROMANTOINT_H
#define ROMANTOINT_H

#include <string>

class Roman
{
public:
    Roman();

    int ToInt(std::string s);
};


#endif /* ROMANTOINT_H */