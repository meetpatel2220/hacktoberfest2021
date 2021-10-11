#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s) {
    int count = 0;
    for(int i=0; i<s.length(); i++){
        if(i%3==0){
            if(s.at(i)!= 'S')
                count++;
        }
        else if(i%3==1){
            if(s.at(i)!= 'O')
                count++;
        }
        else{
            if(s.at(i)!= 'S')
                count++;
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
