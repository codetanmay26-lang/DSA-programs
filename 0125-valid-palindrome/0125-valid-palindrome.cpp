class Solution {
public:
  char Lc(char st){
    if(st>='a' && st<='z'){
        return st;
    }
    else{
        char temp =st-'A'+'a';
    return temp;
    }
  }
      // Check if a character is alphanumeric (letter or digit)
    bool isAlphanumeric(char c) {
        return (c >= 'a' && c <= 'z') ||
               (c >= 'A' && c <= 'Z') ||
               (c >= '0' && c <= '9');
    }
    bool isPalindrome(string s) {
    int ste=0;
    int e= s.size()-1;
    
    while(ste<e){

  // Skip non-alphanumeric characters from the start
            while (ste < e && !isAlphanumeric(s[ste])) ste++;

// Skip non-alphanumeric characters from the end
            while (ste < e && !isAlphanumeric(s[e])) e--;

            // Compare lowercase characters
        if(Lc(s[ste]) != Lc(s[e])){
            return 0;
        }
        else{
            ste++;
            e--;
        }
    }
   return 1;
    }
};