#include "./Lexical.hh"
#include <regex>
#include <stdio.h>

namespace cpm {
    namespace Lexical {
        tokens::tokens(std::string s) {

            for (size_t start = 0, offset = 0;s[start + offset] != EOF;offset++) {
                switch (s[start + offset]) {
                case '/': // 现在一定是遇到注释了,就像现在这样
                    if (s[start + offset] + 1 == '/') {
                        /* code */
                    } else if (s[start + offset] + 1 == '*') {
                    
                    } else {
                        cpm::status = 1;
                        return;
                    }
                    
                    break;
                
                default:
                    break;
                }
                token t(s.substr(start,offset));
            }
            
            
        }
    }
} 