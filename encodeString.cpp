#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    string ipStr,result = "";
    cin>>ipStr;

    for(int i=0; i<ipStr.length(); i++){
        
        if(ipStr[i] != ']'){
            result.push_back(ipStr[i]);
        }else{

            //int checker = result.length()-1;
            string str = "", numStr = "";

            while(result[result.length()-1] != '['){
                str.push_back(result[result.length()-1]);
                result.pop_back();
                //checker--;
            }
            reverse(str.begin(),str.end());
            result.pop_back();//removed '['
            //checker--;
            
            //getting numbers
            while(result[result.length()-1] >= '0' && result[result.length()-1] <= '9'){
                numStr.push_back(result[result.length()-1]);
                result.pop_back();
            }

            reverse(numStr.begin(),numStr.end());
            int num = stoi(numStr);

            while(num != 0){
                result.append(str);
                num--;
            }
        }
    }

    cout<<result;

}