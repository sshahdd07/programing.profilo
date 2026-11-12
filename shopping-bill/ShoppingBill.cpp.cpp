#include <iostream>
#include <iomanip>

using namespace std;

int main(){ 
   
     double price,total,discount, finalTotal;
     int quantity;
     
     cout<< "Enter product price: " <<endl;
     cin >> price;
     
      cout << "Enter quantity: "<<endl;
     cin>>quantity;
     
     if(price<0|| quantity<0)
     {
     	cout<<"invalid input"<<endl;
	 }
    	else
    {
    	total=price*quantity;
    	cout << fixed << setprecision(2);
    	
    	cout<<"total before discount: "<<total<<endl;
    	
	if (total>50)
	 {
	      discount = total * 0.25;
	 }
	     else
     {
     	discount=0;
	 }
	 
	     finalTotal= total - discount;
	     
	cout<<" total after discount:  "<< finalTotal << endl;
	
}
	return 0;
}