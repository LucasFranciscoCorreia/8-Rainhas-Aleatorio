#include <stdio.h>
#include <time.h>
#include <locale.h>
main(){
    srand(time(NULL));
    setlocale(LC_ALL,"portuguese");
    char m[8][8];
    int i,j;
    while(1){
        for(i = 0;i < 8;i++){
            for(j = 0;j < 8;j++){
                m[i][j] = '_';
            }
        }
        int rainhas = 0;
        int k, z;
        while(rainhas < 8){
            k = 1;
            if(rainhas < 5){
                i = rand()%8;
                j = rand()%8;
                while(m[i][j] != '_'){
                    i = rand()%8;
                    j = rand()%8;
                }
                m[i][j] = 'R';
                rainhas++;
                k=1;
                while(i+k < 8){
                    m[i+k][j] = 'x';
                    k++;
                }
                k=1;
                while(j+k < 8){
                    m[i][j+k] = 'x';
                    k++;
                }
                k=1;
                while(i-k >= 0){
                    m[i-k][j] = 'x';
                    k++;
                }
                k = 1;
                while(j-k >= 0){
                    m[i][j-k] = 'x';
                    k++;
                }
                k =1;
                while(i+k < 8 && j+k < 8){
                    m[i+k][j+k] = 'x';
                    k++;
                }
                k = 1;
                while(i-k >= 0 && j-k >= 0){
                    m[i-k][j-k] = 'x';
                    k++;
                }
                k=1;
                while(i + k < 8 && j-k >=0){
                    m[i+k][j-k] = 'x';
                    k++;
                }
                k = 1;
                while(i-k >= 0 && j+k <8){
                    m[i-k][j+k] = 'x';
                    k++;
                }
            }else{
                for(i = 0;i < 8;i++){
                    for(j = 0;j < 8;j++){
                        if(m[i][j] == '_'){
                            m[i][j] = 'R';
                            rainhas++;
                            k = 1;
                            while(i+k < 8){
                                m[i+k][j] = 'x';
                                k++;
                            }
                            k=1;
                            while(j+k < 8){
                                m[i][j+k] = 'x';
                                k++;
                            }
                            k=1;
                            while(i-k >= 0){
                                m[i-k][j] = 'x';
                                k++;
                            }
                            k = 1;
                            while(j-k >= 0){
                                m[i][j-k] = 'x';
                                k++;
                            }
                            k =1;
			                while(i+k < 8 && j+k < 8){
			                    m[i+k][j+k] = 'x';
			                    k++;
			                }
			                k = 1;
			                while(i-k >= 0 && j-k >= 0){
			                    m[i-k][j-k] = 'x';
			                    k++;
			                }
			                k=1;
			                while(i + k < 8 && j-k >=0){
			                    m[i+k][j-k] = 'x';
			                    k++;
			                }
			                k = 1;
			                while(i-k >= 0 && j+k <8){
			                    m[i-k][j+k] = 'x';
			                    k++;
			                }
                        }
                    }
                }
                if(rainhas != 8){
                    for(i = 0;i < 8;i++){
                        for(j = 0;j < 8;j++){
                            m[i][j] = '_';
                        }
                    }
                    rainhas = 0;
                }
            }
        }
        for(i = 0;i < 8;i++){
            printf("|");
            for(j = 0;j < 8;j++){
                printf(" %c |", m[i][j]);
            }
            printf("\n");
        }
        system("pause");
        system("cls");
    }
}
