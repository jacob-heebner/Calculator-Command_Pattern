/*
CURRENTLY NOT USED
*/

template <typename T>
class auto_ptr {
public:
	//constructors
	auto_ptr(void);
	auto_ptr(T * ptr);

	//destructor
	~auto_ptr(void);

	// operator overloading
	T * operator -> (void);
	T & operator * (void);
	operator T * (void);

private:
	//pointer to the memory
	T * ptr_;
};