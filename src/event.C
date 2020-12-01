#include "event.h"

event::event() {

};

event::~event() {

};

void event::set_values(int nMuon, int nJet) {
	_nMuon = nMuon;
	_nJet = nJet;
}

bool event::pass_selection() {
	if (_nMuon >= 2 and _nJet >=3) return true;
	else return false;
}