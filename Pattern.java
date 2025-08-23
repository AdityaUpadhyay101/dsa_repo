

import java.util.*;

 class Pattern {
   
    static Scanner sc = new Scanner(System.in); // created once and accessible everywhere

static void square(int N) {

      for(int v1 = 0; v1 < N; ++v1) {

         for(int v2 = 0; v2 < N; ++v2) {

            System.out.print("* ");
         }

         System.out.println();
      }

   }


static void pyramid(int N){
    
    for (int i = 1; i <= N; i++)
    {
        int spaces = N-i;
        int stars = 2*i-1;
        
        //spaces
        for (int j =1; j<=spaces; j++)
        {
            System.out.print(" ");
        }
       
        // stars
        for(int j =1;j<=stars;j++){
            
            System.out.print("*");
        }
        
        // spaces
         for (int j =1; j<=spaces; j++)
        {
            System.out.print(" ");
        }
       

       
        System.out.println();
    }
}

static void rev_pyramid(int N){

   for(int i=1;i<=N;i++){
         
    int spac = i-1;
    int star = (2*N-1)-2*spac;

    for(int j=1;j<=spac;j++){
        System.out.print("  ");
    }
    for(int j=1;j<=star;j++){
        System.out.print("* ");
    }
    for(int j=1;j<=spac;j++){
        System.out.print("  ");
    }

    System.out.println();
   }
    
}

static void diamond_pyramid(int N){


    for (int i = 1; i <= 2*N; i++)
    {
        
            int spaces = N-i;
            int stars = 2*i-1;
        
        if(i>N){
            spaces = (i-N)-1;
             stars = (2*N-1)-2*spaces;
        }

        //spaces
        for (int j =1; j<=spaces; j++)
        {
            System.out.print(" ");
        }
       
        // stars
        for(int j =1;j<=stars;j++){
            
            System.out.print("*");
        }
        
        // spaces
         for (int j =1; j<=spaces; j++)
        {
            System.out.print(" ");
        }
       

       
        System.out.println();
    }
}

static void di_pyramid(int N){

for(int i=1; i<=2*N-1; i++){
   
    int space = N-i;
    int star = 2*i-1;
    if(i>N){
        space = i-N;
        star = (2*N-1)-2*space;
    }

    for(int j=1; j<=space;j++){
     System.out.print("  ");
    }

    for(int j=1; j<=star;j++){
        System.out.print("* ");
       }

    for(int j=1; j<=space;j++){
        System.out.print("  ");
       }

       System.out.println();
}

}

static void num_crown(int N){

  for(int i=1; i<=N; i++){
   
    int space = 2*N-2*i;
    
    //num
    for(int j=1; j<=i; j++){
    System.out.print(j+ " ");
    }
     //space
     for(int j=1; j<=space; j++){
        System.out.print("  ");
     }
     //num
     for(int j=i; j>=1; j--){
        System.out.print(j+ " ");
     }
     System.out.println();
  }

}

static void half_diamond(int N){

    for(int i=1; i<=2*N-1; i++){

     int space= N-i;
     int star= i;
     if(i>N){
        space = i-N;
        star = N-space;
     }

        for(int j=1;j<=star;j++){
     System.out.print("* ");
        }
        for(int j=1;j<=space;j++){
            System.out.print("  ");

        }
        for(int j=1;j<=space;j++){
            System.out.print("  ");

        }
        for(int j=1;j<=star;j++){
            System.out.print("* ");
               }
        
        System.out.println();
    }
}

static void diamond_hollow(int N){


    for(int i=1; i<=2*N; i++){

        int space=i-1;
        int star= N-space;
        if(i>N){
            star=i-N;
            space= N-star;
        }

        for(int j=1; j<=star; j++){
        System.out.print("* ");
        }
        for(int j=1; j<=space; j++){
            System.out.print("  ");
        }
        for(int j=1; j<=space; j++){
            System.out.print("  ");
        }
        for(int j=1; j<=star; j++){
            System.out.print("* ");
        }
        System.out.println();
    }
}




   public static void main(String[] var0) {
      

      System.out.println("enter no. of test cases:");
      int t = sc.nextInt();

      for(int v3 = 0; v3 < t; ++v3) {
         int n = sc.nextInt();
         diamond_hollow(n);
      }
       
    }

}