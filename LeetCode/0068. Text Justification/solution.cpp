/**
 * 27 / 27 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 7.2 MB 
 */
class Solution {
public:
    string gen_blank(int n) {
        return ;
    } 
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> text;
        vector<string> line; 
        int remainWidth = maxWidth;
        for (int i = 0; i < words.size();) {
            if (words[i].size() + line.size() <= remainWidth) {
                line.push_back(words[i]);
                remainWidth -= words[i].size();
                i ++;
            }
            // if the current line is the last line
            if (i >= words.size()) {
                ostringstream oss;
                copy(line.begin(), line.end() - 1, ostream_iterator<string>(oss, " "));
                oss << line.back();
                string blank = gen_blank(remainWidth - line.size() + 1);
                text.push_back(oss.str() + blank);
            }
            // or it isn't the last line, but need to be added to the text
            else if (words[i].size() + line.size() > remainWidth) {
                // more than one word  
                if (line.size() > 1) {
                    int extra = remainWidth % (line.size() - 1); 
                    int gap = remainWidth / (line.size() - 1); 
                    string blank = gen_blank(gap);
                    text.push_back(line[0]);
                    for (int i = 1; i < line.size(); ++ i) {
                        text.back() += blank;
                        if (extra --> 0) {
                            text.back() += " ";
                        }
                        text.back() += line[i];
                    }
                } 
                // only one word
                else {
                    string blank = gen_blank(remainWidth);
                    text.push_back(line.back() + blank);
                }

                // reinitialize
                line.clear();
                remainWidth = maxWidth;
            }
        }
        return text;
    }
};
