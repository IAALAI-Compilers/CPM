#include <regex>
#include <string>
#include <vector>
#pragma once

namespace cpm {
namespace Lexical {

struct token {
    enum class Type {
        Keyword,
        Identifier,
        Value,
        Operator,
        Macro,
        Unknown
    } type = Type::Unknown;
    std::string value;
    token(Type T = Type::Unknown,std::string s = "") {};
    token(std::string s) {
        // prase s match trie,is keyword
    }
};

static const std::regex commit_m(R"(/\*.*?\*/)", std::regex_constants::optimize),
            commit_s(R"(//.*)", std::regex_constants::optimize);

class tokens : public std::vector<token> {
public:
    tokens(std::string s);
    tokens operator+(const tokens &a);
};
}  // namespace Lexical
}  // namespace cpm