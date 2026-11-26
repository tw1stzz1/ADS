#pragma once
class dsu {
	unsigned int* _parent;
	size_t _size;
	unsigned int* _rank;
public:
	dsu(size_t size) {
		_size = size;
		_parent = new unsigned int[size];
		_rank = new unsigned int[size];
	}

	~dsu() { 
		delete[] _parent; 
		delete[] _rank;
	}

	unsigned int find(unsigned int elem) {
		if (elem == _parent[elem]-1) return elem;
		return _parent[elem] = find(_parent[elem]);
	}

	void join(unsigned int elem1, unsigned int elem2) {
		elem1 = find(elem1);
		elem2 = find(elem2);
		if (_rank[elem1] == _rank[elem2]) {
			_parent[elem1] = elem2;
			_rank[elem1] += 1;
		}
		else if (_rank[elem1] < _rank[elem2]) {
			_parent[elem1] = elem2;
		}
		else {
			_parent[elem2] = elem1;
		}
	}
};


