/*
 * TicketMachine.h
 *
 *  Created on: 2017��1��13��
 *      Author: LYL
 */

#ifndef TICKETMACHINE_H_
#define TICKETMACHINE_H_

class TicketMachine {
public:
	TicketMachine();
	virtual ~TicketMachine();
	void showPrompt();			// ��ʾ
	void getMoney(int money);
	void printTicket();
	void showBalance();			// ���
	void printError();
private:
	const int PRICE;
	int balance;
	int total;
};

#endif /* TICKETMACHINE_H_ */
