string solve(string text, string key) {
    for(int i = 0; i < text.length(); i++){
        text[i] =(( text[i]-97 + key[i]-97 )% 26)+97;
    }
    return text;
}
