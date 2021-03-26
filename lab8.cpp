#include <iostream>
#include <tuple>
using namespace std;
// lab assignment 8
// The generation of the three lower triangular matrices are in the main method.
// printing of the first 20 elements of all three lower triangular matrices are in the main method
// printing of the first 20 elements of b[] is in the main method
// below are the 2 methods LinearIndx() method and /LinearIndx() methods


// initialising the global one dimensional array
  int b[36];
// initialising the global two dimensional array
  int A[6][6];

// declaring globl array
int temp_array[2];


//LinearIndx() method
int LinearIndx(int i, int j){

      int index = (pow(i, 2) + i)/2 + j;
      return index;

}
// InverseIdx() method
  tuple<int, int> InverseIdx(int A[6][6], int I, int b[36]){
      for(int i = 0; i <6; i++ ){
          for(int j = 0; j < 6; j++){
            if (j<=i){
                    int SecondI = (((pow(i,2))+i)/2) + j;
                    if (SecondI == I){
                        temp_array[0] = i;
                        temp_array[1] = j;

                          return {temp_array[0], temp_array[1]};
                    }
            }
          }
      }
      return {temp_array[0], temp_array[1]};
 }

int main(){
  // generating lower triangular array

          for(int i = 0; i<6; i++){
              for(int j = 0; j < 6; j++){
                if(j <= i){

                  A[i][j] = rand()%70;
                }

                else{
                  A[i][j] = -1;
                }
              }

          }

          for(int i = 0; i < 6; i++){
            for(int j = 0; j < 6; j++){
                    cout << A[i][j] << endl;
            }

          }

// generating three lower triangular arrays
          // first lower triangle first_lower[8][8]
          int first_lower[8][8];
                for(int i = 0; i<8; i++){
                    for(int j = 0; j < 8; j++){
                      if(j <= i){

                        first_lower[i][j] = rand()%1000;
                      }

                      else{
                        first_lower[i][j] = -1;
                      }
                    }
                    // to print out the first 20 elements of A[8][8]
                                  for(int t = 0; t < 1; t++){
                                          cout<< "this is to print out the first twenty elements of A[8][8]"<<endl;
                                          for(int l = 0; l < 20; l++){
                                              cout << A[t][l]<< endl;
                                          }
                                  }
                }

                for(int i = 0; i < 8; i++){
                  for(int j = 0; j < 8; j++){
                          cout << first_lower[i][j] << endl;
                  }
                }

                // second_lower triangle second_lower[32][32]
                int second_lower[32][32];
                      for(int i = 0; i<32; i++){
                          for(int j = 0; j < 32; j++){
                            if(j <= i){

                              second_lower[i][j] = rand()%1000;
                            }

                            else{
                              second_lower[i][j] = -1;
                            }
                          }
                          // to print out the first 20 elements of A[32][32]
                                        for(int t = 0; t < 1; t++){
                                                cout<< "this is to print out the first twenty elements of A[32][32]"<<endl;
                                                for(int l = 0; l < 20; l++){
                                                    cout << A[t][l]<< endl;
                                                }
                                        }
                      }

                      for(int i = 0; i < 32; i++){
                        for(int j = 0; j < 32; j++){
                                cout << second_lower[i][j] << endl;
                        }
                      }

                      // third_lower triangle third_lower[128][128]
                      int third_lower[128][128];
                            for(int i = 0; i<128; i++){
                                for(int j = 0; j < 128; j++){
                                  if(j <= i){

                                    third_lower[i][j] = rand()%1000;
                                  }

                                  else{
                                    third_lower[i][j] = -1;
                                  }
                                }
                                // to print out the first 20 elements of A[128][128]
                                              for(int t = 0; t < 1; t++){
                                                      cout<< "this is to print out the first twenty elements of A[128][128]"<<endl;
                                                      for(int l = 0; l < 20; l++){
                                                          cout << A[t][l]<< endl;
                                                      }
                                              }
                            }

                            for(int i = 0; i < 128; i++){
                              for(int j = 0; j < 128; j++){
                                      cout << third_lower[i][j] << endl;
                              }
                            }




// output each array element's value
      int t = 0;

    for ( int i = 0; i < 4; i++ )
      for ( int j = 0; j < i+1; j++ ) {
        b[t] = A[i][j];
         t++;

 }
 // testing out Linearindx and inverseidx functions
      cout << "testing out linear index function:"<<endl;
      cout << b[LinearIndx(3,2)] <<endl;
      cout << "Printing out the first 20 elements of b[]"<<endl;
      for(int i=0; i<20; i++)
       {
               cout<<b[i]<< " :   indices ("<< i << ")" << endl;
       }


    return 0;
}
