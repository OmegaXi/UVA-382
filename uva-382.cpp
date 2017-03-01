#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

main()
{
	cout<<"PERFECTION OUTPUT"<<endl;
	int n,sqrtn,sum;
	while((cin>>n)&&n)
	{
		sqrtn=(int)sqrt(n);
		sum=1;
		for(int i=2;i<=sqrtn;i++)
			if(n%i==0)
				sum+=i+n/i;
            if(sqrtn*sqrtn==n)
                sum-=sqrtn;
			printf("%5d  ",n);
			if(sum<n)
				puts("DEFICIENT");
			else if(sum>n)
				puts("ABUNDANT");
			else
				puts("PERFECT");
	}
	puts("END OF OUTPUT");
}
