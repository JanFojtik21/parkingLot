#include "parking_lot_error.h"

parking_lot_error::parking_lot_error(const std::string &msg):std::range_error(msg)
{

}
