#ifndef _LUMI_H
#define _LUMI_H

class lumi {

public:
	lumi();
	~lumi();
	float get_lumi(){return _lumi;};
	void set_lumi(float lumi);

private:
	float _lumi;
	
};

#endif