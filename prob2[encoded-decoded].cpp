#include <iostream>
#include <string>

using namespace std;

string encode(const string& s, int j) {
    string encoded_str = s;
    for (int i = j; i < encoded_str.length(); ++i) {
        encoded_str[i] = char(encoded_str[i] + 3);
    }
    return encoded_str;
}

string decode(const string& encoded_str, int j) {
    string decoded_str = encoded_str;
    for (int i = j; i < decoded_str.length(); ++i) {
        decoded_str[i] = char(decoded_str[i] - 3);
    }
    return decoded_str;
}

int main() {
    string sample_str = "I am a student";
    int j_value = 2;

    string encoded_result = encode(sample_str, j_value);
    cout << "Encoded String: " << encoded_result << endl;

    string decoded_result = decode(encoded_result, j_value);
    cout << "Decoded String: " << decoded_result << endl;

    return 0;
}
