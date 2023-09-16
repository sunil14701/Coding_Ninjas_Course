void trimSpaces(char input[]) {
    int j=0, size=0;
    for(int i=0;input[i]!='\0';i++) size++;
    for(int i=0;i<size;i++){
        if(input[i]!=' ') input[j++] = input[i];
    }
    input[j] = '\0';
}