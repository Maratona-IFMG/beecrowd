#include <bits/stdc++.h>


int main(){
    std::ios_base::sync_with_stdio(false);

    int input;
    scanf("%d", &input);
    int cube[input][input];
    int index;
    int sum = 0;
    int s1 = false;
    int o = 0;
    int zero[1][2];
    bool s = false;

    for(int i = 0; i < input; i++){
        for(int j = 0; j < input; j++){
            scanf("%d", &cube[i][j]);
            if(cube[i][j] == 0){
                index = i;
                zero[0][0] = i;
                zero[0][1] = j;
            }
        }
    }

    for(int i = 0; i < input; i++){
        for(int j = 0; j < input; j++){
            if(i != index){
                sum += cube[i][j];
                s1 = true;
            }else{
                o += cube[i][j];
                s = true;
            }
        }
        if(s && s1){
            break;
        }else if(s1 && !s){
            sum = 0;
            s1 = false;
            continue;
        }else{
            continue;
        }
    }

    printf("%d\n", sum - o);
    printf("%d\n", zero[0][0] + 1);
    printf("%d\n", zero[0][1] + 1);

    return 0;
}

