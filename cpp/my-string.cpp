#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

int split(const std::string& s, const std::string& delimiters, vector<string>& tokens) {
    std::string token;
    std::unordered_set<char> delimiter_set(delimiters.begin(), delimiters.end());

    for (char c : s) {
        if (delimiter_set.count(c)) {
            // 遇到分隔符，保存当前子串
            if (!token.empty()) {
                tokens.push_back(token);
                token.clear();
            }
        }
        else {
            token += c;
        }
    }
    // 处理最后一个子串
    if (!token.empty()) {
        tokens.push_back(token);
    }
    return 0;
}

int split(const std::string& s, char delimiter, vector<string>& tokens) {
    return split(s, std::string(1, delimiter), tokens);
}

string formatSet(const vector<string>& elements, const string& delimiter, const string& prefix="", const string& suffix="") {
    string result = prefix;
    for (size_t i = 0; i < elements.size(); i++) {
        result += elements[i];
        if (i != elements.size() - 1) {
            result += delimiter;
        }
    }
    result += suffix;
    return result;
}
