//Ques1
// *
// **
// ***
// ****
// *****
// #include <stdio.h>
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Ques2
//     *
//    **
//   ***
//  ****
// *****
//  #include <stdio.h>
//  int main()
//  {
//      for (int i = 0; i < 5; i++)
//      {
//         for (int k = 1; k < 5-i; k++)
//         {
//             printf(" ");
//         }
//          for (int j = 0; j <= i; j++)
//          {
//              printf("*");
//          }
//          printf("\n");
//      }
//      return 0;
//  }

//Qes3
// *****
// **** 
// ***  
// **   
// * 
// #include <stdio.h>
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 5; j > i; j--)
//         {
//            printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Ques4
// *****
//  ****
//   ***
//    **
//     *
// #include <stdio.h>
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int k = 0; k < i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 5; j > i; j--)
//         {
//            printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Ques5
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int k = 1; k <= 5-i; k++)
//         {
//            printf(" ");
//         }
        
//         for (int j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }
//        printf("\n"); 
//     }
//     return 0;
// }

//Ques6
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int k = 1; k < i; k++)
//         {
//            printf(" ");
//         }
        
//         for (int j = 5; j >= i; j--)
//         {
//             printf("* ");
//         }
//        printf("\n"); 
//     }
//     return 0;
// }

//Ques7
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// #include <stdio.h>
// int main()
// {
//            for (int i = 1; i <= 5; i++)
//        {
//            for (int j = 5; j >= i; j--)
//            {
//               printf("*");
//            }
//            for (int k = 1; k < i; k++)
//            {
//                printf("  ");
//            }
//            for (int j = 5; j >= i; j--)
//            {
//                printf("*");
//            }
//           printf("\n");
//        }
//     return 0;
// }

//Ques8
//    1
//   121
//  12321
// 1234321
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int k = 1; k <= 4-i; k++)
//         {
//             printf(" ");
//         }       
//         if (i>=2)
//         {
//             for (int p = 1; p < i; p++)
//             {
//                 printf("%d",p);
//             }           
//         }
//         for (int j = i; j >= 1; j--)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Ques9
// 1234321
//  12321
//   121
//    1
//  #include <stdio.h>
//  int main()
//  {
//      for (int i = 4; i >= 1; i--)
//      {
//         for (int k = 4-i; k >= 1; k--)
//         {
//             printf(" ");
//         }       
//          if (i>=2)
//          {
//              for (int p = 1; p < i; p++)
//              {
//                  printf("%d",p);
//              }           
//          }
//          for (int j = i; j >= 1; j--)
//          {
//              printf("%d",j);
//          }
//          printf("\n");
//      }
//      return 0;
//  }

//Ques10.
// 1 2 3 4 4 3 2 1 
// 1 2 3     3 2 1 
// 1 2         2 1 
// 1             1 
// #include <stdio.h>
// int main()
// {
//     for (int i = 4; i >= 1 ; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ",j);
//         }
//         for (int k = 1; k <= 4-i; k++)
//         {
//             printf("    ");
//         }        
//         for (int j = i; j >= 1; j--)
//         {
//             printf("%d ",j);
//         }       
//         printf("\n");
//     }
//     return 0;
// }

//Ques11.
//Space print nai ho rha hai
//  #include <stdio.h>
//  int main()
//  {
//      for (char i = 'A'; i <= 'E'; i++)
//      {
//          for (int k = 1; k <= 5-i; k++)
//          {
//              printf(" ");
//          }       
//          if (i>='B')
//          {
//              for (char p = 'A'; p < i; p++)
//              {
//                  printf("%c ",p);
//              }           
//          }
//          for (char j = i; j >= 'A'; j--)
//          {
//              printf("%c ",j);
//          }
//          printf("\n");
//      }
//      return 0;
//  }

//Ques12.
// ABCDCBA
//  ABCBA
//   ABA
//    A
// #include <stdio.h>
// int main()
// {
//     for (char i = 'D'; i >= 'A'; i--)
//     {
//         for (char k = 'D'; k > i; k--)
//         {
//             printf(" ");
//         } 
//         for (char j = 'A'; j < i; j++)
//         {
//             printf("%c",j);
//         }
//            for (char j = i; j >= 'A'; j--)
//            {
//              printf("%c",j);
//            }
//         printf("\n");
//     }
//     return 0;
// }

//Ques13.
// ABCDEFGGFEDCBA
// ABCDEF  FEDCBA
// ABCDE    EDCBA
// ABCD      DCBA
// ABC        CBA
// AB          BA
// A            A
// #include <stdio.h>
// int main()
// {
//            for (char i = 'G'; i >= 'A'; i--)
//        {
//            for ( char j = 'A'; j <= i; j++)
//            {
//                printf("%c",j);
//            }
//             for (char k = 'G'; k > i; k--)
//            {
//                printf("  ");
//            }
//            for (char j = i; j >= 'A'; j--)
//            {
//                printf("%c",j);
//            }
           
