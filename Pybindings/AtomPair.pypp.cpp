// This file has been generated by Py++.

#include "boost/python.hpp"
#include "ptools.h"
#include "AtomPair.pypp.hpp"

namespace bp = boost::python;

void register_AtomPair_class(){

    bp::class_< PTools::AtomPair >( "AtomPair" )    
        .def_readwrite( "atlig", &PTools::AtomPair::atlig )    
        .def_readwrite( "atrec", &PTools::AtomPair::atrec );

}