#include <iostream>
#include "../include/Solution.h"

Solution::Solution()
{
}

int Solution::romanToInt(std::string s)
{
    int i = 0;
    int res = 0, prev = 0, cur = 0;
    int IdxToValRomanLettersList[] = {
        1,   // I
        5,   // V
        10,  // X
        50,  // L
        100, // C
        500, // D
        1000 // M
    };

    // initialize the values
    int *LettersLookup[256] = {nullptr};
    // set romanletters to value reference
    LettersLookup[((int)'I')] = IdxToValRomanLettersList;
    LettersLookup[((int)'V')] = IdxToValRomanLettersList + 1;
    LettersLookup[((int)'X')] = IdxToValRomanLettersList + 2;
    LettersLookup[((int)'L')] = IdxToValRomanLettersList + 3;
    LettersLookup[((int)'C')] = IdxToValRomanLettersList + 4;
    LettersLookup[((int)'D')] = IdxToValRomanLettersList + 5;
    LettersLookup[((int)'M')] = IdxToValRomanLettersList + 6;

    while (i < s.length())
    {
        cur = *LettersLookup[((int)s[i++])];
        if (cur > prev)
        {
            res += cur - (2 * prev);
        }
        else
        {
            res += cur;
        }
        prev = cur;
    }
    return res;
}