#include <romanToInt.h>
#include <iostream>
#include <Add/Add.h>

Roman::Roman()
{
}

int Roman::ToInt(std::string s)
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
    LettersLookup[((int)'V')] = add(IdxToValRomanLettersList, 1);
    LettersLookup[((int)'X')] = add(IdxToValRomanLettersList, 2);
    LettersLookup[((int)'L')] = add(IdxToValRomanLettersList, 3);
    LettersLookup[((int)'C')] = add(IdxToValRomanLettersList, 4);
    LettersLookup[((int)'D')] = add(IdxToValRomanLettersList, 5);
    LettersLookup[((int)'M')] = add(IdxToValRomanLettersList, 6);

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