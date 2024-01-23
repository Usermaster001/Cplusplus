#include <iostream>

int binary(int a, int b, int c, int tmp){
    int res;
    if(tmp == 0){
        res = (b - a) / 2;
    }
    else if(tmp == 1){
        res = ((b - a) / 2) + a;
    }
    
    if ( res == c ) {
        std::cout << "Your otvet:" << res;
        return res;
    }else{
        std::cout << "Res:" << res << "\n";
        std::cout << "1)My res > your res\n";
        std::cout << "2)My res < your res\n";
        int n;
        std::cin >> n;
        if(n == 1){
            return binary(a,res,c,0);
        }
        else if(n == 2){
            return binary(res,b,c,1);
        }
    }
}

int main(int argc, char const *argv[])
{
    binary(0,100,90,0);
    return 0;
}
