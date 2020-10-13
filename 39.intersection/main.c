#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	float x1,y1,x2,y2,x,y,a,g,d,f,c,b,p,q,r,s,d1,areat,areac,angle,final,i=0;
	printf("Enter 1st coordinate\n");
	scanf("%f%f",&x1,&y1);
	printf("Enter 2nd coordinate\n");
	scanf("%f%f",&x2,&y2);
	d=10;
	if(y1>=y2){f=y2;g=y1;}
	else{f=y1;g=y2;}
	for(y=f-d;y<=g+d;y+=.001)
	{
		x=x2-sqrt(pow(d,2)-pow(y2-y,2));
		b=x2+sqrt(pow(d,2)-pow(y2-y,2));
		a=x1-sqrt(pow(d,2)-pow(y1-y,2));
		c=x1+sqrt(pow(d,2)-pow(y1-y,2));

        x=round(x*100)/100;
		x=(int)(x*10)/10.0;
		b=round(b*100)/100;
		b=(int)(b*10)/10.0;
		a=round(a*100)/100;
		a=(int)(a*10)/10.0;
		c=round(c*100)/100;
		c=(int)(c*10)/10.0;

		if((abs(x)<100000000)||(abs(b)<100000000))
		{



			if((x==a)||(x==c))
			{
			    p=x;
			    q=y;
			    i++;
			    break;
			}

		}
	}

	for(y=f-d;y<=g+d;y+=.001)
	{
		x=x2-sqrt(pow(d,2)-pow(y2-y,2));
		b=x2+sqrt(pow(d,2)-pow(y2-y,2));
		a=x1-sqrt(pow(d,2)-pow(y1-y,2));
		c=x1+sqrt(pow(d,2)-pow(y1-y,2));

        x=round(x*100)/100;
		x=(int)(x*10)/10.0;
		b=round(b*100)/100;
		b=(int)(b*10)/10.0;
		a=round(a*100)/100;
		a=(int)(a*10)/10.0;
		c=round(c*100)/100;
		c=(int)(c*10)/10.0;

		if((abs(x)<100000000)||(abs(b)<100000000))
		{


			if((b==a)||(b==c))
			{
			    r=b;
			    s=y;
			    i++;
				break;
			}
       }
	}

	areat=abs(x1*(q-s)+p*(s-y1)+r*(y1-q))/2;
	d1=sqrt(pow(p-r,2)+pow(q-s,2));
	angle=acos((200-pow(d1,2))/200);
	areac=(pow(d,2)*angle)/2;
	final=2*(areac-areat);

	if(i==2)
	{
	    printf("\t\t\tArea of the intersection is %f\n",final);
	}
	else
	{
	printf("\t\t\tDoesn't intersect\n");
	}

return 0;
}
