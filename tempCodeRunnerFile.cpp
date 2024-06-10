#include<iostream>
#include <cstdlib>
using namespace std;
class task1{
    private:
    int number;
    int pick;
    public:
    task1(int n,int p){
       number = n;
       pick = p;
    }
    void game(int num){
        int si = 0;
        int ei = num;
        while(si<ei){
            int mid = si+(ei-si)/2;
            if(pick >number){
                cout<<"Higher Guess";
                ei = mid -1;
            }
            else if(pick<number){
                cout<<"Lower Guess";
                si = mid +1 ;
            }
            else if(pick==number){
                cout<<"You Won ";
            }
        }
    }

};
int main(){
    int p;
    cout<<"Enter The Number (1-100)";
    cin>>p;
    int n = rand() % 100 + 1;
    task1 games(n,p);
    games.game(100);
    return 0;
}