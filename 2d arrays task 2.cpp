#include<iostream>
using namespace std;
int main()
{
	char arr[3][4]={{'e','r','t','y'},
					{'f','g','h','h'},
					{'b','j','v','a'}};
					
	int c=0;
	char n;
	cout<<"enter any character: ";
	cin>>n;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(n==arr[i][j])
			{
				c++;
			}
		}	
	}
	cout<<"character "<<n<<" accurs "<<c<<" times at index "<<index<<endl;				
}
