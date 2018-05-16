#include "usr.h"
#include "ncc.h"
#include "cla_get.h"
#include "col_get.h"

int main(void)
{

	cout << "\tClassification File Name:\t";
	string claFileName;
	cin >> claFileName;
	vector<ncc> dataS = cla_get(claFileName);

	cout << "\tColor File Name:\t";
	string colFileName;
	cin >> colFileName;
	col_get(dataS, colFileName);

	cout << "dataset laber name:\t";
	string dataset_laber;
	cin >> dataset_laber;
	
	ofstream fout(dataset_laber + "color_strip.txt");
	
	fout << "DATASET_COLORSTRIP\nSEPARATOR SPACE" << endl;
	fout << "DATASET_LABEL " <<  dataset_laber << endl;

	for(ever) {
		cout << "BRANCHES' color as same as colorstrip?(Y/N)";
		char ch;
		cin >> ch;
		if (ch == 'Y') { fout << "COLOR_BRANCHES 1" << endl; break; }
		if (ch == 'N') { fout << "COLOR_BRANCHES 0" << endl; break; }
	}

	fout << "DATA" << endl;
	for (int i = 0; i < dataS.size(); i++) {
		fout << dataS[i].name << " " << dataS[i].color << " " << "COL" << dataS[i].color << endl;
	}

	return 0;
}