#ifndef _EVENT_H
#define _EVENT_H

class event {

public:
	event();
	~event();
	int get_nMuon() {return _nMuon;};
	int get_nJet() {return _nJet;};
	void set_values(int nMuon, int nJet);
	bool pass_selection();

private:
	int _nMuon;
	int _nJet;

};

#endif