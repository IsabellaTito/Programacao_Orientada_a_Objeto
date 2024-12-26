#include <iostream>

int main(){

    for(int i=5; i>0; i--){
        for(int j=i; j<6; j++){
            std::cout<< '*';
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;

    for(int i=0; i<5;i++){
        for(int j=0;j<5;j++){
            (i>j)? std::cout<<' ' : std::cout<<'*';    
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i==0 || i==4)
                j==2? std::cout<<'*' : std::cout<<' ';
            else if(i==1 || i==3)
                (j==0 || j==4)? std::cout<<' ' : std::cout<<'*';
            else
                std::cout<<'*';
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;


    for(int i=0; i<4; i++){
        for(int j=0; j<7; j++){
            if(i==0)
                j==3? std::cout<<'*' : std::cout<<' ';
            else if(i==1)
                (j>1 && j<5)? std::cout<<'*' : std::cout<<' ';
            else if(i==2)
                (j!=0 &&j!=6)? std::cout<<'*' : std::cout<<' ';
            else
                std::cout<<'*';
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;

    return 0;
}