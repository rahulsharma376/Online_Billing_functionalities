//This code can be optimized but due to exam, I am not going to invest in this right now, Sorry.
#include<iostream>
#include<map>
#include<set>
#include<string>
#include<cstring>
#include<list>
using namespace std;

int main(){
    map<string,int> products;      //Default Entries of items
    map<string,int> quantity;      //Quantity stored by user
    map<string,int> userEnd;       //Entries of items by User
    map<string,int> userQuan;      //Quantity of item stored of new added items from user end

    //Product Entries
    products["Potato"]=22;
    products["Onion"]=30;
    products["Tomato"]=27;
    products["Cabbage"]=34;
    products["Cauliflower"]=33;
    products["Cream"]=140;
    products["AloeVera"]=90;
    products["Powder"]=75;
    products["Vasoline"]=110;
    products["Kajal"]=60;
    products["MotionDetector"]=6490;
    products["Laptop"]=59990;
    products["Drone"]=12000;
    products["Jammer"]=7990;
    products["RasberriPi"]=4000;
    products["Pen"]=10;
    products["InstrumentBox"]=90;
    products["Drafter"]=220;
    products["Copy"]=60;
    products["Calculator"]=1100;
    
    int ch;
    while(true){
        cout<<endl<<"***********Welcome to Sviet Store************"<<endl<<endl;
        cout<<"1. Product Available"<<endl;
        cout<<"2. Modify your cart"<<endl;
        cout<<"3. Print your Bill"<<endl;
        cout<<"4. Admin Panel"<<endl;
        cout<<"5. Feedback"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Select your Option: "<<endl;
        cin>>ch;
        switch(ch){

            //Product Available
            case 1:{
                while(true){
                    int sub_sel;
                    char out_sel;
                    cout<<"*****Product Available*****"<<endl;
                    cout<<"1. Grocery Compartment"<<endl;
                    cout<<"2. Cosmetics Compartment"<<endl;
                    cout<<"3. Electronic Compartment"<<endl;
                    cout<<"4. Stationary Compartment"<<endl;
                    cout<<"5. Added by User"<<endl<<endl;
                    cout<<"Select from Menu : "<<endl;
                    cin>>sub_sel;
                    switch (sub_sel)
                    {
                        case 1:{
                            while(true){
                                int in_sel;
                                float quan;
                                char sub_ch;
                                cout<<"*****Grocery Compartment*****"<<endl;
                                cout<<"1. Potato     Rs.22/kg"<<endl;
                                cout<<"2. Cabbage    Rs.34/kg"<<endl;
                                cout<<"3. Tomato     Rs.27/kg"<<endl;
                                cout<<"4. Onion      Rs.30/kg"<<endl;
                                cout<<"5. Cauliflower  Rs.33/kg"<<endl;
                                cout<<"Select from menu:"<<endl;
                                cin>>in_sel;
                                cout<<"Enter the Quantity (in Kg): "<<endl;
                                switch(in_sel)
                                {
                                    case 1:{
                                        
                                        cin>>quan;
                                        quantity["Potato"]=quan;
                                        break;
                                    }
                                    case 2:{
                                        
                                        cin>>quan;
                                        quantity["Cabbage"]=quan;
                                        break;
                                    }
                                    case 3:{
                                        
                                        cin>>quan;
                                        quantity["Tomato"]=quan;
                                        break;
                                    }
                                    case 4:{
                                        
                                        cin>>quan;
                                        quantity["Onion"]=quan;
                                        break;
                                    }
                                    case 5:{
                                        
                                        cin>>quan;
                                        quantity["Cauliflower"]=quan;
                                        break;
                                    }
                                    default:{
                                        cout<<"Invalid Argument"<<endl;
                                        break;
                                    }
                                }

                                cout<<"Do you want to add more Grocery Press [A] or Press [B] to go back to Previous Menu: "<<endl;
                                cin>>sub_ch;
                                if(sub_ch=='b' || sub_ch=='B'){
                                    break;
                                }
                            }
                            break;
                        }
                        
                        case 2:{
                            while(true){
                                int in_sel, quan;
                                char sub_ch;
                                cout<<"*****Cosmetics Compartment*****"<<endl;
                                cout<<"1. Cream"<<endl;
                                cout<<"2. AloeVera"<<endl;
                                cout<<"3. Powder"<<endl;
                                cout<<"4. Vasoline"<<endl;
                                cout<<"5. Kajal"<<endl;
                                cout<<"Select from menu:"<<endl;
                                cin>>in_sel;
                                cout<<"Enter the Quantity (in Pieces): "<<endl;
                                switch(in_sel)
                                {
                                    case 1:{
                                        
                                        cin>>quan;
                                        quantity["Cream"]=quan;
                                        break;
                                    }
                                    case 2:{
                                        
                                        cin>>quan;
                                        quantity["AloeVera"]=quan;
                                        break;
                                    }
                                    case 3:{
                                        
                                        cin>>quan;
                                        quantity["Powder"]=quan;
                                        break;
                                    }
                                    case 4:{
                                        
                                        cin>>quan;
                                        quantity["Vasoline"]=quan;
                                    break;
                                    }
                                    case 5:{
                                        
                                        cin>>quan;
                                        quantity["Kajal"]=quan;
                                        break;
                                    }
                                    default:{
                                        cout<<"Invalid Argument"<<endl;
                                        break;
                                    }
                                }

                                cout<<"Do you want to add more Cosmetics Press [A] or Press [B] to go back to Previous Menu: "<<endl;
                                cin>>sub_ch;
                                if(sub_ch=='b' || sub_ch=='B'){
                                    break;
                                }
                            }
                            break;
                        }

                        case 3:{
                            while(true){
                                int in_sel, quan;
                                char sub_ch;
                                cout<<"*****Electronics Compartment*****"<<endl;
                                cout<<"1. MotionDetector"<<endl;
                                cout<<"2. Laptop"<<endl;
                                cout<<"3. Drone"<<endl;
                                cout<<"4. Network Jammer"<<endl;
                                cout<<"5. Rasberri PI"<<endl;
                                cout<<"Select from menu:"<<endl;
                                cin>>in_sel;
                                cout<<"Enter the Quantity (in Pieces): "<<endl;
                                switch(in_sel)
                                {
                                    case 1:{
                                        
                                        cin>>quan;
                                        quantity["MotionDetector"]=quan;
                                        break;
                                    }
                                    case 2:{
                                        
                                        cin>>quan;
                                        quantity["Laptop"]=quan;
                                        break;
                                    }
                                    case 3:{
                                        
                                        cin>>quan;
                                        quantity["Drone"]=quan;
                                        break;
                                    }
                                    case 4:{
                                        
                                        cin>>quan;
                                        quantity["Jammer"]=quan;
                                        break;
                                    }
                                    case 5:{
                                        
                                        cin>>quan;
                                        quantity["RasberriPi"]=quan;
                                        break;
                                    }
                                    default:{
                                        cout<<"Invalid Argument"<<endl;
                                        break;
                                    }
                                }

                                cout<<"Do you want to add more Electronics Press [A] or Press [B] to go back to Previous Menu: "<<endl;
                                cin>>sub_ch;
                                if(sub_ch=='b' || sub_ch=='B'){
                                    break;
                                }
                            }
                            break;
                        }

                        case 4:{
                            while(true){
                                int in_sel, quan;
                                char sub_ch;
                                cout<<"*****Stationary Compartment*****"<<endl;
                                cout<<"1. Pen"<<endl;
                                cout<<"2. InstrumentBox"<<endl;
                                cout<<"3. Drafter"<<endl;
                                cout<<"4. Copy"<<endl;
                                cout<<"5. Calculator"<<endl;
                                cout<<"Select from menu:"<<endl;
                                cin>>in_sel;
                                cout<<"Enter the Quantity (in Pieces): "<<endl;
                                switch(in_sel)
                                {
                                    case 1:{
                                        
                                        cin>>quan;
                                        quantity["Pen"]=quan;
                                        break;
                                    }
                                    case 2:{
                                        
                                        cin>>quan;
                                        quantity["InstrumentBox"]=quan;
                                        break;
                                    }
                                    case 3:{
                                        
                                        cin>>quan;
                                        quantity["Drafter"]=quan;
                                        break;
                                    }
                                    case 4:{
                                        
                                        cin>>quan;
                                        quantity["Copy"]=quan;
                                        break;
                                    }
                                    case 5:{
                                        
                                        cin>>quan;
                                        quantity["Calculator"]=quan;
                                        break;
                                    }
                                    default:{
                                        cout<<"Invalid Argument"<<endl;
                                        break;
                                    }
                                }

                                cout<<"Do you want to add more Stationary Items Press [A] or Press [B] to go back to Previous Menu: "<<endl;
                                cin>>sub_ch;
                                if(sub_ch=='b' || sub_ch=='B'){
                                    break;
                                }
                            }
                            break;
                        }

                        //Added by User
                        case 5:{
                            while(true){
                                int i=1, in_sel, quan;
                                char sub_ch;

                                if(userEnd.empty()){
                                    cout<<"No any Product."<<endl;
                                    break;
                                }

                                cout<<"*****Added by User*****"<<endl;
                                map<string,int>::iterator itr;
                                for(itr = userEnd.begin() ; itr != userEnd.end() ; itr++){
                                    cout<< i++ << ". " <<itr->first<<"     "<<itr->second<<" [Kg | Piece]."<<endl;
                                }
                                
                                cout<<"Select from menu:"<<endl;
                                cin>>in_sel;
                                i=1;
                                for(itr = userEnd.begin() ; itr != userEnd.end() ; itr++){
                                    if(i++ == in_sel){
                                        cout<<"Enter the Quantity [ /Kg | /Pc] : "<<endl;
                                        cin>>quan;
                                        userQuan[itr->first] = quan;
                                        break;
                                    }
                                }
                                

                                cout<<"Do you want to add More Items Press [A] or Press [B] to go back to Previous Menu: "<<endl;
                                cin>>sub_ch;
                                if(sub_ch=='b' || sub_ch=='B'){
                                    break;
                                }
                            }
                            break;
                        }
                    
                        default:{
                            cout<<"No such Department Available."<<endl;
                            break;
                        }
                    }

                    cout<<"Do you want to add more items [y/n]: "<<endl;
                    cin>>out_sel;
                    if(out_sel=='N' || out_sel=='n'){
                        break;
                    }
                }
                break;
            }
            
            //Modify the cart
            case 2:{
                while(true){
                    int i = 0;
                    float sum = 0;
                    char out_sel;
                    cout<<"Items in your cart : "<<endl;
                    map<string,int>::iterator itr;
                    cout<<"Items"<<"         "<<"Price"<<"         "<<"Quantity"<<endl;
                    for(itr=quantity.begin();itr!=quantity.end();itr++){
                        if(quantity.empty()){
                            cout<<"No item in your cart."<<endl;
                            break;
                        }
                        cout<<++i<<". "<<itr->first<<"         "<<products[itr->first]<<"    X     "<<itr->second<<endl;
                    }

                    //Added by Admin Later
                    for(itr=userQuan.begin();itr!=userQuan.end();itr++){
                        if(userQuan.empty()){
                            cout<<"No item in your cart."<<endl;
                            break;
                        }
                        cout<<++i<<". "<<itr->first<<"         "<<products[itr->first]<<"    X     "<<itr->second<<endl;
                    }
                    int item;
                    cout<<"Enter the Index number of the item : "<<endl;
                    cin>>item;
                    i=1;
                    int val;
                    for(itr=quantity.begin();itr!=quantity.end();itr++){
                        if(quantity.empty()){
                            cout<<"No item in your cart."<<endl;
                            break;
                        }
                        if(i==item){
                            cout<<"Enter the Quantity you want : "<<endl;
                            cin>>val;
                            quantity[itr->first]=val;
                            if(val == 0){
                                quantity.erase(itr);
                            }
                            break;
                        }
                        i++;
                    }

                    //Added by Admin Later

                    for(itr=userQuan.begin();itr!=userQuan.end();itr++){
                        if(userQuan.empty()){
                            cout<<"No item in your cart."<<endl;
                            break;
                        }
                        if(i==item){
                            cout<<"Enter the Quantity you want : "<<endl;
                            cin>>val;
                            userQuan[itr->first]=val;
                            if(val == 0){
                                userQuan.erase(itr);
                            }
                            break;
                        }
                        i++;
                    }
                    if(i!=item){
                        cout<<"You have entered the wrong item number."<<endl;
                    }
                    cout<<"Do you remove more Press {A} or to go back to main menu press {B} : "<<endl;
                    cin>>out_sel;
                    if(out_sel=='b' || out_sel=='B'){
                        break;
                    }
                    
                }
                break;
            }

            //Printing the Bill
            case 3:{
                int i = 0;
                float sum = 0;
                char out_sel;
                cout<<"Items in your cart : "<<endl;
                map<string,int>::iterator itr;
                cout<<"Items"<<"         "<<"Price"<<"         "<<"Quantity"<<endl;
                for(itr=quantity.begin();itr!=quantity.end();itr++){
                    if(quantity.empty()){
                        cout<<"No item in your cart."<<endl;
                        break;
                    }
                    cout<<++i<<". "<<itr->first<<"         "<<products[itr->first]<<"    X     "<<itr->second<<endl;
                    sum = sum + (products[itr->first] * itr->second);
                }

                //Added by Admin later
                for(itr=userQuan.begin();itr!=userQuan.end();itr++){
                    if(userQuan.empty()){
                        cout<<"No item in your cart."<<endl;
                        break;
                    }
                    cout<<++i<<". "<<itr->first<<"         "<<userEnd[itr->first]<<"    X     "<<itr->second<<endl;
                    sum = sum + (userEnd[itr->first] * itr->second);
                }

                if(sum>=25000){
                    cout<<"Discount Applied: 10 %"<<endl<<endl;
                    cout<<"Total Amount to be paid : "<<(0.90*sum)<<endl<<endl;
                } else{
                    cout<<"Total Amount to be paid : "<<sum<<endl;
                }
                
                cout<<"Do you print your bill Press Y or Press N to modify your cart : "<<endl;
                cin>>out_sel;
                if(out_sel=='y' || out_sel=='Y'){
                    i=0,sum=0;
                    cout<<"Items"<<"         "<<"Price"<<"         "<<"Quantity"<<endl;
                    for(itr=quantity.begin();itr!=quantity.end();itr++){
                        if(quantity.empty()){
                            cout<<"No item in your cart."<<endl;
                            break;
                        }
                        cout<<++i<<". "<<itr->first<<"         "<<products[itr->first]<<"    X     "<<itr->second<<endl;
                        sum = sum + (products[itr->first] * itr->second);
                    }

                    //Added by admin later
                    for(itr=userQuan.begin();itr!=userQuan.end();itr++){
                        if(userQuan.empty()){
                            cout<<"No item in your cart."<<endl;
                            break;
                        }
                        cout<<++i<<". "<<itr->first<<"         "<<userEnd[itr->first]<<"    X     "<<itr->second<<endl;
                        sum = sum + (userEnd[itr->first] * itr->second);
                    }

                    if(sum>=25000){
                        cout<<"Amount: "<<sum<<endl;
                        cout<<"Discount Applied: 10 %"<<endl<<endl;
                        cout<<"The total amount is "<<(0.90*sum)<<"."<<endl<<endl;
                        cout<<"Thank you, Visit again."<<endl;
                    } else{
                        cout<<"The total amount is "<<sum<<"."<<endl<<endl;
                        cout<<"Thank you, Visit again."<<endl;
                    }
                    return 0;
                }
                break;
            }

            //Admin Panel
            case 4:{
                int amt;
                char select;
                string prod, pin;
                //char yn;
                cout<<"Enter your admin Pin : "<<endl;
                cin>>pin;
                if(pin=="00000"){
                    cout<<"******Welcome to admin Panel******"<<endl;

                    cout<<"Do you want add product to the store Press[Y] or Press [N] to exit : "<<endl;
                    cin>>select;
                    if(select == 'Y' || select == 'y'){
                        while(true){
                                cout<<"Enter the Product Name : "<<endl;
                                //cin>>prod;
                                cin.ignore();
                                getline(cin,prod);
                                cout<<"Enter the Price [ Per Kg | Piece] : "<<endl;
                                cin>>amt;
                                userEnd[prod]=amt;
                                cout<<"Product Added to the System."<<endl;
                                cout<<"Do you want to add more Press [Y] or Press [N] to Back to Main Menu"<<endl;
                                cin>>select;
                                if( select =='n' || select == 'N'){
                                    break;
                                }
                            }
                    } else{
                        break;
                    }
                    // switch(select){
                    //     case ( 'Y' || 'y'):{
                    //         while(true){
                    //             cout<<"Enter the Product Name : "<<endl;
                    //             //cin>>prod;
                    //             cin.ignore();
                    //             getline(cin,prod);
                    //             cout<<"Enter the Price [ Per Kg | Piece] : "<<endl;
                    //             cin>>amt;
                    //             userEnd[prod]=amt;
                    //             cout<<"Product Added to the System."<<endl;
                    //             cout<<"Do you want to add more Press [Y] or Press [N] to Back to Main Menu"<<endl;
                    //             cin>>select;
                    //             if( select =='n' || select == 'N'){
                    //                 break;
                    //             }
                    //         }
                    //         break;
                    //     }
                    //     default:{
                    //         cout<<"Backing up to Main Menu."<<endl;
                    //         break;
                    //     }
                    // }
                } else{
                    cout<<"Wrong Pin Entered. \n Going to Main Menu."<<endl;
                }
                break;
            }
            
            //feedback
            case 5:{
                char n;
                string message;
                cout<<"Enter your Message : "<<endl;
                cin.ignore();
                getline(cin,message);
                cout<<"Your feedback has been recieved. "<<endl<<endl<<message<<endl<<endl;
                cout<<"Do you want to buy Press {A} or Press {B} to exit : "<<endl;
                cin>>n;
                if(n=='B' || n=='b'){
                    return 0;
                }
                break;
            }

            //Exit
            case 6:{
                cout<<"Thank you, Visit again."<<endl;
                return 0;
                break;
            }
            default:{
                cout<<"Invalid Argument."<<endl;
            }

        }
    }
    
    return 0;
}