//            printf("\n");
//        }
//     return 0;
// }

//Ques14.
// *
// **   
// * *  
// *  * 
// *****
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if(j==i || i==5 || j==1)
//             printf("*");
//             else
//             printf(" ");           
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Ques15.
//     *
//    **
//   * *
//  *  *
// *****
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int k = 1; k <= 5-i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             if(j==i || i==5 || j==1)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Ques16.
//         *     
//        * *    
//       *   *   
//      *     *  
//     *       * 
//    *         *
//   *           *
//  *             *
// * * * * * * * * *
//  #include <stdio.h>
//  int main()
//  {
//      for (int i = 1; i <= 9; i++)
//      {
//         for (int k = 1; k <= 9-i; k++)
//         {
//             printf(" ");
//         }
        
//          for (int j = 1; j <= i; j++)
//          {
//              if(j==i || i==9 || j==1)
//              printf("* ");
//              else
//              printf("  ");           
//          }
//          printf("\n");
//      }
//      return 0;
//  }

//Ques17.
// * * * * * * * * * 
//  *             *  
//   *           *   
//    *         *    
//     *       *     
//      *     *
//       *   *
//        * *
//         *
//  #include <stdio.h>
//  int main()
//  {
//      for (int i = 9; i >= 1; i--)
//      {
//         for (int k = 1; k <= 9-i; k++)
//         {
//             printf(" ");
//         }
        
//          for (int j = 1; j <= i; j++)
//          {
//              if(j==i || i==9 || j==1)
//              printf("* ");
//              else
//              printf("  ");           
//          }
//          printf("\n");
//      }
//      return 0;
//  }

//Ques18.
//          *     
//         * *    
//        * * *   
//       * * * *  
//      * * * * * 
//     * * * * * *
//    * * * * * * *
//   * * * * * * * *
//  * * * * * * * * *
//   * * * * * * * *
//    * * * * * * *
//     * * * * * *
//      * * * * *
//       * * * *
//        * * *
//         * *
//          *
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i < 10; i++)
//     {
//         for (int k = 1; k <= 10-i; k++)
//         {
//             printf(" ");
//         }      
//         for (int j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }      
//         printf("\n");
//     }
//     for (int i = 1; i <= 8; i++)
//     {
//           for (int k = 1; k <= i; k++)
//         {
//             printf(" ");
//         }
//          for (int j = 8; j >= i ; j--)
//         {
//             printf(" *");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Ques20.
//  * * * *                    * * * *    
// * * * * * *              * * * * * *   
// * * * * * * * *        * * * * * * * * 
//  * * * * * * * * * * * * * * * * * * * 
//   * * * * * * * * * * * * * * * * * *  
//    * * * * * * * * * * * * * * * * *
//     * * * * * * * * * * * * * * * *
//      * * * * * * * * * * * * * * *
//       * * * * * * * * * * * * * *
//        * * * * * * * * * * * * *
//         * * * * * * * * * * * *
//          * * * * * * * * * * *
//           * * * * * * * * * *
//            * * * * * * * * *
//             * * * * * * * *
//              * * * * * * *
//               * * * * * *
//                * * * * *
//                 * * * *
//                  * * *
//                   * *
//                    *
// #include <stdio.h>
// int main()
// {
//     for (int i = 4; i <= 9 ; i+=2)
//     {
//         for (int k = 4; k <= 9-i; k+=2)
//         {
//            printf(" ");
//         }      
//         for (int j = 1; j <= i ; j++)
//         {
//             printf("* ");
//         }
//            for (int k = 1; k <= 9-i; k+=2)
//         {
//            printf("      ");
//         }       
//           for (int j = 1; j <= i ; j++)
//         {
//             printf(" *");
//         }
//      printf("\n");   
//     }
//       for (int i = 1; i <= 19; i++)
//      {
//            for (int k = 1; k <= i; k++)
//          {
//              printf(" ");
//          }
//           for (int j = 19; j >= i ; j--)
//          {
//              printf("* ");
//          }
//          printf("\n");
//      }   
//     return 0;
// }

//Ques20.
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************
// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *
//   #include <stdio.h>
//   int main()
//   {
//       int n;
//       printf("Entet a number:: ");
//       scanf("%d",&n);
//       for (int i = 1; i <= n; i++)
//       {
//           for (int j = 1; j <= i; j++)
//           {
//              printf("*");
//           }
//           for (int k = 1; k <= n-i; k++)
//           {
//               printf("  ");
//           }
//           for (int j = 1; j <= i; j++)
//           {
//               printf("*");
//           }
//          printf("\n");
//       }
//       for (int i = 1; i <= n; i++)
//       {
//           for ( int j = n; j >= i; j--)
//           {
//               printf("*",j);
//           }
//            for (int k = 1; k < i; k++)
//           {
//               printf("  ");
//           }
//           for ( int j = n; j >= i; j--)
//           {
//               printf("*");
//           }
//           printf("\n");
//       }
//       return 0;
//   }