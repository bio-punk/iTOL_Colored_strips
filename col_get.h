void col_get(vector<ncc> & d, string filename) {
	ifstream fin(filename);
	for(ever) {
		string familyName;
		string familyColor;
		getline(fin, familyName);
		getline(fin, familyColor);
		for (int i = 0; i < d.size(); i++) {
			if (d[i].color != "") { continue; }
			if (d[i].family == familyName) { d[i].color = familyColor; }
		}
		if (fin.eof()) { fin.close(); break; }
	}

}