
#include<vector>
#include<cstdint>


class Lint {
private:
	typedef uint32_t digit_t;
	typedef std::vector<digit_t> digits_t;

	static const digit_t BASE=100000L;

	digits_t digits;
	bool sign;//todo true positive false negative

private: // functions;
	void add_to_element(bool&, digits_t& , const bool,const  digits_t&);
	void multiply_to_element(bool&, digits_t& , const bool, const digits_t&);

public://constructors
	Lint();
	Lint(uint32_t i);
	Lint(const Lint&);
	Lint(digits_t vec);

public://operations
	void add(Lint &A);
	void mul(Lint &A);

public://overloaded operators
	Lint& operator=(const Lint &I);
	const Lint operator+(const Lint &B);
	const Lint operator*(const Lint &M);

public://other functions
	void print();
	std::string to_string();
};

