#include "token.h"

class Lexer {
    private: 
        const char* start;
        const char* current;
    public:
        Lexer(const ISource& source);
};
