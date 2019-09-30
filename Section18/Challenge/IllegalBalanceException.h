#ifndef __ILLEGAL_BALANCE_EXCEPTION_H__
#define __ILLEGAL_BALANCE_EXCEPTION_H__


class IllegalBalanceException : public std::exception
{
public:
    IllegalBalanceException() noexcept = default;
    ~IllegalBalanceException() = default;
    virtual const char *what() const noexcept override
    {
      return "Illegal balance exception occurred\n";
    }
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
