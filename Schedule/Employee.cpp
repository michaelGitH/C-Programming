#include"Employee.h"

Employee::Employee(int h, int d) :
	hours(h>110&&h<195? h: 168), days(d==30||d==31?d:30),
	schedule(new int[days])
{
	workHour();
	workSch();
}

void Employee::workHour() {
	while (hours % 11 != 0) {
		hours -= 10;
		work10++;
	}
	work11 = hours / 11;
}

void Employee::workSch(int d, int m) {
	for (int i = 0; i <= days; i++)
		schedule[i] = 0;
	int first;
	int w10 = work10, w11 = work11;
	if (d > 0 && d <= 31 && (m == 30 || m == 31)) {
		if (m - d >= 2) first = 1, eDay = 0;
		else if (m - d == 1) first = 2, eDay = 0;
		else if (m - d == 0) first = 3, eDay = 1;
		for (; first <= days && (w10>0 && w11>0); first += 3) {
			if (w11 > 0 && w10 > 0) {
				schedule[first] = 11;
				schedule[++first] = -10;
				--w10, --w11;
			}
			else if (w10 > 1) {
				schedule[first] = 10;
				schedule[++first] = -10;
				w10 -= 2;
			}
			else if (w11 > 1) {
				schedule[first] = 11;
				schedule[++first] = -11;
				w11 -= 2;
			}
			else if (w10 == 1) schedule[first] = 10, w10--;
			else if (w11 == 1) schedule[first] = 11, w11--;
		}
	}
	else {
		cerr << "Некорректные данные. Будут установлены значения по умолчанию!";
	}
	if (w10 > 0) hh(w10, 10);
	if (w11 > 0) hh(w11, 11);
}

int Employee::getDays() const {
	return days;
}

void Employee::hh(int w, int h) {
	hh_s(w, h);
	int i;
	for (i = 1; i < days && w > 0; ++i) 
		if (step(i)) {
			schedule[i] = h, --w;
		}
}

void Employee::hh_s(int &w, int h) {
	int count = 0, i;
	for (i = 0; i < days && w > 0; ++i) {
		if (schedule[i] == 0) count++;
		else if (count >= 4) {
			if (((i - count - 2) >= 0 && schedule[i - count - 2] == 0) || ((i - count - 3) >= 0 && schedule[i - count - 3] == 0))
				schedule[i - count] = h, --w;
			else if ((i<days - 1 && schedule[i + 1] == 0) || (i<days - 2 && schedule[i + 2] == 0))
				schedule[i - 1] = h, --w;
			count = 0;
		}
		else count = 0;
	}
	count = 0;
	for (i = 0; i < days && w > 0; ++i) {
		if (schedule[i] == 0) count++;
		else if (count >= 3) {
			if (((i - count - 2) >= 0 && schedule[i - count - 2] == 0) || ((i - count - 3) >= 0 && schedule[i - count - 3] == 0))
				schedule[i - count] = h, --w;
			else if ((i<days - 1 && schedule[i + 1] == 0) || (i<days - 2 && schedule[i + 2] == 0))
				schedule[i - 1] = h, --w;
			count = 0;
		}
		else count = 0;
	}
}

bool Employee::step(int d) {
	if (schedule[d] != 0) return false;
	if (d == 0 && eDay == 0 &&
		(schedule[d + 1] == 0 || schedule[d + 2] == 0
			|| schedule[d + 3] == 0)) return true;
	if (d == 1 && ((schedule[0] == 0 && (schedule[2] == 0 || schedule[3] == 0 ||
		schedule[4] == 0)) || (eDay == 0 && (schedule[2] == 0 || schedule[3] == 0))))
		return true;
	if (d == 2 && ((schedule[1] == 0 && (schedule[3] == 0 || schedule[4] == 0 || schedule[5] == 0))
		|| (schedule[0] == 0 && (schedule[3] == 0 || schedule[4] == 0))
		|| (schedule[3] == 0 && eDay == 0))) return true;
	if ((schedule[d - 1] == 0 && (schedule[d + 1] == 0 || schedule[d + 2] == 0 || schedule[d + 3] == 0))
		|| (schedule[d - 2] == 0 && (schedule[d + 1] == 0 || schedule[d + 2] == 0))
		|| (schedule[d - 3] == 0 && schedule[d + 1] == 0)) return true;
	return false;
}

int Employee::workSch(bool three, int d, int m) {
	if (!three) {
		workSch(d, m);
		return 0;
	}
	for (int i = 0; i <= days; ++i)
		schedule[i] = 0;
	int first;
	int w10 = work10, w11 = work11;
	if (d > 0 && d <= 31 && (m == 30 || m == 31)) {
		if (m - d >= 2) first = 1, eDay = 0;
		else if (m - d == 1) first = 2, eDay = 0;
		else if (m - d == 0) first = 3, eDay = 1;
		int flag = 0;
		for (; first <= days && (w10>0 && w11>0); first += 4) {
			if (w11 > 0 && w10 > 0) {
				schedule[first] = 11;
				schedule[++first] = -10;
				--w10, --w11;
				if (flag == 0 && w11 > 0) { schedule[++first] = 11; --w11; }
				else if (flag == 0 && w10 > 0) { schedule[++first] = -10; --w10; }
			}
			else if (w10 > 1) {
				schedule[first] = 10;
				schedule[++first] = -10;
				w10 -= 2;
				if (flag == 1 && w10 > 0) { schedule[++first] = -10; --w10; }
			}
			else if (w11 > 1) {
				schedule[first] = 11;
				schedule[++first] = -11;
				w11 -= 2;
				if (flag == 1 && w11 > 0) { schedule[++first] = -11; --w11; }
			}
			else if (w10 == 1) schedule[first] = 10, w10--;
			else if (w11 == 1) schedule[first] = 11, w11--;
		}
	}
	else {
		cerr << "Некорректные данные. Будут установлены значения по умолчанию!";
	}
	cout << "До корректировки:\n" << *this << endl << endl;
	if (w10 > 0) hh(w10, 10);
	if (w11 > 0) hh(w11, 11);
	return 0;
}

ostream &operator<<(ostream &output, const Employee &right) {
	for (int i = 1; i <= right.days; ++i) {
		output << right.schedule[i] << ' ';
	}
	output << '\n';
	return output;
}
