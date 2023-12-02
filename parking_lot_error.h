#ifndef PARKING_LOT_ERROR_H
#define PARKING_LOT_ERROR_H

#include <stdexcept>
#include <string>


class parking_lot_error : public std::range_error
{
public:
    parking_lot_error(const std::string &msg);

};

#endif // PARKING_LOT_ERROR_H
