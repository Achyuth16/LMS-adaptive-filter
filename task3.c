#include<stdio.h>
float myLMS(float y,float k,float * e,float mu,float * state, float * coeff,const int length)
{
	float x;
	int i,c=length-1;
	for(i=0;i<length;i++)
{
	state[i]=state[i+1];
}
state[length-1]=x;
   for(i=0;i<length;i++)
   {
   	 
   	 while(c>=0)
   	 {
   	 	x=x+(coeff[i] *state[c]);
   	 	c--;
   	 }
   	 
   }
 
e[0]=k-y;
printf("The error sample is %f\n",e[0]);
for(i=0;i<length;i++)
{
	coeff[i]= coeff[i]+ (mu *e[0] * state[i]);
	printf("The updated coefficients are %f\n",coeff[i]);
}

}

int main(void)
{
	float mu=0.01,y=5,k=14,e[]={0};
	
	float state []=
	{ 1.54421,0.08593,-1.49159,-0.74230,-1.061581};
	
	float coeff[]=
	{ -0.831366,-0.979206,-1.15640,-0.53355,-2.00263};
	int length=5;
	
	myLMS(y,k,e,mu,state,coeff,length);
	return 0;
	
}


