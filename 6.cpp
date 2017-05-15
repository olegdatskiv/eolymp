#include <iostream>
#include <algorithm>
using namespace std;
 
struct ticket {
	int id, validity, price;
};
 
int cutDown(ticket tickets[], int count) {
	for(int validity = 0; validity <= min(30, count - 1); validity++) {
		int ticketsCount = 0;
		for(int i = 0; i < count; i++) {
			if(tickets[i].validity == validity) {
				ticketsCount++;
			}
		}
		while(ticketsCount > validity) {
			int cheapestTicketPosition = -1;
			int cheapestTicketPrice = 101;
			for(int i = 0; i < count; i++) {
				if(tickets[i].validity == validity && tickets[i].price < cheapestTicketPrice) {
					cheapestTicketPrice = tickets[i].price;
					cheapestTicketPosition = i;
				}
			}
			tickets[cheapestTicketPosition] = tickets[--count];
			ticketsCount--;
		}
	}
	return count;
}
 
bool comparator(const ticket t1, const ticket t2) {
	return t1.id < t2.id;
}
 
int main() {
	int count;
	cin >> count;
	ticket tickets[count];
	for(int i = 0; i < count; i++) {
		tickets[i].id = i;
		cin >> tickets[i].validity >> tickets[i].price;
	}
	count = cutDown(tickets, count);
	sort(tickets, tickets + count, comparator);
	int maxProfit = 0;
	do {
		int profit = 0;
		for(int i = 0; i < count; i++) {
			profit += tickets[i].validity > i ? tickets[i].price * (tickets[i].validity - i) : 0;
		}
		maxProfit = max(profit, maxProfit);
	} while(next_permutation(tickets, tickets + count, comparator));
	cout << maxProfit << endl;
	return 0;
}