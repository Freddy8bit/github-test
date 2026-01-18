#include<iostream>
#include<ranges>
#include<vector>
#include<algorithm>
#include<iterator>
#include<cstdlib>
#include<ctime>
#include<list>

int main(){
    while(true){
        std::string symbol;
        std::vector<std::string> symbole = {"+","-","/","*"};
        float zahl;
        float zahll;

        std::cout<< "Willkommen zu diesem Taschenrechner willst  plus '+' minus '-' geteilt '/' oder mal '*' rechnen ?:  ";
        std::cin>>symbol;

        std::cout<< "Jetzt gebe die erste zahl ein";
        std::cin>>zahl;
        std::cout<< "jetzt gebe die zweite Zahl ein";
        std::cin>>zahll;

        if(std::ranges::find(symbole, symbol) != symbole.end()){
            if(symbol == "+"){
                float plus = zahl + zahll;
                std::cout<< zahl << " + "<< zahll << " ist " << plus<<std::endl;
            }
            else if(symbol == "-"){
                float minus = zahl - zahll;
                std::cout<< zahl << " - "<< zahll << " ist " << minus<<std::endl;
            }
            else if(symbol == "/"){
                float geteilt = zahl / zahll;
                std::cout<< zahl << " / "<< zahll << " ist " << geteilt<<std::endl;
            }
            else if(symbol == "*"){
                float mal = zahl * zahll;
                std::cout<< zahl << " * "<< zahll << " ist " << mal<<std::endl;
            }
        }
        else {
            std::cout<< symbol << " ist keine gültige EIngabe"<<std::endl;
        }
    }




    return 0;
}