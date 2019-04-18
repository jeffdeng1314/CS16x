#include "./lab1_header.h"

int main(int argc, char*argv[]){

        int rows, cols, repeat=1;
        bool checking;


        if (argc != 3){
                cout<<"Please enter the correct values"<<endl;
                return 0;
        }


        checking = is_valid_dimensions(argv[1],argv[2]);

        if (checking == false){
                cout<<"Invalid values"<<endl;
                return 0;
        }

        rows = atoi(argv[1]);
        cols = atoi(argv[2]);
do{
        mult_div_values** table =  create_table(rows,cols);

        set_mult_values(table,rows,cols);
        set_div_values(table,rows,cols);

        delete_table(table,rows);
        
	cout<<"Would you like to see a different size matrix (0-no,1-yes)? ";
        cin >> repeat;
        if(repeat == 1){
                cout<<endl<<"Rows: ";
                cin >> rows;
                cout<<endl<<"Columns: ";
                cin >> cols;
        }
        //delete_table(table,rows);
        }while(repeat == 1);
        return 0;
}

