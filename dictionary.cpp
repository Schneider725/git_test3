#include <iostream>
#include <map>
using namespace std;
int main(){
    map <string,string> dictionary;
    bool okay1 = true;
    bool okay2 = true;
    while(okay1){
        string word;
        string definition;
        string ans;
        cout<<"enter the word you would like to define"<< endl;
        cin.ignore();
        getline(cin, word);
        cout<<"enter the definition" << endl;
        getline(cin,definition);
        //dictionary.insert(pair<string,string>(word,definition));
        dictionary[word] = definition;
        cout<<"would you like to add another definition? type yes or no. type end to end program" << endl;
        cin >> ans;
        if(ans == "end"){
            return 0;
        }
        if(ans == "yes"){
            okay2 = false;
        }
        if(ans != "yes"){
            okay1 = false;
            okay2 = true;
        }
        while(okay2){
            string ans;
            cout<<"enter the word you would like to know the meaning of" << endl;
            cin.clear();
            cin >> ans;
            auto it = dictionary.find(ans);
            if(it != dictionary.end()){
                cout << it -> second << endl;
            }
            else{
                cout<<"definition not found";
            }
            cout<<"would you like to search again?" << endl;
            cin.ignore();
            cin >> ans;
            if(ans != "yes"){
                okay2 = false;
                okay1 = true;
            }

        }
    }
    return 0;
}