vector<ncc> cla_get(string filename) {
	ifstream fin(filename);
	vector<ncc> rt;
	for(ever) {
		if (fin.eof()) { break; }

		string name, family;
		getline(fin, name);
		getline(fin, family);
		if (name[0] == '>') { name.erase(name.begin()); }

		ncc tmp;
		tmp.name = name;
		tmp.family = family;
		rt.push_back(tmp);

		if (fin.eof()) { break; }
	}
	
	fin.close();
	return rt;
}
