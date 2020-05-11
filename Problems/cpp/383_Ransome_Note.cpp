/*
Question Link :- https://leetcode.com/problems/ransom-note/
*/

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int len1 = ransomNote.length(), len2 = magazine.length();
        vector<int> hash1(26, 0), hash2(26, 0);
        for (int i = 0; i < len1; i++)
            hash1[(int)(ransomNote[i] - 'a')]++;
        for (int i = 0; i < len2; i++)
            hash2[(int)(magazine[i] - 'a')]++;
        for (int i = 0; i < 26; i++)
        {
            if (hash1[i] > hash2[i])
                return false;
        }
        return true;
    }
};