#include<stdio.h>
#include<math.h>
int main()
{
    int options ;
    float ans ;
    printf("1. Calculate the area of a circle.\n") ;
    printf("2. Calculate the area of a rectangle.\n") ;
    printf("3. Calculate the area of a triangle.\n") ;
    printf("4. Exit.\n") ;
    printf("ENTER WHICH CALCULATION DO YOU WANT TO PERFORM:") ;
    scanf("%d",&options) ;
    switch(options)
    { 
      case 1 :
      {
        float radius ;
        printf("ENTER THE RADIUS OF CIRCLE:") ;
        scanf("%f",&radius) ;
        ans = M_PI*radius*radius ;
        printf("THE AREA OF THE CIRCLE IS:%.2f",ans) ;
        break ;
      }
      case 2 :
      {
        float length , width ;
        printf("ENTER THE LENGTH OF THE RECTANGLE:") ;
        scanf("%f",&length) ;
        printf("ENTER THE WIDTH OF THE RECTANGLE:") ;
        scanf("%f",&width) ;
        ans = length*width ;
        printf("THE AREA OF THE RECTANGLE IS:%.2f",ans) ;
        break ;
      }
      case 3 :
      {
        float base , height ;
        printf("ENTER THE BASE OF THE TRIANGLE:") ;
        scanf("%f",&base) ;
        printf("ENTER THE HEIGHT OF THE TRIANGLE:") ;
        scanf("%f",&height) ;
        ans = 0.5*base*height ;
        printf("THE AREA OF THE TRIANGLE IS:%.2f",ans) ;
        break ;
      }
      case 4 :
        printf("THANKS A LOT!") ;
        break ;
      default :
        printf("INVALID INPUT!") ;
    }
    return 0 ;
}