// This file has been generated by Py++.

#include "boost/python.hpp"
#include "ptools.h"
#include "CoordsArray.pypp.hpp"

namespace bp = boost::python;

void register_CoordsArray_class(){

    bp::class_< PTools::CoordsArray >( "CoordsArray" )    
        .def( bp::init< >() )    
        .def( bp::init< PTools::CoordsArray const & >(( bp::arg("ca") )) )    
        .def( 
            "AddCoord"
            , &::PTools::CoordsArray::AddCoord
            , ( bp::arg("co") ) )    
        .def( 
            "AttractEulerRotate"
            , &::PTools::CoordsArray::AttractEulerRotate
            , ( bp::arg("phi"), bp::arg("ssi"), bp::arg("rot") ) )    
        .def( 
            "GetCoords"
            , &::PTools::CoordsArray::GetCoords
            , ( bp::arg("i"), bp::arg("co") ) )    
        .def( 
            "GetMatrix"
            , &::PTools::CoordsArray::GetMatrix )    
        .def( 
            "PrintMatrix"
            , &::PTools::CoordsArray::PrintMatrix )    
        .def( 
            "ResetMatrix"
            , &::PTools::CoordsArray::ResetMatrix )    
        .def( 
            "SetCoords"
            , &::PTools::CoordsArray::SetCoords
            , ( bp::arg("i"), bp::arg("co") ) )    
        .def( 
            "Size"
            , &::PTools::CoordsArray::Size )    
        .def( 
            "Translate"
            , &::PTools::CoordsArray::Translate
            , ( bp::arg("tr") ) )    
        .def( 
            "unsafeGetCoords"
            , &::PTools::CoordsArray::unsafeGetCoords
            , ( bp::arg("i"), bp::arg("co") ) );

}