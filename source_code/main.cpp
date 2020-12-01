#include <iostream>
using namespace std;
int main() {
  do{
    ;
    int a,b,c,d;
    cout<<endl;
    cout<<"A11:";
    cin>>a;
    cout<<"A12:";
    cin>>b;
    cout<<"A21:";
    cin>>c;
    cout<<"A22:";
    cin>>d;
    int Matrix_A[4] = {a,b,c,d};
    for(int i=0; i<=3; i++){
        cout<<Matrix_A[i]<<" ";
        if (i==1){
            cout<<endl;
       }
    }
//Determinant
    float Determinant = (Matrix_A[0]*Matrix_A[3])-(Matrix_A[1]*Matrix_A[2]);
    cout<<endl<<"Determinant:"<<Determinant<<endl;

    if(Determinant != 0){
        //Changing Matrix_A elements
        int elemnt_holda = Matrix_A[3];
        int elment_holdd = Matrix_A[0];
        Matrix_A[0] = elemnt_holda;
        Matrix_A[1] = -Matrix_A[1];
        Matrix_A[2]= -Matrix_A[2];
        Matrix_A[3] = elment_holdd;

        for(int i=0; i<=3; i++){
            cout<<Matrix_A[i]<<" ";
            if (i==1){
                cout<<endl;
            }
        }

        cout<<endl;

        float inv_determinant = 1/Determinant;
        float inverse[4];

        inverse[0] = inv_determinant*Matrix_A[0];
        inverse[1] = inv_determinant*Matrix_A[1];
        inverse[2] = inv_determinant*Matrix_A[2];
        inverse[3] = inv_determinant*Matrix_A[3];

        cout<<"The inverse of matrix is:\n";

        for (int i = 0; i <= 3; ++i) {
            cout<<inverse[i]<<"  ";
            if(i==1){
                cout<<endl;
            }
        }
    }else{
        cout<<"Given matrix do not have inverse because, matrix is singular";
    }

  }while(true);
    return 0;
}
