C++ uses a number of keywords to identify operations and data descriptions; therefore, identifiers created by a programmer cannot match these keywords. The standard reserved keywords that cannot be used for programmer created identifiers are:

alignas, alignof, and, and_eq, asm, auto, bitand, bitor, bool, break, case, catch, char, char16_t, char32_t, class, compl, const, constexpr, const_cast, continue, decltype, default, delete, do, double, dynamic_cast, else, enum, explicit, export, extern, false, float, for, friend, goto, if, inline, int, long, mutable, namespace, new, noexcept, not, not_eq, nullptr, operator, or, or_eq, private, protected, public, register, reinterpret_cast, return, short, signed, sizeof, static, static_assert, static_cast, struct, switch, template, this, thread_local, throw, true, try, typedef, typeid, typename, union, unsigned, using, virtual, void, volatile, wchar_t, while, xor, xor_eq

Group	                                        Type names*	                  Notes on size/precision

Character types	                                   char	           Exactly one byte in size. At least 8 bits.
                                                 char16_t	        Not smaller than char. At least 16 bits.
                                                 char32_t	      Not smaller than char16_t. At least 32 bits.
                                                  wchar_t	     Can represent the largest supported character set.

Integer types (signed)	                        signed char	           Same size as char. At least 8 bits.
                                              signed short int	     Not smaller than char. At least 16 bits.
                                                signed int	         Not smaller than short. At least 16 bits.
                                             signed long int	     Not smaller than int. At least 32 bits.
                                           signed long long int	    Not smaller than long. At least 64 bits.

Integer types (unsigned)	                   unsigned char	    (same size as their signed counterparts)
                                            unsigned short int
                                            unsigned int
                                            unsigned long int
                                            unsigned long long int

Floating-point types	                          float	
                                                 double	                  Precision not less than float
                                               long double	              Precision not less than double

Boolean type	                                  bool	 
Void type	                                      void	                          no storage
Null pointer	                            decltype(nullptr)	


auto and decltype are powerful features recently added to the language. But the type deduction features they introduce are meant to be used either when the type cannot be obtained by other means or when using it improves code readability.
Note: inserting the endl manipulator ends the line (printing a newline character and flushing the stream).
