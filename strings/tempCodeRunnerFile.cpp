string skipSymBOLANDspaces(string &name){
    string result = "";

    for(char ch:name){
        if(isAlphaNumeric(ch)){
            result = result+ ch;
        }
    }

    return result;
}