// 21.	Numeric addresses for computers on the international network Internet are composed of four parts, separated by periods, of the form
// xx.yy.zz.mm
// where xx, yy, zz , and mm are positive integers. Locally, computers are usually known by a nickname as well. You are designing a program to process a list of Internet addresses, identifying all pairs of computers from the same locality. Create a structure type called address t with compo-nents for the four integers of an Internet address and a fifth component in which to store an associated nickname of ten characters. Your program should read a list of up to 100 addresses and nicknames terminated by a sentinel address of all zeros and a sentinel nickname.
// Sample Data
// 111.22.3.44 platte
// 555.66.7.88 wabash
// 111.22.5.66 green
// 0.0.0.0 none
// The program should display a list of messages identifying each pair of computers from the same locality, that is, each pair of computers with matching values in the first two components of the address. In the messages, the computers should be identified by their nicknames.
// Example Message
//    Machines platte and green are on the same local
// Follow the messages by a display of the full list of addresses and nicknames. Include in your pro-gram a scan address function, a print address function, and a local address function. Function local address should take two address structures as input parameters and return 1 (for true) if the addresses are on the same local network, and 0 (for false) otherwise.
#include <stdio.h>
#include <string.h>

// Structure definition for an Internet address with a nickname
typedef struct
{
    int xx, yy, zz, mm;
    char nickname[11];
} address_t;

// Function to scan an Internet address with a nickname
void scanAddress(address_t *addr)
{
    scanf("%d.%d.%d.%d %s", &addr->xx, &addr->yy, &addr->zz, &addr->mm, addr->nickname);
}

// Function to print an Internet address with a nickname
void printAddress(address_t addr)
{
    printf("%d.%d.%d.%d %s", addr.xx, addr.yy, addr.zz, addr.mm, addr.nickname);
}

// Function to check if two addresses are on the same local network
int localAddress(address_t addr1, address_t addr2)
{
    return (addr1.xx == addr2.xx && addr1.yy == addr2.yy);
}

int main()
{
    address_t addresses[100];
    int numAddresses = 0;
    int i, j;

    // Read the list of addresses and nicknames
    printf("Enter up to 100 addresses and nicknames, terminated by 0.0.0.0 none:\n");
    do
    {
        scanAddress(&addresses[numAddresses]);
        numAddresses++;
    } while (!(addresses[numAddresses - 1].xx == 0 && addresses[numAddresses - 1].yy == 0 &&
               addresses[numAddresses - 1].zz == 0 && addresses[numAddresses - 1].mm == 0 &&
               strcmp(addresses[numAddresses - 1].nickname, "none") == 0));

    // Display messages identifying pairs of computers from the same locality
    printf("\nMessages identifying computers on the same local network:\n");
    for (i = 0; i < numAddresses; i++)
    {
        for (j = i + 1; j < numAddresses; j++)
        {
            if (localAddress(addresses[i], addresses[j]))
            {
                printf("   Machines %s and %s are on the same local network\n", addresses[i].nickname, addresses[j].nickname);
            }
        }
    }

    // Display the full list of addresses and nicknames
    printf("\nFull list of addresses and nicknames:\n");
    for (i = 0; i < numAddresses; i++)
    {
        printAddress(addresses[i]);
        printf("\n");
    }

    return 0;
}
