class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(string s : strs){
            int len = s.size();
            string c = to_string(len);
            encoded_string = encoded_string + c + "/:" + s;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_string_list;
        int pos = 0;
        while(pos < s.size()){
            int delimit_indx = s.find("/:", pos);
            string num_str = s.substr(pos, delimit_indx - pos);
            int len = stoi(num_str);
            string str = s.substr(delimit_indx + 2, len);
            decoded_string_list.push_back(str);
            pos = delimit_indx + 2 + len;
        }
        return decoded_string_list;
    }
};
