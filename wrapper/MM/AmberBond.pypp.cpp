// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AmberBond.pypp.hpp"

namespace bp = boost::python;

#include "SireCAS/expression.h"

#include "SireCAS/symbol.h"

#include "SireCAS/trigfuncs.h"

#include "SireError/errors.h"

#include "SireMM/cljnbpairs.h"

#include "SireMM/fouratomfunctions.h"

#include "SireMM/threeatomfunctions.h"

#include "SireMM/twoatomfunctions.h"

#include "SireMol/angleid.h"

#include "SireMol/atomidx.h"

#include "SireMol/bondid.h"

#include "SireMol/connectivity.h"

#include "SireMol/dihedralid.h"

#include "SireMol/improperid.h"

#include "SireMol/molecule.h"

#include "SireMol/partialmolecule.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "amberparams.h"

#include "amberparams.h"

SireMM::AmberBond __copy__(const SireMM::AmberBond &other){ return SireMM::AmberBond(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_AmberBond_class(){

    { //::SireMM::AmberBond
        typedef bp::class_< SireMM::AmberBond > AmberBond_exposer_t;
        AmberBond_exposer_t AmberBond_exposer = AmberBond_exposer_t( "AmberBond", "This simple class holds Amber parameters for a bond", bp::init< bp::optional< double, double > >(( bp::arg("k")=0, bp::arg("r0")=0 ), "Construct with the passed bond constant and equilibrium bond length") );
        bp::scope AmberBond_scope( AmberBond_exposer );
        AmberBond_exposer.def( bp::init< SireCAS::Expression const &, SireCAS::Symbol const & >(( bp::arg("eqn"), bp::arg("R") ), "Construct from the passed expression") );
        AmberBond_exposer.def( bp::init< SireMM::AmberBond const & >(( bp::arg("other") ), "") );
        { //::SireMM::AmberBond::energy
        
            typedef double ( ::SireMM::AmberBond::*energy_function_type)( double ) const;
            energy_function_type energy_function_value( &::SireMM::AmberBond::energy );
            
            AmberBond_exposer.def( 
                "energy"
                , energy_function_value
                , ( bp::arg("r") )
                , "Return the energy evaluated from this bond for the passed bond length" );
        
        }
        { //::SireMM::AmberBond::hash
        
            typedef ::uint ( ::SireMM::AmberBond::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireMM::AmberBond::hash );
            
            AmberBond_exposer.def( 
                "hash"
                , hash_function_value
                , "" );
        
        }
        { //::SireMM::AmberBond::k
        
            typedef double ( ::SireMM::AmberBond::*k_function_type)(  ) const;
            k_function_type k_function_value( &::SireMM::AmberBond::k );
            
            AmberBond_exposer.def( 
                "k"
                , k_function_value
                , "" );
        
        }
        AmberBond_exposer.def( bp::self != bp::self );
        AmberBond_exposer.def( bp::self < bp::self );
        AmberBond_exposer.def( bp::self <= bp::self );
        { //::SireMM::AmberBond::operator=
        
            typedef ::SireMM::AmberBond & ( ::SireMM::AmberBond::*assign_function_type)( ::SireMM::AmberBond const & ) ;
            assign_function_type assign_function_value( &::SireMM::AmberBond::operator= );
            
            AmberBond_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        AmberBond_exposer.def( bp::self == bp::self );
        AmberBond_exposer.def( bp::self > bp::self );
        AmberBond_exposer.def( bp::self >= bp::self );
        { //::SireMM::AmberBond::operator[]
        
            typedef double ( ::SireMM::AmberBond::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMM::AmberBond::operator[] );
            
            AmberBond_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireMM::AmberBond::r0
        
            typedef double ( ::SireMM::AmberBond::*r0_function_type)(  ) const;
            r0_function_type r0_function_value( &::SireMM::AmberBond::r0 );
            
            AmberBond_exposer.def( 
                "r0"
                , r0_function_value
                , "" );
        
        }
        { //::SireMM::AmberBond::toExpression
        
            typedef ::SireCAS::Expression ( ::SireMM::AmberBond::*toExpression_function_type)( ::SireCAS::Symbol const & ) const;
            toExpression_function_type toExpression_function_value( &::SireMM::AmberBond::toExpression );
            
            AmberBond_exposer.def( 
                "toExpression"
                , toExpression_function_value
                , ( bp::arg("R") )
                , "Return an expression to evaluate the energy of this bond, using the passed\nsymbol to represent the bond length" );
        
        }
        { //::SireMM::AmberBond::toString
        
            typedef ::QString ( ::SireMM::AmberBond::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::AmberBond::toString );
            
            AmberBond_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        AmberBond_exposer.def( "__copy__", &__copy__);
        AmberBond_exposer.def( "__deepcopy__", &__copy__);
        AmberBond_exposer.def( "clone", &__copy__);
        AmberBond_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::AmberBond >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AmberBond_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::AmberBond >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AmberBond_exposer.def( "__str__", &__str__< ::SireMM::AmberBond > );
        AmberBond_exposer.def( "__repr__", &__str__< ::SireMM::AmberBond > );
        AmberBond_exposer.def( "__hash__", &::SireMM::AmberBond::hash );
    }

}
