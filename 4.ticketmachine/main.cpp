/*
 * main.cpp
 *
 *  Created on: 2017��1��13��
 *      Author: LYL
 */
#include "TicketMachine.h"

int main(void)
{
	TicketMachine tm;
	tm.showPrompt();
	tm.showBalance();
	tm.getMoney(20);
	tm.showBalance();

	return 0;
}



