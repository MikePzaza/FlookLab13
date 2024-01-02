#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void showImage(const bool image[N][M]){
    for(int i =0 ; i<M+2 ;i++ ) cout << "-";
    cout << "\n";
    for(int j =0 ; j <N ;j++ ){
        cout << "|";
        for(int k =0 ; k<M ; k++){
            if( image[j][k] == 1 ) cout << "*";
            else cout << " ";
        }
        cout << "|\n";
    
    }
     for(int i =0 ; i<M+2 ;i++ ) cout << "-";
    cout << "\n";
}

void updateImage(bool image[N][M],int s,int x,int y){
   for( int j=0 ; j<N ; j++ )
       for( int k =0 ; k<M ; k++ )
           if( sqrt(pow((j-x),2)+pow((k-y),2)) <= s-1 )
               image[j][k] = 1; 

              
}