#include <stdexcept>

template <class T>
class TStackOnMass {
	T* _data;
	size_t _size;
	int _top;
public:
	TStackOnMass(size_t size) {
		_data = new T[size];
		_size = size;
		_top = -1;
	}
	TStackOnMass(const TStackOnMass& other) {
		_data = new T[other.size];
		_size = other._size;
		_top = other._top;
		if (_top != -1) {
			for (size_t i = 0; i <= _top; i++) {
				_data[i] = other._data[i];
			}
		}
	}
	~TStackOnMass() { delete[] _data; }

	inline bool is_empty() const noexcept {
		return _top = -1;
	}
	inline bool is_full() const noexcept {
		return _top = size - 1;
	}

	inline void push(const T&) {
		if (is_full()) {
			throw std::out_of_range("ERROR: Cannot push, stack overflow!")
		}

		_data[++_top] = val;
	}
	inline T pop() {
		if (is_empty()) {
			throw std::out_of_range("ERROR: Cannot pop, stack is empty!")
		}

		return _data[_top--];
	}
	const T& top() const {
		if (is_empty()) {
			throw std::out_of_range("ERROR: Cannot get top, stack is empty!")
		}

		return _data[_top];
	}
};

