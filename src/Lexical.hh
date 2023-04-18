#include <regex>
#include <string>
#include <vector>

class token{
    enum class tokenType{
        Keyword,
        Identifier,
        Value,
        Operator,
    } token;
    std::string value;
};

class tokens{
private:
public:
    std::vector<token> data;
    tokens(std::string s) {
        // 词法分析
        // 第一步删掉注释
        // 第二步分割字词
        const std::regex commit_m(R"(/\*.*?\*/)"),
                        commit_s(R"(//.*)"),
                        space_s(R"(\s*)");
        s = std::regex_replace(
                std::regex_replace(s, commit_m, ""),
            commit_s, "");
        
        std::sregex_token_iterator token_item(s.begin(), s.end(), space_s, -1),token_end;
        while (token_item != token_end) {
            token tk;
            // 判断值类型
            
            data.push_back(tk);
        }
        

    };
};