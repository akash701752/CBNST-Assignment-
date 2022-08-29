/*
Write a C program to calculate the volume of the following shapes: Cube, Cuboid, Sphere, Cylinder and 
Cone. Ask the user which one s/he wants to calculate, and take the appropriate required inputs. Then 
print the result. The input should be taken in the main function and calculations for every solid 
should be done in a separate function by passing appropriate arguments.
Example:
If the user chooses the option for cube, only one input is required i.e., the side. The volume is
then calculated and printed.
If the user chooses the option for cuboid, only three inputs are required i.e., length, breadth and
height. The volume is then calculated and printed.
*/
#include<stdio.h>
#include<math.h>
# define PI 3.14
int cube(int a)
{
    return pow(a,3);
}
int cuboid(int l,int b,int h)
{
    return (l*b*h);
}
float sphere(float r)
{
    return (4/3*PI)*pow(r,3);
}
float cone(float r, int h)
{
    return (1/3*PI*h)*pow(r,2);
}
int main()
{
    int ch , l , b , a , h ;
    float r ;
    float ans ;
    do{
        printf("1.Cube \n2.Cuboid \n3.Sphere \nCylinder \n4.Cone \n0.Exit\n");
        printf("Enter your Choice : ");
        scanf("%d",&ch);
        
        switch (ch)
        {
            case 1 : printf("Enter Side : ");
                scanf("%d",&a);
                printf("The Volume of Cube : %d\n",cube(a));
                break ;
            case 2 : printf("Enter L B H : ");
                scanf("%d%d%d",&l,&b,&h);
                printf("The Volume of Cuboid : %d\n",cuboid(l,b,h));
                break ;
            case 3 : printf("Enter Radius: ");
                scanf("%f",&r);
                printf("The Volume of Sphere : %f\n",sphere(r));
                break ;
            case 4 : printf("Enter Radius and Height : ");
                scanf("%f%d",&r,&h);
                printf("The Volume of Cone : %f\n",cone(r,h));
                break ;
            default : printf("Enter Valid Key\n");
                break;
        }
    }while(ch!=0);
    
    return 0 ;
}