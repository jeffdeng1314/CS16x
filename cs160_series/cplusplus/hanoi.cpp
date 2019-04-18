

#include <iostream>
#include <ctime>
#define COLS 3

void print_array(int **&layout,int &rows);
using namespace std;


void tower(int disks, int **&b,int from_col, int to_col, int spare,int rows2){
    int i,j;
    
    if (disks == 1){
        for(i =0; i < rows2; i++){
            for(j =0; j < COLS;j++){
                if (b[i][j] > 0){
                    b[i][to_col] = b[i][j];
                }
                
                cout <<b[i][to_col] << "  ";
            }cout <<endl;
        }
        cout <<"-------"<<endl;
        cout <<endl;
    }
    else{
    
        tower(disks-1,b,from_col,to_col,spare,rows2);
        tower(1,b,from_col,spare,to_col,rows2);
        tower(disks-1,b,spare,from_col,to_col,rows2);
    
    }
    /*
 *     if (disks > 0){
 *         
 *                 tower(disks-1,b,from_col,spare,to_col,rows2);
 *                         for(i =0; i < rows2; i++){
 *                                     for(j =0; j < COLS;j++){
 *                                                     
 *                                                                     cout <<b[i][j] << "  ";
 *                                                                                 }cout <<endl;
 *
 *                                                                                         }
 *                                                                                                 cout <<"-------"<<endl;
 *                                                                                                         cout <<endl;
 *                                                                                                                 tower(disks-1,b,spare,to_col,from_col,rows2);
 *
 *                                                                                                                     }
 *                                                                                                                         */
    
    /*
 *     if (disks >= 1){
 *             tower(disks-1,b,from_col,spare,to_col);
 *                     for(int i =0; i < disks; i ++){
 *                                 if (b[i][from_col] <= 1)
 *                                                 b[i][to_col] = b[disks][from_col];
 *                                                         }
 *                                                                 print_array(b, disks);
 *                                                                         tower(disks-1,b,from_col,spare,to_col);
 *
 *                                                                             }
 *                                                                                 */
}



void print_array(int **&layout,int &rows){

    layout = new int*[rows];
    int i,j=0;
    for (i =0; i < rows; i++){
        layout[i] = new int[COLS];
        for(j =0; j < COLS; j++){

            layout[i][j] = 0;
            
            layout[i][0] = i+1;

            cout << layout[i][j] << "  ";
        }cout <<endl;
        
    }
    cout <<"-------"<<endl;
    cout <<endl;

}


void clear(int **&layout,int rows){

    for (int i =0;i < rows;i++){
        for(int j =0; j< COLS;j++){
            delete []layout[i];
        }
        
    }
    delete []layout;
    layout = NULL;
}



int main() {

    int ** layout = NULL;
    int rows = 0,rows2 =0;
    cout <<"How many Disks do you want?"<<endl;
    cin >> rows;
    cout <<endl;
    rows2 = rows;
    print_array(layout,rows);
    tower(rows,layout,0,1,2,rows2);
    //clear(layout,rows);
    
    
    return 0;
}

