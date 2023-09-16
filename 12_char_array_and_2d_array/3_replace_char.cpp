void replaceCharacter(char input[], char c1, char c2) {
    int size = 0;
    for(int i=0;input[i]!='\0';i++) size++;
    for(int i=0;i<size;i++) if(input[i]==c1) input[i] = c2;   
}