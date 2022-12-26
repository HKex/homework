#include <iostream>
using namespace std;
int main()
{
	int n,i;
cin>>n;
    if( n < 4 )
{
    cout<<"  *"<<endl;
	cout<<" * *"<<endl;
	cout<<"*   *"<<endl;
	cout<<" * *"<<endl;
	cout<<"  *"<<endl;
	for(int c=0;c<(n - 1);c++)
    
      cout<<" * *"<<endl<<"*   *"<<endl<<" * *"<<endl<<"  *"<<endl; 
    }
    else if( n > 4 && n < 6)
	{
	cout<<"    *"<<endl; 
	cout<<"   * *"<<endl;
	cout<<"  *   *"<<endl;
	cout<<" *     *"<<endl;
	cout<<"*       *"<<endl;
	cout<<" *     *"<<endl;
	cout<<"  *   *"<<endl;
	cout<<"   * *"<<endl;
	cout<<"    *"<<endl;
	for(int c=0;c<(n - 1);c++)
	cout<<"   * *"<<endl<<"  *   *"<<endl<<" *     *"<<endl<<"*       *"<<endl<<" *     *"<<endl<<"  *   *"<<endl<<"   * *"<<endl<<"    *"<<endl;
	}
	else if(n>5)
{
	cout<<"         *"<<endl; 
	cout<<"        * *"<<endl;
	cout<<"       *   *"<<endl;
	cout<<"      *     *"<<endl;
	cout<<"     *       *"<<endl;
	cout<<"    *         *	"<<endl;
	cout<<"   *           *	"<<endl;
	cout<<"  *             *"<<endl;
	cout<<" *               *	"<<endl;
	cout<<"*                 *	"<<endl; 
	cout<<" *               *	"<<endl;
	cout<<"  *             *"<<endl;
	cout<<"   *           *	"<<endl;
	cout<<"    *         *	"<<endl;
	cout<<"     *       *"<<endl;
	cout<<"      *     *"<<endl;
	cout<<"	       *   *"<<endl;
	cout<<"        * *"<<endl;
	cout<<"         *"<<endl;
	
	for(int c=0;c<(n - 1);c++)
    
      cout<<"        * *"
	  <<endl<<"       *   *"
	  <<endl<<"      *     *"
	  <<endl<<"     *       *"
	  <<endl<<"    *         *	"
	  <<endl<<"   *           *	"
	  <<endl<<"  *             *"
	  <<endl<<" *               *	"
	  <<endl
	<<"*                 *	"<<endl
	<<" *               *	"<<endl
	<<"  *             *"<<endl
	<<"   *           *	"<<endl
	<<"    *         *	"<<endl
	<<"     *       *"<<endl
	<<"      *     *"<<endl
	<<"	       *   *"<<endl
<<"        * *"<<endl
	<<"         *"<<endl;
	} 
} 
