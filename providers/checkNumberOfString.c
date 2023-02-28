int isNumber(char* s, int size) {
    int i;
    for(i= 0; i != size; i++) {
        if(!(*(s+i) >= '0' && *(s+i) <= '9')) return 0;
    }
    return 1;
}