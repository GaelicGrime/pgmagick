#include <boost/python.hpp>
#include <boost/cstdint.hpp>

#include <Magick++/Include.h>

using namespace boost::python;


void __OrientationType()
{
#ifndef GM_1_1_x
    enum_< Magick::OrientationType >("OrientationType")
        .value("UndefinedOrientation", Magick::UndefinedOrientation)
        .value("TopLeftOrientation", Magick::TopLeftOrientation)
        .value("TopRightOrientation", Magick::TopRightOrientation)
        .value("BottomRightOrientation", Magick::BottomRightOrientation)
        .value("BottomLeftOrientation", Magick::BottomLeftOrientation)
        .value("LeftTopOrientation", Magick::LeftTopOrientation)
        .value("RightTopOrientation", Magick::RightTopOrientation)
        .value("RightBottomOrientation", Magick::RightBottomOrientation)
        .value("LeftBottomOrientation", Magick::LeftBottomOrientation)
    ;
#endif
}
