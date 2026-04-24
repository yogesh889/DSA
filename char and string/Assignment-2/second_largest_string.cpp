#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char str[] = "a quick brown fox jumps over the lazy dog";

    char largest[50] = "";
    char secondLargest[50] = "";

    int maxLen = 0, secondMaxLen = 0;

    int i = 0;
    while(str[i] != '\0'){

        char word[50];
        int j = 0;

        // extract word
        while(str[i] != ' ' && str[i] != '\0'){
            word[j++] = str[i++];
        }
        word[j] = '\0';

        int len = strlen(word);

        // update largest and second largest
        if(len > maxLen){
            secondMaxLen = maxLen;
            strcpy(secondLargest, largest);

            maxLen = len;
            strcpy(largest, word);
        }
        else if(len > secondMaxLen && len != maxLen){
            secondMaxLen = len;
            strcpy(secondLargest, word);
        }

        if(str[i] == ' ') i++; // skip space
    }

    cout << "Second Largest Word: " << secondLargest << endl;

    return 0;
}