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

int main()
{
    return 0;
}