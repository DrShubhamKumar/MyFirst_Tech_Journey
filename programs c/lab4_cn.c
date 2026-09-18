// #include <stdio.h>
// void main()
// {
//     int data[10];
//     int datatree[10], c, c1, c2, c3, i;
//     printf("Enter 4 bits of data one by one\n");
//     scanf("%d", &data[0]);
//     scanf("%d", &data[1]);
//     scanf("%d", &data[2]);
//     scanf("%d", &data[4]);
//     data[6] = data[0] ^ data[2] ^ data[4];
//     data[5] = data[0] ^ data[1] ^ data[4];
//     data[3] = data[0] ^ data[1] ^ data[2];

//     printf("\n Encoded Data is:\n");
//     for (i = 0; i < 7; i++)
//     {
//         printf("%d", data[i]);
//         printf("\n\n Enter recived data bits one by one\n");
//         for (i = 0; i < 7; i++)
//             scanf("%d", &datatree[i]);
//         c1 = datatree[6] ^ datatree[4] ^ datatree[2] ^ datatree[0];
//         c2 = datatree[5] ^ datatree[4] ^ datatree[1] ^ datatree[0];       
//         c3 = datatree[3] ^ datatree[2] ^ datatree[1] ^ datatree[0];
//         c = c3 * 4 + c2 * 2 + c1;
//         if (c == 0)
//         {
//             printf("\n No error while transmission od data\n");
//         }
//         else
//         {
//             printf("\n Error on position:%d", c);

//             printf("\n Data sent:");
//             for (i = 0; i < 7; i++)
//             {
//                 printf("%d", data[i]);
//             }
//             printf("\n Data recivied:");
//             for (i = 0; i < 7; i++)
//             {
//                 printf("%d", datatree[i]);
//                 printf("\n Correct message\n");
//             }
//             if (datatree[7 - c] == 0)
//             {
//                 datatree[7 - c] = 1
//             };
//             else
//             {
//                 datatree[7 - c] = 0;
//             }
//         }

//         for (i = 0; i < 7; i++)
//         {
//             printf("%d", datatree[i]);
//         }
//     }
// }



//Computer network lab 4 program( Hamming algorithm code error detecting)
#include <stdio.h>

void main() {
    int data[10];
    int dataatrec[10], c, c1, c2, c3, i;

    printf("Enter 4 bits of data one by one (0 or 1):\n");
    scanf("%d", &data[2]); // d1
    scanf("%d", &data[4]); // d2
    scanf("%d", &data[5]); // d3
    scanf("%d", &data[6]); // d4

    // Hamming Code Calculation (P1, P2, D1, P4, D2, D3, D4)
    data[0] = data[2] ^ data[4] ^ data[6]; // P1
    data[1] = data[2] ^ data[5] ^ data[6]; // P2
    data[3] = data[4] ^ data[5] ^ data[6]; // P4

    printf("\nEncoded data is: ");
    for(i = 0; i < 7; i++) {
        printf("%d", data[i]);
    }

    printf("\n\nEnter 7 received data bits one by one:\n");
    for(i = 0; i < 7; i++) {
        scanf("%d", &dataatrec[i]);
    }

    // Syndrome calculation
    c1 = dataatrec[0] ^ dataatrec[2] ^ dataatrec[4] ^ dataatrec[6];
    c2 = dataatrec[1] ^ dataatrec[2] ^ dataatrec[5] ^ dataatrec[6];
    c3 = dataatrec[3] ^ dataatrec[4] ^ dataatrec[5] ^ dataatrec[6];
    
    c = (c3 * 4) + (c2 * 2) + c1;

    if(c == 0) {
        printf("\nNo error during transmission.\n");
    } else {
        printf("\nError detected on position: %d", c);
        
        // Correct the bit (c-1 because array starts at 0)
        if(dataatrec[c-1] == 0)
            dataatrec[c-1] = 1;
        else
            dataatrec[c-1] = 0;

        printf("\nCorrected message: ");
        for(i = 0; i < 7; i++) {
            printf("%d", dataatrec[i]);
        }
    }
}
